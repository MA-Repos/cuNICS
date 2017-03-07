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
    manageemployeesalarycontrol.cpp \
    employeeinfo.cpp \
    databasecontroller.cpp \
    employeelist.cpp \
    addroledialog.cpp \
    applyraisedialog.cpp

HEADERS  += mainwindow.h \
    user.h \
    employee.h \
    payrollspecialist.h \
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
    manageemployeesalarycontrol.h \
    employeeinfo.h \
    databasecontroller.h \
    employeelist.h \
    addroledialog.h \
    applyraisedialog.h

FORMS    += mainwindow.ui \
    payrolldialog.ui \
    employeeinfo.ui \
    employeelist.ui \
    addroledialog.ui \
    applyraisedialog.ui


RESOURCES += \
    pics.qrc

