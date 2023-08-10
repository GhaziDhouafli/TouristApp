#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptraddpackage = new AddPackage();
    ptrfindtourist = new FindTourist();
    ptrfindpackage = new FindPackage();
    ptrregistertourist = new RegisterTourist();
}

MainWindow::~MainWindow()
{

    delete ptraddpackage;
    delete ptrfindpackage;
    delete ptrfindtourist;
    delete ptrregistertourist;
    delete ui;
}




void MainWindow::on_AddPackage_clicked()
{
    ptraddpackage->show();
}


void MainWindow::on_RegisterTourist_clicked()
{
    ptrregistertourist->show();
}


void MainWindow::on_FindPakcage_clicked()
{
    ptrfindpackage->show();
}


void MainWindow::on_FindTourist_clicked()
{
    ptrfindtourist->show();
}

