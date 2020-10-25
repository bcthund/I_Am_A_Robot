#include "mainwindow.h"
#include <QApplication>
#include <wiringPi.h>

int main(int argc, char *argv[])
{
    if (wiringPiSetup() == -1) exit (1) ;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
