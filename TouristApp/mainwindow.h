#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addpackage.h"
#include "findpackage.h"
#include "findtourist.h"
#include "registertourist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_AddPackage_clicked();

    void on_RegisterTourist_clicked();

    void on_FindPakcage_clicked();

    void on_FindTourist_clicked();

private:
    Ui::MainWindow *ui;
    AddPackage *ptraddpackage;
    FindPackage *ptrfindpackage;
    FindTourist *ptrfindtourist;
    RegisterTourist *ptrregistertourist;
};
#endif // MAINWINDOW_H
