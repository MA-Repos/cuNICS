#ifndef APPLYSALARYDEDUCTIONCONTROL_H
#define APPLYSALARYDEDUCTIONCONTROL_H

#include "employee.h"

class ApplySalaryDeductionControl
{
private:
    int notifySuccess();

public:
    ApplySalaryDeductionControl();
    ~ApplySalaryDeductionControl();

    int setDeductionPercentage(int employeeID, float deduction);
};

#endif // APPLYSALARYDEDUCTIONCONTROL_H
