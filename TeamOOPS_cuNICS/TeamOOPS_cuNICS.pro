#-------------------------------------------------
#
# Project created by QtCreator 2017-03-01T15:22:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TeamOOPS_cuNICS
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    user.cpp \
    employee.cpp \
    payrollspecialist.cpp \
    bankinformation.cpp \
    date.cpp \
    phonenumber.cpp

HEADERS  += mainwindow.h \
    user.h \
    employee.h \
    payrollspecialist.h \
    bankinformation.h \
    date.h \
    phonenumber.h

FORMS    += mainwindow.ui
