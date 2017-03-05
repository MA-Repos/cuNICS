#include "editemployeeinfocontrol.h"
#include "employee.h"
#include "constants.h"
#include <QMap>
#include <QString>

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

    QMap<QString, QString> list;

    employee->toAttributeList(&list);
    cout << (list.value(QString("Firstname"))).toStdString();

    string query = "UPDATE employee"
                   "SET " ;

    //db->update();
    return 0;
}

int EditEmployeeInfoControl::notifySuccess()
{
    return 0;
}

