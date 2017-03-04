#ifndef MANAGEEMPLOYEESALARYCONTROL_H
#define MANAGEEMPLOYEESALARYCONTROL_H

#include "user.h"
#include "role.h"
#include <qlist.h>
#include <QSqlDatabase>

class ManageEmployeeSalaryControl
{
private:
    Role* role;
    float amount;
    float percentage;
    QSqlDatabase* db;
    int getEmployeesByRole();
    int saveEmployees();
    int notifySuccess();

public:
    ManageEmployeeSalaryControl(Role*, float, float, QSqlDatabase*);
    ~ManageEmployeeSalaryControl();
    int applyRaise();
};

#endif // MANAGEEMPLOYEESALARYCONTROL_H
