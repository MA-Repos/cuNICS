#ifndef ADDRESS_H
#define ADDRESS_H

#include <QString>
#include <QMap>

using namespace std;

class Address
{
private:
    QString  street;
    int     streetNumber;
    QString  city;
    QString  province;
    QString  country;
    QString  postalCode;

public:
    Address();
    Address(QString street,
            int    streetNumber,
            QString city,
            QString province,
            QString country,
            QString postalCode);
    ~Address();

    //----- Setters -----
    bool setStreet(QString street);
    bool setStreetNumber(int number);
    bool setCity(QString city);
    bool setProvince(QString province);
    bool setCountry(QString country);
    bool setPostalCode(QString postalCode);

    //----- Getters -----
    QString  getStreet();
    int     getStreetNumber();
    QString  getCity();
    QString  getProvince();
    QString  getCountry();
    QString  getPostalCode();
};

#endif // ADDRESS_H
