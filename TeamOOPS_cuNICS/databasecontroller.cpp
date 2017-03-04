#include "databasecontroller.h"
#include "employee.h"

DatabaseController::DatabaseController(){
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


QSqlQuery DatabaseController::QueryDatabaseWithResult(QString q){


    QSqlQuery query;
    query.exec(q);

    return query;
}

void DatabaseController::QueryDatabaseWithoutResult(QString q){

    QSqlQuery query;
    query.exec(q);

}

DatabaseController::~DatabaseController(){
    db.close();
    delete query;
}
