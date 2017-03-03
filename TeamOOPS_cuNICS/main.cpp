#include "mainwindow.h"
#include <QApplication>
#include "databasecontroller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    DatabaseController dbControl = DatabaseController();
    dbControl.DisplayEmployees();

    return a.exec();
}
