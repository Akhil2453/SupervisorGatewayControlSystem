#include "clientwindow.h"
#include "ui_clientwindow.h"

#include <QDebug>

clientWindow::clientWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::clientWindow)
{
    ui->setupUi(this);
}

clientWindow::~clientWindow()
{
    delete ui;
}

void clientWindow::setLineText(QString str, QString stra, QString strb)
{
    //QString a =
    ui->lineEditAz->setText(str);
    int a = str.toInt();
    ui->dialAZ->setValue(a);
    //a.toInt();
    //ui->dialAZ->setValue(a);
    ui->lineEditCE->setText(stra);
    int b = stra.toInt();
    ui->verticalSliderCE->setValue(b);

    ui->lineEditE->setText(strb);
    int c = strb.toInt();
    ui->horizontalSliderE->setValue(c);
}
