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
