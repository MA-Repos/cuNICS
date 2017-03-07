#ifndef EDITEMPLOYEEINFOCONTROL_H
#define EDITEMPLOYEEINFOCONTROL_H

#include "employee.h"
#include <QSqlDatabase>
#include <QList>
#include "employeelist.h"
#include "employee.h"
#include "employeeinfo.h"
#include <string.h>

class EditEmployeeInfoControl
{

private:
    QList<Role*>* roles;
    int getEmployee(int);
    int notifySuccess();
    Employee* employee;
    int updateEmployeeInfo(Employee*);


    int getRoles(int);


public:
    EditEmployeeInfoControl();
    ~EditEmployeeInfoControl();

    QList<Role*> getRoles();
    int getEmployeeInfo(int);
    void updateFunctionCaller(Employee*);
    int updateEmployeeRole(Role*,int);


};

#endif // EDITEMPLOYEEINFOCONTROL_H
