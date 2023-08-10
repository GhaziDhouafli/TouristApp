#include "addpackage.h"
#include "ui_addpackage.h"
#include "dbheader.h"

AddPackage::AddPackage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPackage)
{
    ui->setupUi(this);
}

AddPackage::~AddPackage()
{
    delete ui;
}

void AddPackage::on_SaveButton_clicked()
{
    QString PackageName= ui->PackageName->text();
    QString Description= ui->Description->toPlainText();
    QString Amount= ui->Amount->text();

    qDebug()<< "PackageName: " << PackageName << ", Description: " << Description << ", Amount: " << Amount;

    QSqlDatabase database= QSqlDatabase::addDatabase(("QSQLITE"));
    database.setDatabaseName("C:/Users/ASUS/Desktop/QT Projects/Tourist Application/touristManager.db");

    if(QFile::exists("C:/Users/ASUS/Desktop/QT Projects/Tourist Application/touristManager.db")){qDebug() << "Database Exists";}
    else{qDebug() << "Database doesnt exist\n";return;}

    if(!database.open()){qDebug() << "The database wont open\n";return;}
    else{qDebug() << "The data base is open\n";}

    QSqlQuery query(database);
    query.prepare("insert into Package (PackageName,PackageDescription, Amount) values('" + PackageName+ "','" + Description + "','" + Amount + "')");
    query.exec();
    qDebug() << "Last Error: "<< query.lastError().text();
    database.close();


}

