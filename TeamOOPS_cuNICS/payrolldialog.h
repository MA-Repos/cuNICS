#ifndef PAYROLLDIALOG_H
#define PAYROLLDIALOG_H

#include <QDialog>
#include "user.h"




namespace Ui {
class payrollDialog;
}

class payrollDialog : public QDialog
{
    Q_OBJECT

public:
    explicit payrollDialog(QWidget *parent = 0, User *employee = NULL);
    ~payrollDialog();

private slots:
    void on_listemployees_button_clicked();

    void on_lineEdit_returnPressed();

    void on_PRGT_button_2_clicked();

private:
    Ui::payrollDialog *ui;

    User *ps;
};

#endif // PAYROLLDIALOG_H
