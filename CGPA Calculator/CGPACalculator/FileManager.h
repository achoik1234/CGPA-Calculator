#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "student.h"
#include<QString>
#include<QVector>

class FileManager
{
public:
    FileManager();
    static bool savToCSV(const QString &filePath ,const QVector<student> &students);
    static QVector<student> loadFromCSV(const QString &FilePath);
};

#endif // FILEMANAGER_H
