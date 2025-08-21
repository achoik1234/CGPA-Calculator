#include "FileManager.h"
#include<QFile>
#include<QTextStream>
#include<QDebug>
#include<algorithm>

FileManager::FileManager()
{}
bool FileManager::savToCSV(const QString &filePath ,const QVector<student> &students) {
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for writing:" << filePath;
        return false;
    }

    QTextStream out(&file);
    out << "Name,Class,Course,Grade,CreditHours,CGPA\n";

    // Sort students alphabetically
    QVector<student> sortedStudents = students;
    std::sort(sortedStudents.begin(), sortedStudents.end(),
              [](const student &a, const student &b) { return a.name < b.name; });

    for (const student &student : sortedStudents) {
        for (const Course &course : student.courses) {
            out << student.name << ","
                << student.className << ","
                << course.name << ","
                << course.grade << ","
                << course.creditHours << ","
                << student.cgpa << "\n";
        }
    }

    file.close();
    return true;
}

QVector<student> FileManager::loadFromCSV(const QString &filePath) {
    QVector<student> students;
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for reading:" << filePath;
        return students;
    }

    QTextStream in(&file);
    in.readLine(); // Skip header

    QHash<QString, student> studentMap;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        if (fields.size() >= 6) {
            QString name = fields[0];
            QString className = fields[1];
            QString courseName = fields[2];
            float grade = fields[3].toFloat();
            float creditHours = fields[4].toFloat();
            float cgpa = fields[5].toFloat();

            if (!studentMap.contains(name)) {
                studentMap[name] = student(name, className);
                studentMap[name].cgpa = cgpa;
            }
            studentMap[name].courses.append({courseName, grade, creditHours});
        }
    }

    students = studentMap.values().toVector();
    file.close();
    return students;
}

