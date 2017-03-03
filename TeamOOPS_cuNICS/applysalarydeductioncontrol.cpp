#include "applysalarydeductioncontrol.h"

ApplySalaryDeductionControl::ApplySalaryDeductionControl(Employee *employee)
{
    this->employee = employee;
}

ApplySalaryDeductionControl::~ApplySalaryDeductionControl()
{
    this->employee = NULL;
}

//Need to figure out if this will be called at the end of the constructor or
//by the control object that created ApplySalaryDeductionControl object
bool ApplySalaryDeductionControl::createSalaryDeductionOption()
{
    //should create a salary deduction option boundary object
    //needs to pass a reference to itself when it is created
    //so that the boundary object can setDeductionPercentage()
    return true;
}

bool ApplySalaryDeductionControl::updateSalaryInDatabase(float deduction)
{
    //Needs to call UPDATE in the db control object
    notifyUserSuccess();
    return true;
}

bool ApplySalaryDeductionControl::notifyUserSuccess()
{
    //Need to create a success notification object here
    return true;
}

bool ApplySalaryDeductionControl::setDeductionPercentage(float deduction)
{
    return updateSalaryInDatabase(deduction);
}
