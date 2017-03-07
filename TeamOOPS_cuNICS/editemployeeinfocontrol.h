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
    int updateEmployeeInfo(Employee*);
    int updateEmployeeRole(Employee*);


public:
    EditEmployeeInfoControl();
    ~EditEmployeeInfoControl();


    int getEmployeeInfo(int);
    void updateFunctionCaller(Employee*);

};

#endif // EDITEMPLOYEEINFOCONTROL_H
