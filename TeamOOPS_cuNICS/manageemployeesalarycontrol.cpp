#include "manageemployeesalarycontrol.h"
#include "constants.h"

// parameters need motifying
ManageEmployeeSalaryControl::ManageEmployeeSalaryControl(Role*         role,
                                                         float         amount,
                                                         float         percentage,
                                                         QSqlDatabase* db)
{
    this->role = role;
    this->amount = amount;
    this->percentage = percentage;
    this->db = db;
}

int ManageEmployeeSalaryControl::getEmployeesByRole()
{
    NullCheckNegOne(db);
    NullCheckNegOne(role);

    return 0;
}

int ManageEmployeeSalaryControl::saveEmployees()
{
    NullCheckNegOne(db);

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
