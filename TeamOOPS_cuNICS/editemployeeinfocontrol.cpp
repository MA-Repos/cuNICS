#include "editemployeeinfocontrol.h"
#include "addroledialog.h"
#include "employee.h"
#include "constants.h"
#include "employeeinfo.h"
#include "status.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>
#include <QDebug>
#include <QSqlError>

EditEmployeeInfoControl::EditEmployeeInfoControl()
{

}



int EditEmployeeInfoControl::notifySuccess()
{
    return 0;
}

int EditEmployeeInfoControl::getEmployeeInfo(int eid){
    this->getEmployee(eid);
    return 0;
}



int EditEmployeeInfoControl::getEmployee(int employeeID)
{
    this->getRoles(employeeID);

    QSqlQuery query;
    QString queryString = "SELECT * "
                          "FROM employee "
                          "WHERE employeeid = (:employeeid)";

    query.prepare(queryString);
    query.bindValue(":employeeid", QString::number(employeeID));
    query.exec();
    query.next();

    int indexEmployeeID =    query.record().indexOf("employeeid");
    int indexFName =         query.record().indexOf("firstname");
    int indexLName =         query.record().indexOf("lastname");
    int indexCountryCode =   query.record().indexOf("countrycode");
    int indexAreaCode =      query.record().indexOf("areacode");
    int indexLocalNumber =   query.record().indexOf("localnumber");
    int indexExtension =     query.record().indexOf("extension");
    int indexStreet =        query.record().indexOf("street");
    int indexStreetNumber =  query.record().indexOf("streetnumber");
    int indexCity =          query.record().indexOf("city");
    int indexProvince =      query.record().indexOf("province");
    int indexCountry =       query.record().indexOf("country");
    int indexPostalCode =    query.record().indexOf("postalcode");
    int indexAccountNumber = query.record().indexOf("accountnumber");
    int indexBankNumber =    query.record().indexOf("banknumber");
    int indexBranchNumber =  query.record().indexOf("branchnumber");
    int indexBankName =      query.record().indexOf("bankname");
    int indexSinNumber =     query.record().indexOf("sinnumber");

    PhoneNumber* phoneNumber = new PhoneNumber(query.value(indexCountryCode).toString(),
                                               query.value(indexAreaCode).toString(),
                                               query.value(indexLocalNumber).toString(),
                                               query.value(indexExtension).toString());

    Address* address = new Address(query.value(indexStreet).toString(),
                                   query.value(indexStreetNumber).toInt(),
                                   query.value(indexCity).toString(),
                                   query.value(indexProvince).toString(),
                                   query.value(indexCountry).toString(),
                                   query.value(indexPostalCode).toString());

    BankInformation* bankInformation = new BankInformation(query.value(indexAccountNumber).toInt(),
                                                           query.value(indexBankNumber).toInt(),
                                                           query.value(indexBranchNumber).toInt(),
                                                           query.value(indexBankName).toString(),
                                                           query.value(indexFName).toString(),
                                                           query.value(indexLName).toString());

    employee = new Employee(query.value(indexFName).toString(),
                            query.value(indexLName).toString(),
                            query.value(indexEmployeeID).toInt(),
                            phoneNumber,
                            address,
                            bankInformation,
                            query.value(indexSinNumber).toInt(),
                            roles);



     //TODO: call boundry
    employeeInfo* eInfo = new employeeInfo(0,employee);

    eInfo->displayEmployeeInfo();
    eInfo->setModal(true);
    eInfo->exec();
    return 0;


}



void EditEmployeeInfoControl::updateFunctionCaller(Employee* eTemp){
    this->updateEmployeeInfo(eTemp);
}

