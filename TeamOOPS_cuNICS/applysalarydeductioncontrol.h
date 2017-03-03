#ifndef APPLYSALARYDEDUCTIONCONTROL_H
#define APPLYSALARYDEDUCTIONCONTROL_H

#include "employee.h"

class ApplySalaryDeductionControl
{
private:
    User* employee;
    //TODO: Add a reference to DBControl Object

    bool createSalaryDeductionOption(); // May need to change this based on what the boundary object name is
    bool updateSalaryInDatabase(float deduction);
    bool notifyUserSuccess();

public:
    ApplySalaryDeductionControl(Employee* employee);
    ~ApplySalaryDeductionControl();

    bool setDeductionPercentage(float deduction);

};

#endif // APPLYSALARYDEDUCTIONCONTROL_H
