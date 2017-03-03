#ifndef EDITEMPLOYEEINFOCONTROL_H
#define EDITEMPLOYEEINFOCONTROL_H

#include "employee.h"
#include <QSqlDatabase>
#include <string.h>

class EditEmployeeInfoControl
{

private:
    User* employee;
    QSqlDatabase dbcontrol;

public:
    EditEmployeeInfoControl(User*);
    ~EditEmployeeInfoControl();
    int updateEmployeeInfo();
    int notifySuccess();
};

#endif // EDITEMPLOYEEINFOCONTROL_H
