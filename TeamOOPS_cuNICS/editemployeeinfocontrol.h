#ifndef EDITEMPLOYEEINFOCONTROL_H
#define EDITEMPLOYEEINFOCONTROL_H

#include "employee.h"
#include <string.h>

class EditEmployeeInfoControl
{

private:
    Employee* employee;
    int notifySuccess();

public:
    EditEmployeeInfoControl();
    ~EditEmployeeInfoControl();
    int getEmployee(int);
    int updateEmployeeInfo();
};

#endif // EDITEMPLOYEEINFOCONTROL_H
