#ifndef LISTEMPLOYEESCONTROL_H
#define LISTEMPLOYEESCONTROL_H

#include "user.h"
#include <QList>

class ListEmployeesControl
{

private:
    QList<User*>* employees;
    User* filter;
    int getAllEmployees();

public:
    ListEmployeesControl();
    ~ListEmployeesControl();
    int  setFilter(User*);
    int  displayEmployeeList();
};

#endif // LISTEMPLOYEESCONTROL_H
