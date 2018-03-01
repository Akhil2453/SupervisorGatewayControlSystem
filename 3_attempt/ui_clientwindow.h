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
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QDial *dialAZ;
    QLineEdit *lineEditAz;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QSlider *verticalSliderCE;
    QLineEdit *lineEditCE;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QSlider *horizontalSliderE;
    QLineEdit *lineEditE;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *clientWindow)
    {
        if (clientWindow->objectName().isEmpty())
            clientWindow->setObjectName(QStringLiteral("clientWindow"));
        clientWindow->resize(564, 433);
        clientWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 127);"));
        centralwidget = new QWidget(clientWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dialAZ = new QDial(centralwidget);
        dialAZ->setObjectName(QStringLiteral("dialAZ"));
        dialAZ->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 127);"));

        verticalLayout->addWidget(dialAZ);

        lineEditAz = new QLineEdit(centralwidget);
        lineEditAz->setObjectName(QStringLiteral("lineEditAz"));

        verticalLayout->addWidget(lineEditAz);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        verticalLayout_4->addLayout(verticalLayout);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer = new QSpacerItem(53, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSliderCE = new QSlider(centralwidget);
        verticalSliderCE->setObjectName(QStringLiteral("verticalSliderCE"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(25);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalSliderCE->sizePolicy().hasHeightForWidth());
        verticalSliderCE->setSizePolicy(sizePolicy);
        verticalSliderCE->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(verticalSliderCE);

        lineEditCE = new QLineEdit(centralwidget);
        lineEditCE->setObjectName(QStringLiteral("lineEditCE"));

        verticalLayout_2->addWidget(lineEditCE);


        verticalLayout_5->addLayout(verticalLayout_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout_5->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(52, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalSliderE = new QSlider(centralwidget);
        horizontalSliderE->setObjectName(QStringLiteral("horizontalSliderE"));
        horizontalSliderE->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSliderE);

        lineEditE = new QLineEdit(centralwidget);
        lineEditE->setObjectName(QStringLiteral("lineEditE"));

        verticalLayout_3->addWidget(lineEditE);


        verticalLayout_6->addLayout(verticalLayout_3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_6);

        clientWindow->setCentralWidget(centralwidget);
        lineEditAz->raise();
        lineEditCE->raise();
        lineEditE->raise();
        dialAZ->raise();
        verticalSliderCE->raise();
        horizontalSliderE->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        menubar = new QMenuBar(clientWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 564, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        clientWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(clientWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        clientWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(clientWindow);

        QMetaObject::connectSlotsByName(clientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *clientWindow)
    {
        clientWindow->setWindowTitle(QApplication::translate("clientWindow", "MainWindow", 0));
        label->setText(QApplication::translate("clientWindow", "Azimuth", 0));
        label_2->setText(QApplication::translate("clientWindow", "Cross Elevation", 0));
        label_3->setText(QApplication::translate("clientWindow", "Elevation", 0));
        menuFile->setTitle(QApplication::translate("clientWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("clientWindow", "Edit", 0));
        menuView->setTitle(QApplication::translate("clientWindow", "View", 0));
        menuHelp->setTitle(QApplication::translate("clientWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class clientWindow: public Ui_clientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
