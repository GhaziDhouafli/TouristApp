#ifndef FINDPACKAGE_H
#define FINDPACKAGE_H

#include <QDialog>

namespace Ui {
class FindPackage;
}

class FindPackage : public QDialog
{
    Q_OBJECT

public:
    explicit FindPackage(QWidget *parent = nullptr);
    ~FindPackage();

private slots:
    void on_FindPackageButton_clicked();

private:
    Ui::FindPackage *ui;
};

#endif // FINDPACKAGE_H
