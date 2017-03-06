#ifndef EDITEMPLOYEEINFOCONTROL_H
#define EDITEMPLOYEEINFOCONTROL_H

#include "employee.h"
#include <string.h>
#include <QSqlDatabase>
<<<<<<< HEAD
#include <iostream>
=======
#include "employeelist.h"
#include "employee.h"
#include "employeeinfo.h"
>>>>>>> 6ec26b17c80c1580a7ffab8023ff5bccc4599d3a
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <QTextStream>
#include <QTextStream>

class EditEmployeeInfoControl
{

private:
<<<<<<< HEAD
    User* employee;
=======

    int getEmployee(int);
>>>>>>> 6ec26b17c80c1580a7ffab8023ff5bccc4599d3a
    int notifySuccess();
    Employee* employee;


public:
<<<<<<< HEAD
    EditEmployeeInfoControl(User*);
    ~EditEmployeeInfoControl();
    int updateEmployeeInfo(Employee*);
=======
    EditEmployeeInfoControl();
    ~EditEmployeeInfoControl();

    int updateEmployeeInfo();
    int getEmployeeInfo(int);

>>>>>>> 6ec26b17c80c1580a7ffab8023ff5bccc4599d3a
};

#endif // EDITEMPLOYEEINFOCONTROL_H
