#include "displaysummary.h"
#include "ui_displaysummary.h"

DisplaySummary::DisplaySummary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplaySummary)
{
    ui->setupUi(this);
}

DisplaySummary::~DisplaySummary()
{
    delete ui;
}
