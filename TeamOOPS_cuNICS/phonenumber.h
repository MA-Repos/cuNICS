#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <string>
#include <QMap>

using namespace std;

class PhoneNumber
{
private:
    int countryCode;
    int areaCode;
    int localNumber;
    int extension;

public:
    PhoneNumber();
    PhoneNumber(int countryCode, int areaCode, int localNumber, int extension);
    ~PhoneNumber();

    //----- Getters -----
    string getPhoneNumberAsString();

    bool   toAttributeList(QMap<string, string>* list);
};

#endif // PHONENUMBER_H
