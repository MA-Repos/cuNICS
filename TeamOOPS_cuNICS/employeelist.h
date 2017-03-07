#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H

#include <QDialog>
#include <QList>
#include "employee.h"
#include "editemployeeinfocontrol.h"
#include <QModelIndex>

namespace Ui {
class EmployeeList;
}

class EmployeeList : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeList(QWidget *parent = 0, QList<Employee*>* emplst = NULL);
    ~EmployeeList();

    void callDisplay();
private:

private slots:

    void on_tableList_cellDoubleClicked(int row, int column);
    void display_List();






private:
    Ui::EmployeeList *ui;
    QList<Employee*>*   employees;

};

#endif // EMPLOYEELIST_H
