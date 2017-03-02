#ifndef LISTEMPLOYEESCONTROL_H
#define LISTEMPLOYEESCONTROL_H

#include "employee.h"

class ListEmployeesControl
{

private:
    Employee* employees;

public:
    ListEmployeesControl();
    ~ListEmployeesControl();
    int getAllEmployees();
    int DisplayEmployeeList();

};

#endif // LISTEMPLOYEESCONTROL_H
