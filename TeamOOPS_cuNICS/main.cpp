#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../TeamOOPS_cuNICS/db/cuNICS.db");
    db.open();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    return a.exec();
}
