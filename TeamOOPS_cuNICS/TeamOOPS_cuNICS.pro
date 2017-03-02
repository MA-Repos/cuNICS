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
    payrolldialog.cpp

HEADERS  += mainwindow.h \
    user.h \
    employee.h \
    payrollspecialist.h \
    employeedialog.h \
    payrolldialog.h

FORMS    += mainwindow.ui \
    employeedialog.ui \
    payrolldialog.ui
