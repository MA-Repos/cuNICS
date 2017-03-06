#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H

#include<QtSql>

class DatabaseController
{
private:
    QSqlDatabase db;
    QSqlQuery *query;

public:
    DatabaseController();
    ~DatabaseController();
    int connectDatabase(QString);
    QSqlQuery queryDatabase(QString q);
};

#endif // DATABASECONTROLLER_H
