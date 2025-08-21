#ifndef CGPA_CALCULATOR_H
#define CGPA_CALCULATOR_H

#include <QMainWindow>
#include<student.h>
#include<FileManager.h>
#include <QMessageBox>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class CGPA_Calculator; }
QT_END_NAMESPACE

class CGPA_Calculator : public QMainWindow
{
    Q_OBJECT

public:
    CGPA_Calculator(QWidget *parent = nullptr);
    ~CGPA_Calculator();

private slots:
    void on_addCourseButton_clicked();

    void on_removeCourseButton_clicked();

    void on_calculateButton_clicked();

    void on_saveButton_clicked();

    void on_loadButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::CGPA_Calculator *ui;
    student currentStudent;
    QVector<student> allStudents;

    void updateTable();
};
#endif // CGPA_CALCULATOR_H
