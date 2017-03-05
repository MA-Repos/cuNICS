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
    return 0;
}

int ListEmployeesControl::getAllEmployees()
{
    NullCheckNegOne(db);


    return 0;
}

int ListEmployeesControl::displayEmployeeList()
{
    QList<Employee> employees = QList<Employee>();

    QString q = "SELECT * FROM employee;";
    DatabaseController dbControl = DatabaseController();

    QSqlQuery query = dbControl.QueryDatabaseWithResult(q);
    while (query.next()) {

        int id = query.value(0).toInt();
        string Fname = query.value(1).toString().toStdString();
        string Lname = query.value(2).toString().toStdString();
        Employee temp = Employee(Fname, Lname, id,NULL,NULL,NULL,0);
        employees.append(temp);

    }
    qDebug() << "EM count"<< employees.count();


    return 0;
}

