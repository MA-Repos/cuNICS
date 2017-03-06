#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <QString>
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
    QString getLocalNumber();
    QString getCountryCode();
    QString getExtension();
    QString getLocalCode();
};

#endif // PHONENUMBER_H
