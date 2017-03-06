#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>

int main(int argc, char *argv[])
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/admin/Desktop/3004/TeamOOPS-cuNICS/TeamOOPS_cuNICS/db/cuNICS.db");
    if (!db.open())
    {
       qDebug() << "Error: connection with database fail";
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
