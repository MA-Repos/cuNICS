#include "listemployeescontrol.h"
#include "constants.h"

ListEmployeesControl::ListEmployeesControl(QSqlDatabase* db)
{
    this->db = db;
    this->employees = NULL;
}

int ListEmployeesControl::setFilter(User* filter)
{
    this->filter = filter;
}

int ListEmployeesControl::getAllEmployees()
{
    NullCheckNegOne(db);

    return 0;
}

int ::ListEmployeesControl::displayEmployeeList()
{
    return 0;
}

