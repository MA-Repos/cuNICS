#ifndef PAYROLLDIALOG_H
#define PAYROLLDIALOG_H

#include <QDialog>

namespace Ui {
class payrollDialog;
}

class payrollDialog : public QDialog
{
    Q_OBJECT

public:
    explicit payrollDialog(QWidget *parent = 0);
    ~payrollDialog();

private:
    Ui::payrollDialog *ui;
};

#endif // PAYROLLDIALOG_H
