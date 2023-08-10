/********************************************************************************
** Form generated from reading UI file 'registertourist.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERTOURIST_H
#define UI_REGISTERTOURIST_H

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

class Ui_RegisterTourist
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *txtFirstName;
    QLabel *txtMiddleName;
    QLabel *txtLastName;
    QLabel *txtPassport;
    QLabel *txtContact;
    QLabel *txtchoosePackage;
    QLabel *txtAddress;
    QLabel *txtdescription;
    QLineEdit *FirstName;
    QLineEdit *MiddleName;
    QLineEdit *LastName;
    QLineEdit *Passport;
    QLineEdit *Contact;
    QLineEdit *Address;
    QLineEdit *ChoosePackage;
    QTextEdit *description;
    QPushButton *ResetButton;

    void setupUi(QDialog *RegisterTourist)
    {
        if (RegisterTourist->objectName().isEmpty())
            RegisterTourist->setObjectName(QString::fromUtf8("RegisterTourist"));
        RegisterTourist->resize(863, 587);
        formLayoutWidget = new QWidget(RegisterTourist);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 30, 761, 381));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        txtFirstName = new QLabel(formLayoutWidget);
        txtFirstName->setObjectName(QString::fromUtf8("txtFirstName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, txtFirstName);

        txtMiddleName = new QLabel(formLayoutWidget);
        txtMiddleName->setObjectName(QString::fromUtf8("txtMiddleName"));

        formLayout->setWidget(1, QFormLayout::LabelRole, txtMiddleName);

        txtLastName = new QLabel(formLayoutWidget);
        txtLastName->setObjectName(QString::fromUtf8("txtLastName"));

        formLayout->setWidget(2, QFormLayout::LabelRole, txtLastName);

        txtPassport = new QLabel(formLayoutWidget);
        txtPassport->setObjectName(QString::fromUtf8("txtPassport"));

        formLayout->setWidget(3, QFormLayout::LabelRole, txtPassport);

        txtContact = new QLabel(formLayoutWidget);
        txtContact->setObjectName(QString::fromUtf8("txtContact"));

        formLayout->setWidget(4, QFormLayout::LabelRole, txtContact);

        txtchoosePackage = new QLabel(formLayoutWidget);
        txtchoosePackage->setObjectName(QString::fromUtf8("txtchoosePackage"));

        formLayout->setWidget(6, QFormLayout::LabelRole, txtchoosePackage);

        txtAddress = new QLabel(formLayoutWidget);
        txtAddress->setObjectName(QString::fromUtf8("txtAddress"));

        formLayout->setWidget(5, QFormLayout::LabelRole, txtAddress);

        txtdescription = new QLabel(formLayoutWidget);
        txtdescription->setObjectName(QString::fromUtf8("txtdescription"));

        formLayout->setWidget(7, QFormLayout::LabelRole, txtdescription);

        FirstName = new QLineEdit(formLayoutWidget);
        FirstName->setObjectName(QString::fromUtf8("FirstName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, FirstName);

        MiddleName = new QLineEdit(formLayoutWidget);
        MiddleName->setObjectName(QString::fromUtf8("MiddleName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, MiddleName);

        LastName = new QLineEdit(formLayoutWidget);
        LastName->setObjectName(QString::fromUtf8("LastName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, LastName);

        Passport = new QLineEdit(formLayoutWidget);
        Passport->setObjectName(QString::fromUtf8("Passport"));

        formLayout->setWidget(3, QFormLayout::FieldRole, Passport);

        Contact = new QLineEdit(formLayoutWidget);
        Contact->setObjectName(QString::fromUtf8("Contact"));

        formLayout->setWidget(4, QFormLayout::FieldRole, Contact);

        Address = new QLineEdit(formLayoutWidget);
        Address->setObjectName(QString::fromUtf8("Address"));

        formLayout->setWidget(5, QFormLayout::FieldRole, Address);

        ChoosePackage = new QLineEdit(formLayoutWidget);
        ChoosePackage->setObjectName(QString::fromUtf8("ChoosePackage"));

        formLayout->setWidget(6, QFormLayout::FieldRole, ChoosePackage);

        description = new QTextEdit(formLayoutWidget);
        description->setObjectName(QString::fromUtf8("description"));

        formLayout->setWidget(7, QFormLayout::FieldRole, description);

        ResetButton = new QPushButton(RegisterTourist);
        ResetButton->setObjectName(QString::fromUtf8("ResetButton"));
        ResetButton->setGeometry(QRect(400, 470, 83, 29));

        retranslateUi(RegisterTourist);

        QMetaObject::connectSlotsByName(RegisterTourist);
    } // setupUi

    void retranslateUi(QDialog *RegisterTourist)
    {
        RegisterTourist->setWindowTitle(QCoreApplication::translate("RegisterTourist", "RegisterTourist", nullptr));
        txtFirstName->setText(QCoreApplication::translate("RegisterTourist", "First Name: ", nullptr));
        txtMiddleName->setText(QCoreApplication::translate("RegisterTourist", "Middle Name: ", nullptr));
        txtLastName->setText(QCoreApplication::translate("RegisterTourist", "Last Name:", nullptr));
        txtPassport->setText(QCoreApplication::translate("RegisterTourist", "Passport No:", nullptr));
        txtContact->setText(QCoreApplication::translate("RegisterTourist", "Contact No:", nullptr));
        txtchoosePackage->setText(QCoreApplication::translate("RegisterTourist", "Choose Package:", nullptr));
        txtAddress->setText(QCoreApplication::translate("RegisterTourist", "Permament Address:", nullptr));
        txtdescription->setText(QCoreApplication::translate("RegisterTourist", "Description:", nullptr));
        ResetButton->setText(QCoreApplication::translate("RegisterTourist", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterTourist: public Ui_RegisterTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERTOURIST_H
