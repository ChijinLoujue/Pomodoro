/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *BtnStart;
    QPushButton *BtnStop;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *LineEditWork;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *LineEditRest;
    QLabel *label_6;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLCDNumber *LcdMinute;
    QLabel *label_7;
    QLCDNumber *LcdSecond;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(402, 326);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BtnStart = new QPushButton(centralWidget);
        BtnStart->setObjectName(QStringLiteral("BtnStart"));
        BtnStart->setGeometry(QRect(30, 180, 75, 23));
        BtnStop = new QPushButton(centralWidget);
        BtnStop->setObjectName(QStringLiteral("BtnStop"));
        BtnStop->setGeometry(QRect(290, 190, 75, 23));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 180, 75, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 181, 52));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        LineEditWork = new QLineEdit(widget);
        LineEditWork->setObjectName(QStringLiteral("LineEditWork"));

        horizontalLayout_2->addWidget(LineEditWork);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        LineEditRest = new QLineEdit(widget);
        LineEditRest->setObjectName(QStringLiteral("LineEditRest"));

        horizontalLayout_3->addWidget(LineEditRest);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_3);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 110, 351, 41));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("font: 20pt \"Adobe Arabic\";"));

        horizontalLayout->addWidget(label_9);

        LcdMinute = new QLCDNumber(widget1);
        LcdMinute->setObjectName(QStringLiteral("LcdMinute"));

        horizontalLayout->addWidget(LcdMinute);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("font: 20pt \"Adobe Arabic\";"));

        horizontalLayout->addWidget(label_7);

        LcdSecond = new QLCDNumber(widget1);
        LcdSecond->setObjectName(QStringLiteral("LcdSecond"));

        horizontalLayout->addWidget(LcdSecond);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("font: 20pt \"Adobe Arabic\";"));

        horizontalLayout->addWidget(label_8);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 402, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        BtnStart->setText(QApplication::translate("MainWindow", "WorkStart", Q_NULLPTR));
        BtnStop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "RestStart", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "work time:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "minutes", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "rest time:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "minutes", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Rest Time:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Min", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "s", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
