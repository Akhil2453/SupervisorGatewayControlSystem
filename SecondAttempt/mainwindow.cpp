#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_clientdialog.h"
#include <QDateTime>
#include <QDebug>
#include <QtWidgets>

int a;
int c;
int e;
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

    //int d;
    clientDialog cDial;
    if(action>=0){

        a = ui->dial_2->value();
        QString s = QString::number(a);
        qDebug() << "Azimuth" ;
        qDebug() << s << endl;
        cDial.setLabelText(s);
    }
}

void MainWindow::on_dial_4_actionTriggered(int action)
{
    //int d;
    if(action>=0){

        c = ui->dial_2->value();
        qDebug() << "Cross Elevation" ;
        qDebug() << c << endl;
    }
}

void MainWindow::on_dial_5_actionTriggered(int action)
{
    //int d;
    clientDialog cDial;
    if(action>=0){

        e = ui->dial_2->value();
        QString s = QString::number(e);
        qDebug() << "Elevation" ;
        qDebug() << s << endl;
        cDial.setLabelText(s);
        cDial.show();
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
