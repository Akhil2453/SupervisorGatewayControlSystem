/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *clientWindow)
    {
        if (clientWindow->objectName().isEmpty())
            clientWindow->setObjectName(QStringLiteral("clientWindow"));
        clientWindow->resize(564, 433);
        centralwidget = new QWidget(clientWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        clientWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(clientWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 564, 21));
        clientWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(clientWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        clientWindow->setStatusBar(statusbar);

        retranslateUi(clientWindow);

        QMetaObject::connectSlotsByName(clientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *clientWindow)
    {
        clientWindow->setWindowTitle(QApplication::translate("clientWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class clientWindow: public Ui_clientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
