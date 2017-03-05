#ifndef LISTEMPLOYEESCONTROL_H
#define LISTEMPLOYEESCONTROL_H

#include "user.h"
#include "employee.h"
#include "payrolldialog.h"
#include "employeelist.h"
#include <QList>

class ListEmployeesControl
{

private:
    QList<Employee*>* employees;
    User* filter;
    int getAllEmployees();

public:
    ListEmployeesControl(payrollDialog*);
    ~ListEmployeesControl();
    payrollDialog* pd;
    EmployeeList* elist;
    int  setFilter(User*);
    int  displayEmployeeList();
};

#endif // LISTEMPLOYEESCONTROL_H
