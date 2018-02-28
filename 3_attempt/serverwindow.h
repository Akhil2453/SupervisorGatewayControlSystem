#ifndef SERVERWINDOW_H
#define SERVERWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "clientwindow.h"

namespace Ui {
class serverWindow;
}

class serverWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit serverWindow(QWidget *parent = 0);
    ~serverWindow();

public slots:
    void Time();

private slots:
    void on_ONpushButton_clicked();

    void on_OFFpushButton_clicked();

private:
    Ui::serverWindow *ui;

    QTimer *timer;

    clientWindow *cWind;
};

#endif // SERVERWINDOW_H
