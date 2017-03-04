#include <QSqlDatabase>
#-------------------------------------------------
#
# Project created by QtCreator 2017-03-01T15:22:11
#
#-------------------------------------------------

QT       += core gui sql
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
<<<<<<< HEAD
    databasecontroller.cpp
=======
    employeeinfo.cpp
>>>>>>> ee92973a5865ec71452e914e4022972ff93e1db3

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
<<<<<<< HEAD
    databasecontroller.h
=======
    employeeinfo.h
>>>>>>> ee92973a5865ec71452e914e4022972ff93e1db3

FORMS    += mainwindow.ui \
    employeedialog.ui \
    payrolldialog.ui \
    employeeinfo.ui

RESOURCES +=

DISTFILES += \
    _original.jpeg
