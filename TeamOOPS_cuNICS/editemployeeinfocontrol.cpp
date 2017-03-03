#include "editemployeeinfocontrol.h"
#include "employee.h"
#include "constants.h"

EditEmployeeInfoControl::EditEmployeeInfoControl(User*         employee,
                                                 QSqlDatabase* db)
{
    this->employee = employee;
    this->db = db;
}

int EditEmployeeInfoControl::updateEmployeeInfo()
{
    NullCheckNeg1(db);

    return 0;
}

int EditEmployeeInfoControl::notifySuccess()
{
    return 0;
}

