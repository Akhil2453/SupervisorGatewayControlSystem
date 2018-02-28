/********************************************************************************
** Form generated from reading UI file 'serverwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWINDOW_H
#define UI_SERVERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serverWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *ACU_onoff;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *ONpushButton;
    QPushButton *OFFpushButton;
    QLabel *ACU;
    QLabel *labelTime;
    QGroupBox *Azimuth;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelAzimuth;
    QSpacerItem *horizontalSpacer;
    QPushButton *ProgramPushButtonA;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *AzimuthDialLabel;
    QDial *AzimuthDial;
    QVBoxLayout *verticalLayout_2;
    QLabel *DemandLabelAzimuth;
    QSpinBox *spinBoxAzimuth;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *serverWindow)
    {
        if (serverWindow->objectName().isEmpty())
            serverWindow->setObjectName(QStringLiteral("serverWindow"));
        serverWindow->resize(822, 602);
        serverWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(serverWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ACU_onoff = new QGroupBox(centralWidget);
        ACU_onoff->setObjectName(QStringLiteral("ACU_onoff"));
        ACU_onoff->setGeometry(QRect(10, 420, 351, 122));
        gridLayout = new QGridLayout(ACU_onoff);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ONpushButton = new QPushButton(ACU_onoff);
        ONpushButton->setObjectName(QStringLiteral("ONpushButton"));

        horizontalLayout->addWidget(ONpushButton);

        OFFpushButton = new QPushButton(ACU_onoff);
        OFFpushButton->setObjectName(QStringLiteral("OFFpushButton"));

        horizontalLayout->addWidget(OFFpushButton);


        verticalLayout->addLayout(horizontalLayout);

        ACU = new QLabel(ACU_onoff);
        ACU->setObjectName(QStringLiteral("ACU"));
        QFont font;
        font.setFamily(QStringLiteral("Monotype Corsiva"));
        font.setPointSize(35);
        font.setBold(true);
        font.setWeight(75);
        ACU->setFont(font);
        ACU->setAlignment(Qt::AlignCenter);
        ACU->setWordWrap(true);
        ACU->setIndent(-1);

        verticalLayout->addWidget(ACU);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        labelTime = new QLabel(centralWidget);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(10, 10, 801, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(35);
        font1.setBold(true);
        font1.setWeight(75);
        labelTime->setFont(font1);
        labelTime->setStyleSheet(QStringLiteral("color: rgb(85, 170, 0);"));
        labelTime->setAlignment(Qt::AlignCenter);
        Azimuth = new QGroupBox(centralWidget);
        Azimuth->setObjectName(QStringLiteral("Azimuth"));
        Azimuth->setGeometry(QRect(190, 90, 321, 271));
        Azimuth->setStyleSheet(QStringLiteral("background-color: rgb(216, 167, 255);"));
        widget = new QWidget(Azimuth);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 10, 311, 31));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAzimuth = new QLabel(widget);
        labelAzimuth->setObjectName(QStringLiteral("labelAzimuth"));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        labelAzimuth->setFont(font2);
        labelAzimuth->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelAzimuth);

        horizontalSpacer = new QSpacerItem(35, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ProgramPushButtonA = new QPushButton(widget);
        ProgramPushButtonA->setObjectName(QStringLiteral("ProgramPushButtonA"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProgramPushButtonA->sizePolicy().hasHeightForWidth());
        ProgramPushButtonA->setSizePolicy(sizePolicy);
        ProgramPushButtonA->setMaximumSize(QSize(1000, 500));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        ProgramPushButtonA->setFont(font3);

        horizontalLayout_2->addWidget(ProgramPushButtonA);

        widget1 = new QWidget(Azimuth);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 80, 123, 159));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        AzimuthDialLabel = new QLabel(widget1);
        AzimuthDialLabel->setObjectName(QStringLiteral("AzimuthDialLabel"));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setWeight(75);
        AzimuthDialLabel->setFont(font4);
        AzimuthDialLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(AzimuthDialLabel);

        AzimuthDial = new QDial(widget1);
        AzimuthDial->setObjectName(QStringLiteral("AzimuthDial"));
        AzimuthDial->setStyleSheet(QStringLiteral("alternate-background-color: rgb(187, 255, 171);"));

        horizontalLayout_3->addWidget(AzimuthDial);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        DemandLabelAzimuth = new QLabel(widget1);
        DemandLabelAzimuth->setObjectName(QStringLiteral("DemandLabelAzimuth"));
        DemandLabelAzimuth->setFont(font3);
        DemandLabelAzimuth->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(DemandLabelAzimuth);

        spinBoxAzimuth = new QSpinBox(widget1);
        spinBoxAzimuth->setObjectName(QStringLiteral("spinBoxAzimuth"));
        QFont font5;
        font5.setFamily(QStringLiteral("Courier"));
        font5.setPointSize(12);
        spinBoxAzimuth->setFont(font5);
        spinBoxAzimuth->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBoxAzimuth->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(spinBoxAzimuth);


        verticalLayout_3->addLayout(verticalLayout_2);

        serverWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(serverWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 822, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        serverWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(serverWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        serverWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(serverWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        serverWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());

        retranslateUi(serverWindow);
        QObject::connect(AzimuthDial, SIGNAL(valueChanged(int)), spinBoxAzimuth, SLOT(setValue(int)));
        QObject::connect(spinBoxAzimuth, SIGNAL(valueChanged(int)), AzimuthDial, SLOT(setValue(int)));
        QObject::connect(AzimuthDial, SIGNAL(valueChanged(int)), AzimuthDialLabel, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(serverWindow);
    } // setupUi

    void retranslateUi(QMainWindow *serverWindow)
    {
        serverWindow->setWindowTitle(QApplication::translate("serverWindow", "serverWindow", 0));
        ACU_onoff->setTitle(QApplication::translate("serverWindow", "ACU_on/off", 0));
        ONpushButton->setText(QApplication::translate("serverWindow", "ON", 0));
        OFFpushButton->setText(QApplication::translate("serverWindow", "OFF", 0));
        ACU->setText(QApplication::translate("serverWindow", "ACU On-OFF", 0));
        labelTime->setText(QString());
        Azimuth->setTitle(QApplication::translate("serverWindow", "Azimuth", 0));
        labelAzimuth->setText(QApplication::translate("serverWindow", "Azimuth", 0));
        ProgramPushButtonA->setText(QApplication::translate("serverWindow", "Program", 0));
        AzimuthDialLabel->setText(QApplication::translate("serverWindow", "0", 0));
        DemandLabelAzimuth->setText(QApplication::translate("serverWindow", "Demand", 0));
        menuFile->setTitle(QApplication::translate("serverWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("serverWindow", "Edit", 0));
        menuView->setTitle(QApplication::translate("serverWindow", "View", 0));
        menuHelp->setTitle(QApplication::translate("serverWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class serverWindow: public Ui_serverWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWINDOW_H
