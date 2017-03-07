#include "applyraisedialog.h"
#include "ui_applyraisedialog.h"

applyRaiseDialog::applyRaiseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::applyRaiseDialog)
{
    ui->setupUi(this);
}

applyRaiseDialog::~applyRaiseDialog()
{
    delete ui;
}
