#ifndef RAISEINPUTFORM_H
#define RAISEINPUTFORM_H

#include <QWidget>

namespace Ui {
class RaiseInputForm;
}

class RaiseInputForm : public QWidget
{
    Q_OBJECT

public:
    explicit RaiseInputForm(QWidget *parent = 0);
    ~RaiseInputForm();

private:
    Ui::RaiseInputForm *ui;
};

#endif // RAISEINPUTFORM_H
