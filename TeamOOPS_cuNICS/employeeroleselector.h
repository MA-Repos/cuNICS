#ifndef EMPLOYEEROLESELECTOR_H
#define EMPLOYEEROLESELECTOR_H

#include <QWidget>

namespace Ui {
class EmployeeRoleSelector;
}

class EmployeeRoleSelector : public QWidget
{
    Q_OBJECT

public:
    explicit EmployeeRoleSelector(QWidget *parent = 0);
    ~EmployeeRoleSelector();

private:
    Ui::EmployeeRoleSelector *ui;
};

#endif // EMPLOYEEROLESELECTOR_H
