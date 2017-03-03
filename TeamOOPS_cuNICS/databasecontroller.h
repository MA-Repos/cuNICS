#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H

#include<QtSql>

class DatabaseController
{
public:
    DatabaseController();
    QSqlQuery QueryDatabase(QString q);
    ~DatabaseController();

private:
    QSqlDatabase db;
    QSqlQuery *query;
};

#endif // DATABASECONTROLLER_H
