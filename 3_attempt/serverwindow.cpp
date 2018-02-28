#include "serverwindow.h"
#include "ui_serverwindow.h"
#include "ui_clientwindow.h"
#include <QDateTime>
#include <QDebug>
#include <QtWidgets>

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
    cWind->show();
}

void serverWindow::on_OFFpushButton_clicked()
{
    cWind = new clientWindow(this);
    cWind->close();
}
