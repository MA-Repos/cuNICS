#ifndef LISTEMPLOYEESCONTROL_H
#define LISTEMPLOYEESCONTROL_H

#include "employee.h"
#include <QSqlDatabase>
#include "databasecontroller.h"

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
    int  setFilter(User*);
    int displayEmployeeList();
    bool toAttributeList(QMap<string, string>* list);
};

#endif // LISTEMPLOYEESCONTROL_H
