#ifndef EDITEMPLOYEEINFOCONTROL_H
#define EDITEMPLOYEEINFOCONTROL_H

#include "employee.h"
#include <string.h>
#include <QSqlDatabase>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <QTextStream>
#include <QTextStream>

class EditEmployeeInfoControl
{

private:
    User* employee;
    int notifySuccess();

public:
    EditEmployeeInfoControl(User*);
    ~EditEmployeeInfoControl();
    int updateEmployeeInfo(Employee*);
};

#endif // EDITEMPLOYEEINFOCONTROL_H
