/********************************************************************************
** Form generated from reading UI file 'addpackage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPACKAGE_H
#define UI_ADDPACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPackage
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *txtPackageName;
    QLineEdit *PackageName;
    QLabel *txtDescription;
    QTextEdit *Description;
    QLabel *txtAmount;
    QLineEdit *Amount;
    QPushButton *SaveButton;

    void setupUi(QDialog *AddPackage)
    {
        if (AddPackage->objectName().isEmpty())
            AddPackage->setObjectName(QString::fromUtf8("AddPackage"));
        AddPackage->resize(710, 404);
        formLayoutWidget = new QWidget(AddPackage);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 40, 611, 251));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        txtPackageName = new QLabel(formLayoutWidget);
        txtPackageName->setObjectName(QString::fromUtf8("txtPackageName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, txtPackageName);

        PackageName = new QLineEdit(formLayoutWidget);
        PackageName->setObjectName(QString::fromUtf8("PackageName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, PackageName);

        txtDescription = new QLabel(formLayoutWidget);
        txtDescription->setObjectName(QString::fromUtf8("txtDescription"));

        formLayout->setWidget(1, QFormLayout::LabelRole, txtDescription);

        Description = new QTextEdit(formLayoutWidget);
        Description->setObjectName(QString::fromUtf8("Description"));

        formLayout->setWidget(1, QFormLayout::FieldRole, Description);

        txtAmount = new QLabel(formLayoutWidget);
        txtAmount->setObjectName(QString::fromUtf8("txtAmount"));

        formLayout->setWidget(2, QFormLayout::LabelRole, txtAmount);

        Amount = new QLineEdit(formLayoutWidget);
        Amount->setObjectName(QString::fromUtf8("Amount"));

        formLayout->setWidget(2, QFormLayout::FieldRole, Amount);

        SaveButton = new QPushButton(AddPackage);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setGeometry(QRect(310, 340, 83, 29));

        retranslateUi(AddPackage);

        QMetaObject::connectSlotsByName(AddPackage);
    } // setupUi

    void retranslateUi(QDialog *AddPackage)
    {
        AddPackage->setWindowTitle(QCoreApplication::translate("AddPackage", "AddPackage", nullptr));
        txtPackageName->setText(QCoreApplication::translate("AddPackage", "Package Name: ", nullptr));
        txtDescription->setText(QCoreApplication::translate("AddPackage", "Description:", nullptr));
        txtAmount->setText(QCoreApplication::translate("AddPackage", "Amount: ", nullptr));
        SaveButton->setText(QCoreApplication::translate("AddPackage", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPackage: public Ui_AddPackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPACKAGE_H
