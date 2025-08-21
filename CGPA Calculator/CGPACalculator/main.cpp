#include "cgpa_calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CGPA_Calculator w;
    w.show();
    return a.exec();
}
