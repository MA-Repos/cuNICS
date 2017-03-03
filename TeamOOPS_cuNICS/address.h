#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
#include <QMap>

using namespace std;

class Address
{
private:
    string  street;
    int     streetNumber;
    string  city;
    string  province;
    string  country;
    string  postalCode;

public:
    Address();
    Address(string street,
            int    streetNumber,
            string city,
            string province,
            string country,
            string postalCode);
    ~Address();

    //----- Setters -----
    bool setStreet(string street);
    bool setStreetNumber(int number);
    bool setCity(string city);
    bool setProvince(string province);
    bool setCountry(string country);
    bool setPostalCode(string postalCode);

    //----- Getters -----
    string  getStreet();
    int     getStreetNumber();
    string  getCity();
    string  getProvince();
    string  getCountry();
    string  getPostalCode();
    bool    toAttributeList(QMap<string, string>* list);
};

#endif // ADDRESS_H
