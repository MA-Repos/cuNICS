#include <QSqlDatabase>
#-------------------------------------------------
#
# Project created by QtCreator 2017-03-01T15:22:11
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TeamOOPS_cuNICS
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    user.cpp \
    employee.cpp \
    payrollspecialist.cpp \
    employeedialog.cpp \
    payrolldialog.cpp \
    bankinformation.cpp \
    date.cpp \
    phonenumber.cpp \
    address.cpp \
    salary.cpp \
    status.cpp \
    role.cpp \
    paystub.cpp \
    editemployeeinfocontrol.cpp \
    listemployeescontrol.cpp \
    payrollgenerationtool.cpp \
    manageemployeesalarycontrol.cpp \
    employeeinfo.cpp \
    databasecontroller.cpp \
    employeelist.cpp \
    payrollgentool.cpp \
    displaysummary.cpp \
    employeeroleselector.cpp \
    raiseinputform.cpp

HEADERS  += mainwindow.h \
    user.h \
    employee.h \
    payrollspecialist.h \
    employeedialog.h \
    payrolldialog.h \
    bankinformation.h \
    date.h \
    phonenumber.h \
    address.h \
    salary.h \
    status.h \
    constants.h \
    role.h \
    paystub.h \
    editemployeeinfocontrol.h \
    listemployeescontrol.h \
    payrollgenerationtool.h \
    manageemployeesalarycontrol.h \
    employeeinfo.h \
    databasecontroller.h \
    employeelist.h \
    payrollgentool.h \
    displaysummary.h \
    employeeroleselector.h \
    raiseinputform.h

FORMS    += mainwindow.ui \
    employeedialog.ui \
    payrolldialog.ui \
    employeeinfo.ui \
    employeelist.ui \
    payrollgentool.ui \
    displaysummary.ui \
    employeeroleselector.ui \
    raiseinputform.ui

<<<<<<< HEAD
=======

RESOURCES += \
    pics.qrc
>>>>>>> 6ec26b17c80c1580a7ffab8023ff5bccc4599d3a

