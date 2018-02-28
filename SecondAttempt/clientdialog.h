#ifndef CLIENTDIALOG_H
#define CLIENTDIALOG_H

#include <QDialog>

namespace Ui {
class clientDialog;
}

class clientDialog : public QDialog
{
    Q_OBJECT

public:
    explicit clientDialog(QWidget *parent = 0);
    ~clientDialog();
    void setLabelText(QString str);

private:
    Ui::clientDialog *ui;
};

#endif // CLIENTDIALOG_H
