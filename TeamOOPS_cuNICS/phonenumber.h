#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <string>
#include <QMap>

using namespace std;

class PhoneNumber
{
private:
    QString countryCode;
    QString areaCode;
    QString localNumber;
    QString extension;

public:
    PhoneNumber();
    PhoneNumber(QString countryCode, QString areaCode, QString localNumber, QString extension);
    ~PhoneNumber();

    //----- Getters -----
    QString getPhoneNumberAsQString();
};

#endif // PHONENUMBER_H
