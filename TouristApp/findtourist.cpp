#include "findtourist.h"
#include "ui_findtourist.h"

FindTourist::FindTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindTourist)
{
    ui->setupUi(this);
}

FindTourist::~FindTourist()
{
    delete ui;
}




void FindTourist::on_pushButton_clicked()
{
    QString TouristName= ui->pushButton->text();

    qDebug()<< "TouristName: " << TouristName;

    QSqlDatabase database= QSqlDatabase::addDatabase(("QSQLITE"));
    database.setDatabaseName("C:/Users/ASUS/Desktop/QT Projects/Tourist Application/touristManager.db");

    if(QFile::exists("C:/Users/ASUS/Desktop/QT Projects/Tourist Application/touristManager.db")){qDebug() << "Database Exists";}
    else{qDebug() << "Database doesnt exist\n";return;}

    if(!database.open()){qDebug() << "The database wont open\n";return;}
    else{qDebug() << "The data base is open\n";}

    QSqlQuery query(database);
    query.prepare("SELECT * FROM Tourist WHERE FirstName = '" + TouristName + "'");
    query.exec();
    qDebug() << "Last Error: "<< query.lastError().text();



    QSqlQueryModel *model;
    model->setQuery("select * from Tourist where FirstName like '%" + TouristName + "%'", database);
    ui->tableView->setModel(model);
    database.close();
}

