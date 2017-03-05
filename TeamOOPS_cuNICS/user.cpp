#include "user.h"
#include <QString>

using namespace std;

User::User()
{
    User("None", "None", "None", "None");
}

User::User(QString fName, QString lName)
{
    User(fName, lName, "None", "None");
}

User::User(QString fName, QString lName, QString username, QString password)
{
    this->fName = fName;
    this->lName = lName;
    this->username = username;
    this->password = password;
}

User::~User()
{

}

//----- Setters -----
bool User::setFName(QString fName)
{
    this->fName = fName;
    return true;
}

bool User::setLName(QString lName)
{
    this->lName = lName;
    return true;
}

bool User::setUsername(QString username)
{
    this->username = username;
    return true;
}

bool User::setPassword(QString password)
{
    this->password = password;
    return true;
}

//----- Getters -----
QString User::getFName()
{
    return fName;
}

QString User::getLName()
{
    return lName;
}

QString User::getFullName()
{
    return fName + " " + lName;
}

QString User::getUsername()
{
    return username;
}

bool User::toAttributeList(QMap<QString, QString>* list)
{

}

QString User::toQString()
{

}
