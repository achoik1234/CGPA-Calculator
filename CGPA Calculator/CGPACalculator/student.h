#ifndef STUDENT_H
#define STUDENT_H

#include<QString>
#include<QVector>

struct Course{
    QString name;
    float grade;
    float creditHours;
};

class student
{
public:
    QString name;
    QString className;
    QVector<Course> courses;
    float cgpa;


    student();
    student( const QString &name, const QString &className);
    void computeCGPA();
    bool isValid() const ;
};

#endif // STUDENT_H
