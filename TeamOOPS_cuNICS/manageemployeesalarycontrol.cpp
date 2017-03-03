#include "manageemployeesalarycontrol.h"
#include "constants.h"

// parameters need motifying
ManageEmployeeSalaryControl::ManageEmployeeSalaryControl(Role* role, float amount, float percentage, QSqlDatabase* db)
{
    this->role = role;
    this->amount = amount;
    this->percentage = percentage;
    this->db = db;
}

int ManageEmployeeSalaryControl::getEmployeesByRole()
{
    NullCheckNeg1(db);
    NullCheckNeg1(role);

    return 0;
}

int ManageEmployeeSalaryControl::saveEmployees()
{
    NullCheckNeg1(db);

    return 0;
}

int ManageEmployeeSalaryControl::applyRaise()
{
    return 0;
}

int ManageEmployeeSalaryControl::notifySuccess()
{
    return 0;
}
