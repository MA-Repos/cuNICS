#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <QDialog>

namespace Ui {
class employeeInfo;
}

class employeeInfo : public QDialog
{
    Q_OBJECT

public:
    explicit employeeInfo(QWidget *parent = 0);
    ~employeeInfo();

private:
    Ui::employeeInfo *ui;
};

#endif // EMPLOYEEINFO_H
