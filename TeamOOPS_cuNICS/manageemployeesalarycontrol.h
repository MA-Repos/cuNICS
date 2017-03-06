#ifndef MANAGEEMPLOYEESALARYCONTROL_H
#define MANAGEEMPLOYEESALARYCONTROL_H

#include "user.h"
#include "role.h"
#include <qlist.h>

class ManageEmployeeSalaryControl
{
private:
    Role* role;
    float salary;
    int getCurrentSalary();
    int updateSalary();
    int notifySuccess();

public:
    ManageEmployeeSalaryControl(Role*);
    ~ManageEmployeeSalaryControl();
    int applyRaiseAmount(float);
    int applyRaisePercentage(float);
};

#endif // MANAGEEMPLOYEESALARYCONTROL_H
