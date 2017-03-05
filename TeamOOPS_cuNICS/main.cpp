#include "mainwindow.h"
#include <QApplication>
#include "databasecontroller.h"
#include "listemployeescontrol.h"


void TestingDatabase();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    TestingDatabase();

    return a.exec();
}

// Testing database function
// Remove this function for final submission
void TestingDatabase(){
    qDebug() << "Testing Database!!";
    QString q = "SELECT * FROM employee;";
    DatabaseController dbControl = DatabaseController();

    QSqlQuery query = dbControl.QueryDatabaseWithResult(q);
    while (query.next()) {
        int id = query.value(0).toInt();
        QString username = query.value(1).toString();
        QString password = query.value(2).toString();
        QString name = query.value(3).toString();

        qDebug() << id << username<< password<< name;
    }
//    dbControl.close();
}

void TestingEmlpoyeeList(){



}

