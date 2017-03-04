#ifndef DATE_H
#define DATE_H

#include <string>
#include <QMap>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int day, int month, int year);
    ~Date();

    //----- Getters -----
    int getDay();
    int getMonth();
    int getYear();

    //----- Operators -----
    bool operator<(Date&) const;
    bool operator>(Date&) const;
    bool operator<=(Date&) const;
    bool operator>=(Date&) const;
    bool operator==(Date&) const;

    bool toAttributeList(QMap<string, string>* list);
};

#endif // DATE_H
