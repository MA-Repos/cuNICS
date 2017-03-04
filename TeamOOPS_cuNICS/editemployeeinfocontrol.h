#ifndef EDITEMPLOYEEINFOCONTROL_H
#define EDITEMPLOYEEINFOCONTROL_H

#include "employee.h"
#include <QSqlDatabase>
#include <string.h>

class EditEmployeeInfoControl
{

private:
    User* employee;
    QSqlDatabase* db;
    int notifySuccess();

public:
    EditEmployeeInfoControl(User*, QSqlDatabase*);
    ~EditEmployeeInfoControl();
    int updateEmployeeInfo();
};

#endif // EDITEMPLOYEEINFOCONTROL_H
