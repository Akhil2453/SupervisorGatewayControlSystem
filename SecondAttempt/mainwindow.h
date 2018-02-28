#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "clientdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void Time();

private slots:
    void on_pushButton_clicked(bool checked);

    void on_pushButton_2_clicked(bool checked);

    void on_dial_2_actionTriggered(int action);

    void on_dial_4_actionTriggered(int action);

    void on_dial_5_actionTriggered(int action);

    void on_textEdit_3_textChanged();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;

    clientDialog *cDialog = new clientDialog;

};

#endif // MAINWINDOW_H
