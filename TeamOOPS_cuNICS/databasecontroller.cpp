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

QSqlQuery DatabaseController::QueryDatabase(QString q){

    QSqlQuery query;
    query.exec(q);

    return query;
}

DatabaseController::~DatabaseController(){
    db.close();
    delete query;
}
