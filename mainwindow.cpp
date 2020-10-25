#include "mainwindow.h"
#include <QTimer>
#include <QDebug>
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    {
//        QPalette pal = ui->pushButton_Cool->palette();
//        pal.setColor(QPalette::Button, QColor(Qt::red));
//        ui->pushButton_Cool->setAutoFillBackground(true);
//        ui->pushButton_Cool->setPalette(pal);
//        ui->pushButton_Cool->update();
//    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
