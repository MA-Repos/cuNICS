#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H

#include<QtSql>

class DatabaseController
{
public:
    DatabaseController();

    QSqlQuery QueryDatabaseWithResult(QString q);
    void QueryDatabaseWithoutResult(QString q);


    ~DatabaseController();

private:
    QSqlDatabase db;
    QSqlQuery *query;
};

#endif // DATABASECONTROLLER_H