int EditEmployeeInfoControl::updateEmployeeInfo(Employee *employee)
{

    int EmployeeID = employee->getEmployeeNumber();
    string FName = employee->getFName().toStdString();
    string LName = employee->getLName().toStdString();
    //string FName = "Ahmed";
    //string LName = "Moe";

//    qDebug() << LName;
    string Street = employee->getAddress()->getStreet().toStdString();
    int StreetNumber = employee->getAddress()->getStreetNumber();
    //
    string countryCode = employee->getPhoneNumber()->getCountryCode().toStdString();
    string areaCode  = employee->getPhoneNumber()->getLocalCode().toStdString();
    string localNum  = employee->getPhoneNumber()->getLocalNumber().toStdString();
    string extension = employee->getPhoneNumber()->getExtension().toStdString();

    //string phonenumber = employee->getPhoneNumber()->getPhoneNumberAsQString().toStdString();
    string City = employee->getAddress()->getCity().toStdString();
    string Province = employee->getAddress()->getProvince().toStdString();
    string Country = employee->getAddress()->getCountry().toStdString();
    string PostalCode = employee->getAddress()->getPostalCode().toStdString();
    int AccountNumber = employee->getBankInformation()->getAccountNumber();
    int BankNumber = employee->getBankInformation()->getBankNumber();
    int BranchNumber = employee->getBankInformation()->getBranchNumber();
    string BankName = employee->getBankInformation()->getBankName().toStdString();
    int SinNumber = employee->getSIN();



    // Other way to do it
    //    QString myQuery = QString("UPDATE EMPLOYEE set firstname = %1 ,lastname = %2,sinnumber = %3, phonenumber = %4, street = %5,streetnumber = %6, city = %7, province= %8, country= %9, postalccode= %10, bankname= %11, banknumber= %12, branchnumber= %13, accountnumber=%14 where employeeid = %15;").arg(FName, LName, QString::number(SinNumber), phonenumber, Street, QString::number(StreetNumber), City, Province, Country, PostalCode, BankName, QString::number(BankNumber), QString::number(BranchNumber), QString::number(AccountNumber),QString::number(EmployeeID));
    //    qDebug() << myQuery;


    string sqlstr = "UPDATE employee SET firstname = \'" + FName + "\' ,lastname = \'" + LName + "\' , sinnumber = "+(QString::number(SinNumber).toStdString())+" ,countrycode = \'"+countryCode+"\' ,areacode = \'"+areaCode+"\', localnumber = \'"+localNum+"\',extension = \'"+extension+"\',street = \'"+Street+"\', streetnumber = "+(QString::number(StreetNumber).toStdString())+" ,city =\'"+City+"\' , province= \'"+Province+"\' ,country= \'"+Country+"\' ,postalcode= \'"+PostalCode+"\' ,bankname=\'"+BankName+"\' ,banknumber= "+(QString::number(BankNumber).toStdString())+", branchnumber= "+(QString::number(BranchNumber).toStdString())+", accountnumber= "+(QString::number(AccountNumber).toStdString())+" WHERE employeeid = "+(QString::number(EmployeeID).toStdString())+";";
    QString sql = QString::fromStdString(sqlstr);

    QSqlQuery query(sql);



    return 0;
}


int EditEmployeeInfoControl::updateEmployeeRole(Role* temprole,int ID){

qDebug() << "CalledUpdate";

           QSqlQuery query;
           QString queryString = "INSERT INTO employmentdetails "
                                 "VALUES (:employeeID, "
                                 "        :roleType, "
                                 "        :employmentStatus, "
                                 "        :employmentType, "
                                 "        :startDate, "
                                 "        :endDate, "
                                 "        :salary, "
                                 "        :deductionPercentage) ";

           query.prepare(queryString);
           query.bindValue(":employeeID",          QString::number(ID));
           query.bindValue(":roleType",            temprole->getRole());
           query.bindValue(":employmentStatus",    temprole->getStatus()->getEmploymentStatus());
           query.bindValue(":employmentType",      temprole->getStatus()->getEmploymentType());
           query.bindValue(":startDate",           temprole->getStatus()->getStartDate()->toString());
           query.bindValue(":endDate",             temprole->getStatus()->getEndDate()->toString());
           query.bindValue(":salary",              QString::number(temprole->getSalary()->getSalary()));
           query.bindValue(":deductionPercentage", QString::number(temprole->getSalary()->getDeductionPercentage()));
           query.exec();

       return 0;

}

int EditEmployeeInfoControl::getRoles(int employeeID)
{
    roles = new QList<Role*>();
    QSqlQuery query;

    QString queryString = "SELECT roletype, employmentstatus, employmenttype, deductionpercentage, salary "
                          "FROM employmentdetails "
                          "WHERE employeeid = (:employeeid)";

    query.prepare(queryString);
    query.bindValue(":employeeid", QString::number(employeeID));
    query.exec();

    int indexRoleType =            query.record().indexOf("roletype");
    int indexEmploymentStatus =    query.record().indexOf("employmentstatus");
    int indexEmploymentType =      query.record().indexOf("employmenttype");
    int indexDeductionPercentage = query.record().indexOf("deductionpercentage");
    int indexSalary =              query.record().indexOf("salary");

    while(query.next()){

        roles->append(new Role(
                               query.value(indexRoleType).toString(),
                               new Status(true,
                                          query.value(indexEmploymentStatus).toString(),
                                          query.value(indexEmploymentType).toString(),
                                          NULL,
                                          NULL
                                          ),
                               new Salary(query.value(indexSalary).toFloat(),
                                          query.value(indexDeductionPercentage).toFloat())));
    }

    return 0;
}




