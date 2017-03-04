#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H

#include <QWidget>

namespace Ui {
class EmployeeList;
}

class EmployeeList : public QWidget
{
    Q_OBJECT

public:
    explicit EmployeeList(QWidget *parent = 0);
    ~EmployeeList();

private slots:

    void on_Employee_List_cellDoubleClicked(int row, int column);

private:
    Ui::EmployeeList *ui;
};

#endif // EMPLOYEELIST_H
