#ifndef LISTEMPLOYEESCONTROL_H
#define LISTEMPLOYEESCONTROL_H

#include "employee.h"
#include <QSqlDatabase>

class ListEmployeesControl
{

private:
    User** employees;
    User* filter;
    QSqlDatabase* db;
    int getAllEmployees();

public:
    ListEmployeesControl(QSqlDatabase*);
    ~ListEmployeesControl();
    int setFilter(User*);
    int displayEmployeeList();

};

#endif // LISTEMPLOYEESCONTROL_H