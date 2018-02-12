#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

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
