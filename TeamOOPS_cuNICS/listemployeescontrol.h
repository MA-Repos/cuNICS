#ifndef LISTEMPLOYEESCONTROL_H
#define LISTEMPLOYEESCONTROL_H

#include "employee.h"

class ListEmployeesControl
{

private:
    User** employees;
    User* filter;

public:
    ListEmployeesControl();
    ~ListEmployeesControl();
    int getfilter(User*);
    int getAllEmployees();
    int DisplayEmployeeList();

};

#endif // LISTEMPLOYEESCONTROL_H
