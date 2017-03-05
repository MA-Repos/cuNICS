#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H

#include <QWidget>
#include "employee.h"

namespace Ui {
class EmployeeList;
}

class EmployeeList : public QWidget
{
    Q_OBJECT

public:
    explicit EmployeeList(QWidget *parent = 0,QList* employeeList);
    ~EmployeeList();

private slots:

    void on_Employee_List_cellDoubleClicked(int row, int column);
    void display_List();

private:
    Ui::EmployeeList *ui;
     QList<Employee*>*   employees;
};

#endif // EMPLOYEELIST_H
