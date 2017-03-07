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

private slots:

    void on_LAE_button_clicked();

    void on_logoutButton_clicked();

private:
    Ui::payrollDialog *ui;

};

#endif // PAYROLLDIALOG_H
