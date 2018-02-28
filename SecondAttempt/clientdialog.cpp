#include "clientdialog.h"
#include "ui_clientdialog.h"

clientDialog::clientDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::clientDialog)
{
    ui->setupUi(this);
}

clientDialog::~clientDialog()
{
    delete ui;
}

void clientDialog::setLabelText(QString str)
{
    ui->azimuth->setText(str);
    ui->cElevation->setText(str);
    ui->elevation->setText(str);
}
