#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QMainWindow>

namespace Ui {
class clientWindow;
}

class clientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit clientWindow(QWidget *parent = 0);
    ~clientWindow();

public slots:
    void setLineText(QString str, QString stra, QString strb);

private:
    Ui::clientWindow *ui;
};

#endif // CLIENTWINDOW_H
