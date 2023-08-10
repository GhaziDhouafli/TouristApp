#include "registertourist.h"
#include "ui_registertourist.h"
#include "dbheader.h"

RegisterTourist::RegisterTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterTourist)
{
    ui->setupUi(this);
}

RegisterTourist::~RegisterTourist()
{
    delete ui;
}

void RegisterTourist::on_ResetButton_2_clicked()
{
    QString FirstName= ui->FirstName->text();
    QString MiddleName= ui->MiddleName->text();
    QString LastName= ui->LastName->text();
    QString Address= ui->Address->text();
    QString ChoosePackage= ui->ChoosePackage->text();
    QString description= ui->description->toPlainText();
    QString Contact= ui->Contact->text();
    QString Passport=ui->Passport->text();


    QSqlDatabase database= QSqlDatabase::addDatabase(("QSQLITE"));
    database.setDatabaseName("C:/Users/ASUS/Desktop/QT Projects/Tourist Application/touristManager.db");

    if(QFile::exists("C:/Users/ASUS/Desktop/QT Projects/Tourist Application/touristManager.db")){qDebug() << "Database Exists";}
    else{qDebug() << "Database doesnt exist\n";return;}

    if(!database.open()){qDebug() << "The database wont open\n";return;}
    else{qDebug() << "The data base is open\n";}

    QSqlQuery query(database);
    query.prepare("insert into Tourist (FirstName,MiddleName, LastName, Passport NO, Contact NO, Permament Address, Package, Description) values('" + FirstName+ "','" + MiddleName + "','" + LastName + "','" + Passport +"','" + Contact + "','" + Address + "','" + ChoosePackage + "','" + description +"')");
    query.exec();
    qDebug() << "Last Error: "<< query.lastError().text();
    database.close();
}

