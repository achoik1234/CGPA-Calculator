/********************************************************************************
** Form generated from reading UI file 'cgpa_calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGPA_CALCULATOR_H
#define UI_CGPA_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CGPA_Calculator
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *courseTable;
    QPushButton *addCourseButton;
    QPushButton *removeCourseButton;
    QPushButton *calculateButton;
    QLabel *label;
    QLabel *resultLabel;
    QLabel *label_3;
    QLineEdit *nameInput;
    QLineEdit *classInput;
    QLabel *label_4;
    QPushButton *saveButton;
    QPushButton *loadButton;
    QPushButton *pushButton;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CGPA_Calculator)
    {
        if (CGPA_Calculator->objectName().isEmpty())
            CGPA_Calculator->setObjectName("CGPA_Calculator");
        CGPA_Calculator->resize(440, 438);
        centralwidget = new QWidget(CGPA_Calculator);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 50, 2, 2));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        courseTable = new QTableWidget(centralwidget);
        if (courseTable->columnCount() < 3)
            courseTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        courseTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        courseTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        courseTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        courseTable->setObjectName("courseTable");
        courseTable->setGeometry(QRect(60, 90, 301, 192));
        QFont font;
        font.setUnderline(true);
        courseTable->setFont(font);
        addCourseButton = new QPushButton(centralwidget);
        addCourseButton->setObjectName("addCourseButton");
        addCourseButton->setGeometry(QRect(60, 290, 80, 24));
        removeCourseButton = new QPushButton(centralwidget);
        removeCourseButton->setObjectName("removeCourseButton");
        removeCourseButton->setGeometry(QRect(160, 290, 91, 24));
        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setGeometry(QRect(280, 290, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 221, 31));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setUnderline(true);
        label->setFont(font1);
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(180, 330, 101, 16));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        resultLabel->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 60, 61, 16));
        QFont font3;
        font3.setBold(true);
        label_3->setFont(font3);
        nameInput = new QLineEdit(centralwidget);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(130, 60, 113, 24));
        classInput = new QLineEdit(centralwidget);
        classInput->setObjectName("classInput");
        classInput->setGeometry(QRect(310, 60, 51, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 60, 49, 16));
        label_4->setFont(font3);
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(60, 360, 80, 24));
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName("loadButton");
        loadButton->setGeometry(QRect(280, 360, 80, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 360, 91, 24));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 330, 61, 16));
        label_5->setFont(font3);
        CGPA_Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CGPA_Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 440, 21));
        CGPA_Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(CGPA_Calculator);
        statusbar->setObjectName("statusbar");
        CGPA_Calculator->setStatusBar(statusbar);

        retranslateUi(CGPA_Calculator);

        QMetaObject::connectSlotsByName(CGPA_Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *CGPA_Calculator)
    {
        CGPA_Calculator->setWindowTitle(QCoreApplication::translate("CGPA_Calculator", "CGPA_Calculator", nullptr));
        QTableWidgetItem *___qtablewidgetitem = courseTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CGPA_Calculator", "Nouvelle colonne", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = courseTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CGPA_Calculator", "Course Name ", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = courseTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CGPA_Calculator", "Credit Hours", nullptr));
        addCourseButton->setText(QCoreApplication::translate("CGPA_Calculator", "Add Course ", nullptr));
        removeCourseButton->setText(QCoreApplication::translate("CGPA_Calculator", "Remove course", nullptr));
        calculateButton->setText(QCoreApplication::translate("CGPA_Calculator", "Calculate", nullptr));
        label->setText(QCoreApplication::translate("CGPA_Calculator", "CGPA Calculator", nullptr));
        resultLabel->setText(QCoreApplication::translate("CGPA_Calculator", "...", nullptr));
        label_3->setText(QCoreApplication::translate("CGPA_Calculator", "Full name:", nullptr));
        label_4->setText(QCoreApplication::translate("CGPA_Calculator", "Class:", nullptr));
        saveButton->setText(QCoreApplication::translate("CGPA_Calculator", "Save", nullptr));
        loadButton->setText(QCoreApplication::translate("CGPA_Calculator", "Load", nullptr));
        pushButton->setText(QCoreApplication::translate("CGPA_Calculator", "Quit", nullptr));
        label_5->setText(QCoreApplication::translate("CGPA_Calculator", "CGPA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CGPA_Calculator: public Ui_CGPA_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGPA_CALCULATOR_H
