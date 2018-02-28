#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QRegExp>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    stackedWidget->setCurrentWidget(loginPage);

    socket = new QTcpSocket(this);

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sayPushButton_clicked()
{
    QString msg = sayLineEdit->text().trimmed();

    if(!msg.isEmpty()){
        socket->write(QString(msg + "\n").toUtf8());

    }
    sayLineEdit->clear();
    sayLineEdit->setFocus();
}

void MainWindow::on_pushButton_clicked()
{
    socket->connectToHost(ServerLineEdit->text(), 4200);

}

void MainWindow::readyRead()
{
    while(socket->canReadLine()){
        QString line = QString::fromUtf8(socket->readLine()).trimmed();

        QRegExp msgRegx("^([^:]+):(.*)$");

        QRegExp usrRegx("^/users:(.*)$");

        if(usrRegx.indexIn(line) != -1){
            QStringList users = usrRegx.cap(1).split(",");
            listWidget->clear();
            foreach(QString user, users)
                new QListWidgetItem(user, listWidget);

        }
        else if(msgRegx.indexIn(line) != -1){
            QString user = msgRegx.cap(1);
            QString msg = msgRegx.cap(2);

            roomTextEdit->append("<b>" + user + "</b>:" + msg);
        }
    }
}

void MainWindow::connected()
{
    stackedWidget->setCurrentWidget(chatPage);

    socket->write(QString("/me:" + UserlineEdit->text() + "\n").toUtf8());
}
