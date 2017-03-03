#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H

#include<QtSql>

class DatabaseController
{
public:
    DatabaseController();
    void DisplayEmployees();


private:
    QSqlDatabase db;
    QSqlQuery *query;
};

#endif // DATABASECONTROLLER_H
