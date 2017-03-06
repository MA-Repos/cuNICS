#ifndef EDITEMPLOYEEINFOCONTROL_H
#define EDITEMPLOYEEINFOCONTROL_H

#include "employee.h"
#include <QSqlDatabase>
#include "employeelist.h"
#include "employee.h"
#include "employeeinfo.h"
#include <string.h>

class EditEmployeeInfoControl
{

private:

    int getEmployee(int);
    int notifySuccess();
    Employee* employee;


public:
    EditEmployeeInfoControl();
    ~EditEmployeeInfoControl();

    int updateEmployeeInfo();
    int getEmployeeInfo(int);

};

#endif // EDITEMPLOYEEINFOCONTROL_H
