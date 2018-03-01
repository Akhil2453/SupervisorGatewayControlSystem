#include "serverwindow.h"
#include "ui_serverwindow.h"
#include "ui_clientwindow.h"
#include <QDateTime>
#include <QDebug>
#include <QtWidgets>


QString s;
QString t;
QString u;
serverWindow::serverWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::serverWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Time()));
    timer->start(500);
}

serverWindow::~serverWindow()
{
    delete ui;
}

void serverWindow::Time()
{
    QTime time = QTime::currentTime();
    QString time_txt = time.toString("hh : mm : ss");
    ui->labelTime->setText(time_txt);
}

void serverWindow::on_ONpushButton_clicked()
{
    cWind = new clientWindow(this);
    cWind->setLineText(s, t, u);
    cWind->show();
}

void serverWindow::on_OFFpushButton_clicked()
{
    cWind = new clientWindow(this);
    cWind->close();
}

void serverWindow::on_AzimuthDial_actionTriggered(int action)
{
    if(action>=0){
        int a = ui->AzimuthDial->value();
        s = QString::number(a);
        qDebug() << "Azimuth" ;
        qDebug() << s << endl;
    }
}

void serverWindow::on_CrsElDial_actionTriggered(int action)
{
    if(action>=0){
        int a = ui->CrsElDial->value();
        t = QString::number(a);
        qDebug() << "Cross Elevation" ;
        qDebug() << t << endl;
    }
}

void serverWindow::on_ElDial_actionTriggered(int action)
{
    if(action>=0){
        int a = ui->ElDial->value();
        u = QString::number(a);
        qDebug() << "Elevation" ;
        qDebug() << u << endl;
    }
}
