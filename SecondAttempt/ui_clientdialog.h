/********************************************************************************
** Form generated from reading UI file 'clientdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTDIALOG_H
#define UI_CLIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_clientDialog
{
public:
    QLabel *azimuth;
    QLabel *cElevation;
    QLabel *elevation;

    void setupUi(QDialog *clientDialog)
    {
        if (clientDialog->objectName().isEmpty())
            clientDialog->setObjectName(QStringLiteral("clientDialog"));
        clientDialog->resize(400, 300);
        azimuth = new QLabel(clientDialog);
        azimuth->setObjectName(QStringLiteral("azimuth"));
        azimuth->setGeometry(QRect(40, 110, 47, 13));
        cElevation = new QLabel(clientDialog);
        cElevation->setObjectName(QStringLiteral("cElevation"));
        cElevation->setGeometry(QRect(170, 110, 47, 13));
        elevation = new QLabel(clientDialog);
        elevation->setObjectName(QStringLiteral("elevation"));
        elevation->setGeometry(QRect(290, 110, 47, 13));

        retranslateUi(clientDialog);

        QMetaObject::connectSlotsByName(clientDialog);
    } // setupUi

    void retranslateUi(QDialog *clientDialog)
    {
        clientDialog->setWindowTitle(QApplication::translate("clientDialog", "Dialog", 0));
        azimuth->setText(QApplication::translate("clientDialog", "TextLabel", 0));
        cElevation->setText(QApplication::translate("clientDialog", "TextLabel", 0));
        elevation->setText(QApplication::translate("clientDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class clientDialog: public Ui_clientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTDIALOG_H
