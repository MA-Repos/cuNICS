#include "employeeinfo.h"
#include "ui_employeeinfo.h"

employeeInfo::employeeInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employeeInfo)
{
    ui->setupUi(this);
    QPixmap pixMale("https://www.google.ca/url?sa=i&rct=j&q=&esrc=s&source=images&cd=&cad=rja&uact=8&ved=0ahUKEwj4t4LXz73SAhUI6IMKHbvsBx8QjRwIBw&url=https%3A%2F%2Fwww.iconfinder.com%2Ficons%2F278382%2Faccount_avatar_boy_male_man_profile_user_icon&psig=AFQjCNE97sqBRxRlA5fu4diG10ZXPbJFTQ&ust=1488743444950637");
    QPixmap pixFemale("https://www.google.ca/url?sa=i&rct=j&q=&esrc=s&source=images&cd=&cad=rja&uact=8&ved=0ahUKEwjLm8qI0L3SAhUM4YMKHdoVDpUQjRwIBw&url=http%3A%2F%2Fwww.freeiconspng.com%2Ficons%2Fprofile-icon-png&psig=AFQjCNE97sqBRxRlA5fu4diG10ZXPbJFTQ&ust=1488743444950637");
    ui->label_profilePic->setPixmap(pixMale);
}

employeeInfo::~employeeInfo()
{
    delete ui;
}
