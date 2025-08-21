#include "cgpa_calculator.h"
#include "ui_cgpa_calculator.h"


CGPA_Calculator::CGPA_Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CGPA_Calculator),
    currentStudent("", "")
{
    ui->setupUi(this);
    ui ->courseTable ->setColumnCount(3);
    ui->courseTable->setHorizontalHeaderLabels({"course","Grade","CreditHours"});
}

CGPA_Calculator::~CGPA_Calculator()
{
    delete ui;
}


void CGPA_Calculator::on_addCourseButton_clicked()
{
    int row = ui-> courseTable->rowCount();
    ui->courseTable-> insertRow(row);

}


void CGPA_Calculator::on_removeCourseButton_clicked()
{
    int row =ui->courseTable-> currentRow();
    if (row >=0){
        ui->courseTable->removeRow(row);
    }

}


void CGPA_Calculator::on_calculateButton_clicked()
{
    currentStudent.name= ui->nameInput->text();
    currentStudent.className= ui->classInput->text();
    currentStudent.courses.clear();
    for (int row = 0; row < ui->courseTable->rowCount(); ++row) {
        QString courseName = ui->courseTable->item(row, 0) ? ui->courseTable->item(row, 0)->text() : "";
        float grade = ui->courseTable->item(row, 1) ? ui->courseTable->item(row, 1)->text().toFloat() : 0.0f;
        float creditHours = ui->courseTable->item(row, 2) ? ui->courseTable->item(row, 2)->text().toFloat() : 0.0f;

        if (!courseName.isEmpty()) {
            currentStudent.courses.append({courseName, grade, creditHours});
        }
    }

    currentStudent.computeCGPA();
    qDebug() << "Calculated CGPA:" << currentStudent.cgpa;
    ui->resultLabel->setText(QString("CGPA: %1").arg(currentStudent.cgpa, 0, 'f', 2));

}


void CGPA_Calculator::on_saveButton_clicked()
{
    if (!currentStudent.isValid()) {
        QMessageBox::warning(this, "Error", "Please enter valid student data and at least one course!");
        return;
    }

    allStudents.append(currentStudent);
    QString filePath = QFileDialog::getSaveFileName(this, "Save Data", "", "CSV Files (*.csv)");
    if (!filePath.isEmpty()) {
        if (FileManager::savToCSV(filePath, allStudents)) {
            QMessageBox::information(this, "Success", "Data saved successfully!");
        }
    }

}


void CGPA_Calculator::on_loadButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Load Data", "", "CSV Files (*.csv)");
    if (!filePath.isEmpty()) {
        allStudents = FileManager::loadFromCSV(filePath);
        if (!allStudents.isEmpty()) {
            currentStudent = allStudents.last();
            updateTable();
        }
    }

}
void CGPA_Calculator::updateTable() {
    ui->nameInput->setText(currentStudent.name);
    ui->classInput->setText(currentStudent.className);
    ui->courseTable->setRowCount(0);

    for (const Course &course : currentStudent.courses) {
        int row = ui->courseTable->rowCount();
        ui->courseTable->insertRow(row);
        ui->courseTable->setItem(row, 0, new QTableWidgetItem(course.name));
        ui->courseTable->setItem(row, 1, new QTableWidgetItem(QString::number(course.grade)));
        ui->courseTable->setItem(row, 2, new QTableWidgetItem(QString::number(course.creditHours)));
    }

    ui->resultLabel->setText(QString("CGPA: %1").arg(currentStudent.cgpa, 0, 'f', 2));
}


void CGPA_Calculator::on_pushButton_clicked()
{
    QApplication::quit();
}

