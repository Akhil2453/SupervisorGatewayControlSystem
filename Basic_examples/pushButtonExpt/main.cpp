#include "mainwindow.h"
#include <QApplication>
//#include "mainwindow.cpp"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.enable(false);
    w.show();

    return a.exec();
}
