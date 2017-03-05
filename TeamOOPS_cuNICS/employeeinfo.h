#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <QDialog>
#include "employee.h"
#include <QWidget>
#include <QListWidgetItem>

namespace Ui {
class employeeInfo;
}

class employeeInfo : public QDialog
{
    Q_OBJECT

public:
    explicit employeeInfo(QWidget *parent = 0,Employee* tempE = NULL);
    ~employeeInfo();

        void displayEmployeeInfo();

private:
    Ui::employeeInfo *ui;
    Employee* employee;
};

#endif // EMPLOYEEINFO_H
