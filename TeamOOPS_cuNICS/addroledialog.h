#ifndef ADDROLEDIALOG_H
#define ADDROLEDIALOG_H

#include <QDialog>
#include "role.h"
#include <employee.h>
#include <employeeinfo.h>
#include <QTableWidget>

namespace Ui {
class addRoleDialog;
}

class addRoleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addRoleDialog(QWidget *parent = 0,Role* temp = NULL);
    ~addRoleDialog();

private slots:


    void on_pushButton_clicked();

private:
    Ui::addRoleDialog *ui;

    Role* addedRole;


    void getDialogData();


};

#endif // ADDROLEDIALOG_H
