#ifndef USER_H
#define USER_H

#include <string>
#include <QMap>

using namespace std;

class User
{
protected:
    string fName;
    string lName;
    string username;
    string password;

public:
    User();
    User(string fName, string lName);
    User(string fName, string lName, string username, string password);
    ~User();

    //----- Setters -----
    bool setFName(string);
    bool setLName(string);
    bool setUsername(string);
    bool setPassword(string);

    //----- Getters -----
    string getFName();
    string getLName();
    string getFullName();
    string getUsername();

    virtual bool toAttributeList(QMap<string, string>* list);
    virtual string toString();
};

#endif // USER_H
