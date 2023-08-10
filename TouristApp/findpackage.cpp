#include "findpackage.h"
#include "ui_findpackage.h"
#include "dbheader.h"

FindPackage::FindPackage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindPackage)
{
    ui->setupUi(this);
}

FindPackage::~FindPackage()
{
    delete ui;
}

void FindPackage::on_FindPackageButton_clicked()
{
    QString PackageName= ui->PackageName->text();

    qDebug()<< "PackageName: " << PackageName;

    QSqlDatabase database= QSqlDatabase::addDatabase(("QSQLITE"));
    database.setDatabaseName("C:/Users/ASUS/Desktop/QT Projects/Tourist Application/touristManager.db");

    if(QFile::exists("C:/Users/ASUS/Desktop/QT Projects/Tourist Application/touristManager.db")){qDebug() << "Database Exists";}
    else{qDebug() << "Database doesnt exist\n";return;}

    if(!database.open()){qDebug() << "The database wont open\n";return;}
    else{qDebug() << "The data base is open\n";}

    QSqlQuery query(database);
    query.prepare("SELECT * FROM Package WHERE PackageName = '" + PackageName + "'");
    query.exec();
    qDebug() << "Last Error: "<< query.lastError().text();



    QSqlQueryModel *model;
    model->setQuery("select * from Package where PackageName like '%" + PackageName + "%'", database);
    ui->TableViewListofPackages->setModel(model);
    database.close();
}

