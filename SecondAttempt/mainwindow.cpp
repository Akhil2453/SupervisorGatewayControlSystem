#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QDebug>
#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Time()));
    timer->start(500);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Time()
{
    QTime time = QTime::currentTime();
    QString time_txt = time.toString("hh : mm : ss");
    ui->labelTime->setText(time_txt);

}


void MainWindow::on_dial_2_actionTriggered(int action)
{

    int d;
    if(action>=0){

        d = ui->dial_2->value();
        qDebug() << "Azimuth" ;
        qDebug() << d << endl;
    }
}

void MainWindow::on_dial_4_actionTriggered(int action)
{
    int d;
    if(action>=0){

        d = ui->dial_2->value();
        qDebug() << "Cross Elevation" ;
        qDebug() << d << endl;
    }
}

void MainWindow::on_dial_5_actionTriggered(int action)
{
    int d;
    if(action>=0){

        d = ui->dial_2->value();
        qDebug() << "Elevation" ;
        qDebug() << d << endl;
    }
}

void MainWindow::on_pushButton_clicked()
{
//    clientDialog cDialog;
//    cDialog.setModal(true);
//    cDialog.exec();
    cDialog = new clientDialog(this);
    cDialog ->show();
}