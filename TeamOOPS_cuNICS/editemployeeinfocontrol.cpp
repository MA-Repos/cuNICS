#include "editemployeeinfocontrol.h"
#include "employee.h"
#include "constants.h"
#include <QMap>

#include <iostream>

EditEmployeeInfoControl::EditEmployeeInfoControl(User*         employee,
                                                 QSqlDatabase* db)
{
    this->employee = employee;
    this->db = db;
}

int EditEmployeeInfoControl::updateEmployeeInfo()
{
    NullCheckNegOne(db);

    QMap<string, string> list;

    employee->toAttributeList(&list);
    cout << list.value("Firstname");

    string query = "UPDATE employee"
                   "SET " ;

    //db->update();
    return 0;
}

int EditEmployeeInfoControl::notifySuccess()
{
    return 0;
}

