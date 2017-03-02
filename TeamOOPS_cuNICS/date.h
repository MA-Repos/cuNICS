#ifndef DATE_H
#define DATE_H


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
};

#endif // DATE_H
