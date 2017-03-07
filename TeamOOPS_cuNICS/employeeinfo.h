#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <QDialog>
#include "employee.h"
#include <QWidget>
#include <QListWidgetItem>

namespace Ui {
class employeeInfo;
}

class employeeInfo : public QDialog
{
    Q_OBJECT

public:
    explicit employeeInfo(QWidget *parent = 0,Employee* tempE = NULL);
    ~employeeInfo();

        void displayEmployeeInfo();
        int updateEmployeeInfo();


private slots:

        void on_updateButton_clicked();

        void on_addButton_clicked();

        void on_deleteButton_clicked();

private:
    Ui::employeeInfo *ui;
    Employee* employee;
    double computeTotalSalary(Employee*);
    QString getRolesString(Employee*);
    Role* newRole;

};

#endif // EMPLOYEEINFO_H
