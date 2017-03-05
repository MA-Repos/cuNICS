#ifndef USER_H
#define USER_H

#include <QString>
#include <QMap>

using namespace std;

class User
{
protected:
    QString fName;
    QString lName;
    QString username;
    QString password;

public:
    User();
    User(QString fName, QString lName);
    User(QString fName, QString lName, QString username, QString password);
    ~User();

    //----- Setters -----
    bool setFName(QString);
    bool setLName(QString);
    bool setUsername(QString);
    bool setPassword(QString);

    //----- Getters -----
    QString getFName();
    QString getLName();
    QString getFullName();
    QString getUsername();

    virtual bool toAttributeList(QMap<QString, QString>* list);
    virtual QString toQString();
};

#endif // USER_H
