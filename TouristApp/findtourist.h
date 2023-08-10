#ifndef FINDTOURIST_H
#define FINDTOURIST_H

#include <QDialog>
#include "dbheader.h"
namespace Ui {
class FindTourist;
}

class FindTourist : public QDialog
{
    Q_OBJECT

public:
    explicit FindTourist(QWidget *parent = nullptr);
    ~FindTourist();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FindTourist *ui;
};

#endif // FINDTOURIST_H
