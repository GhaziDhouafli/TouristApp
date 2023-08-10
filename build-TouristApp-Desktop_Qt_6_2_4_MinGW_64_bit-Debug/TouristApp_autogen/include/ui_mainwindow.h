/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *AddPackage;
    QPushButton *RegisterTourist;
    QPushButton *FindPakcage;
    QPushButton *FindTourist;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(789, 467);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        AddPackage = new QPushButton(centralwidget);
        AddPackage->setObjectName(QString::fromUtf8("AddPackage"));
        AddPackage->setGeometry(QRect(80, 160, 111, 71));
        RegisterTourist = new QPushButton(centralwidget);
        RegisterTourist->setObjectName(QString::fromUtf8("RegisterTourist"));
        RegisterTourist->setGeometry(QRect(260, 160, 111, 71));
        FindPakcage = new QPushButton(centralwidget);
        FindPakcage->setObjectName(QString::fromUtf8("FindPakcage"));
        FindPakcage->setGeometry(QRect(440, 160, 111, 71));
        FindTourist = new QPushButton(centralwidget);
        FindTourist->setObjectName(QString::fromUtf8("FindTourist"));
        FindTourist->setGeometry(QRect(620, 160, 111, 71));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 789, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TouristManager 1.0", nullptr));
        AddPackage->setText(QCoreApplication::translate("MainWindow", "Add Trip", nullptr));
        RegisterTourist->setText(QCoreApplication::translate("MainWindow", "Add Tourist", nullptr));
        FindPakcage->setText(QCoreApplication::translate("MainWindow", "Find Trip", nullptr));
        FindTourist->setText(QCoreApplication::translate("MainWindow", "Find Tourist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
