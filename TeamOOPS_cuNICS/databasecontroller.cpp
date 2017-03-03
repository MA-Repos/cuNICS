#include "databasecontroller.h"
#include "employee.h"

DatabaseController::DatabaseController()
{

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../TeamOOPS_cuNICS/db/cuNICS.db");
    bool ok = db.open();
    query = new QSqlQuery(db);
    if(ok == false){
        qDebug() << "Database Not working";
    }else{
        qDebug() << "Database working !!";
    }
}


void DatabaseController::DisplayEmployees(){


    QSqlQuery query;
    query.exec("SELECT * FROM employee;");
//    QMap<int, employee>  employees = QMap<int, employee>();



    while (query.next()) {
//            employee temp = employees();



//            employees.insert(id,)
            int id = query.value(0).toInt();
            QString username = query.value(1).toString();
            QString password = query.value(2).toString();
            QString name = query.value(3).toString();

            qDebug() << id << username<< password<< name;
        }
}
