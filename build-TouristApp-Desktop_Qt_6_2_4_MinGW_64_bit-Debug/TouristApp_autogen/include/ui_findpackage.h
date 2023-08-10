/********************************************************************************
** Form generated from reading UI file 'findpackage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDPACKAGE_H
#define UI_FINDPACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindPackage
{
public:
    QLabel *txtPackageNmae;
    QLineEdit *PackageName;
    QPushButton *FindPackageButton;
    QTableView *TableViewListofPackages;

    void setupUi(QDialog *FindPackage)
    {
        if (FindPackage->objectName().isEmpty())
            FindPackage->setObjectName(QString::fromUtf8("FindPackage"));
        FindPackage->resize(789, 467);
        txtPackageNmae = new QLabel(FindPackage);
        txtPackageNmae->setObjectName(QString::fromUtf8("txtPackageNmae"));
        txtPackageNmae->setGeometry(QRect(22, 30, 111, 41));
        PackageName = new QLineEdit(FindPackage);
        PackageName->setObjectName(QString::fromUtf8("PackageName"));
        PackageName->setGeometry(QRect(130, 40, 471, 28));
        FindPackageButton = new QPushButton(FindPackage);
        FindPackageButton->setObjectName(QString::fromUtf8("FindPackageButton"));
        FindPackageButton->setGeometry(QRect(630, 40, 111, 29));
        TableViewListofPackages = new QTableView(FindPackage);
        TableViewListofPackages->setObjectName(QString::fromUtf8("TableViewListofPackages"));
        TableViewListofPackages->setGeometry(QRect(50, 120, 691, 291));

        retranslateUi(FindPackage);

        QMetaObject::connectSlotsByName(FindPackage);
    } // setupUi

    void retranslateUi(QDialog *FindPackage)
    {
        FindPackage->setWindowTitle(QCoreApplication::translate("FindPackage", "FindPackage", nullptr));
        txtPackageNmae->setText(QCoreApplication::translate("FindPackage", "Package Name: ", nullptr));
        FindPackageButton->setText(QCoreApplication::translate("FindPackage", "Find Package", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindPackage: public Ui_FindPackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDPACKAGE_H
