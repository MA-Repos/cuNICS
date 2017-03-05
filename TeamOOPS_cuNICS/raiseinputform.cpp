#include "raiseinputform.h"
#include "ui_raiseinputform.h"

RaiseInputForm::RaiseInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RaiseInputForm)
{
    ui->setupUi(this);
}

RaiseInputForm::~RaiseInputForm()
{
    delete ui;
}
