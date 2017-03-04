#ifndef PAYROLLGENTOOL_H
#define PAYROLLGENTOOL_H

#include <QDialog>

namespace Ui {
class PayrollGenTool;
}

class PayrollGenTool : public QDialog
{
    Q_OBJECT

public:
    explicit PayrollGenTool(QWidget *parent = 0);
    ~PayrollGenTool();

private:
    Ui::PayrollGenTool *ui;
};

#endif // PAYROLLGENTOOL_H
