#ifndef APPLYRAISEDIALOG_H
#define APPLYRAISEDIALOG_H

#include <QDialog>

namespace Ui {
class applyRaiseDialog;
}

class applyRaiseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit applyRaiseDialog(QWidget *parent = 0);
    ~applyRaiseDialog();

private:
    Ui::applyRaiseDialog *ui;
};

#endif // APPLYRAISEDIALOG_H
