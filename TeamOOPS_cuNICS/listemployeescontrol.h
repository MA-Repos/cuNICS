#ifndef LISTEMPLOYEESCONTROL_H
#define LISTEMPLOYEESCONTROL_H

#include "user.h"
#include "employee.h"
#include <QList>
#include "mainwindow.h"

class ListEmployeesControl
{

private:
    QList<User*>* employees;
    User* filter;
    int getAllEmployees();
    MainWindow* window;

public:
    ListEmployeesControl(MainWindow*);
    ~ListEmployeesControl();
    int  setFilter(User*);
    int  displayEmployeeList();
};

#endif // LISTEMPLOYEESCONTROL_H
