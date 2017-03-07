/********************************************************************************
** Form generated from reading UI file 'employeelist.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEELIST_H
#define UI_EMPLOYEELIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeList
{
public:
    QTableWidget *tableList;

    void setupUi(QWidget *EmployeeList)
    {
        if (EmployeeList->objectName().isEmpty())
            EmployeeList->setObjectName(QString::fromUtf8("EmployeeList"));
        EmployeeList->resize(238, 237);
        EmployeeList->setLayoutDirection(Qt::LeftToRight);
        EmployeeList->setAutoFillBackground(false);
        EmployeeList->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableList = new QTableWidget(EmployeeList);
        if (tableList->columnCount() < 2)
            tableList->setColumnCount(2);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignTop);
        __qtablewidgetitem->setFont(font);
        tableList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tableList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableList->setObjectName(QString::fromUtf8("tableList"));
        tableList->setGeometry(QRect(20, 0, 211, 231));
#ifndef QT_NO_ACCESSIBILITY
        tableList->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        tableList->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableList->setFrameShadow(QFrame::Raised);
        tableList->setLineWidth(4);
        tableList->setMidLineWidth(4);
        tableList->setSortingEnabled(true);

        retranslateUi(EmployeeList);

        QMetaObject::connectSlotsByName(EmployeeList);
    } // setupUi

    void retranslateUi(QWidget *EmployeeList)
    {
        EmployeeList->setWindowTitle(QApplication::translate("EmployeeList", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EmployeeList", "EmployeeID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EmployeeList", "Name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EmployeeList: public Ui_EmployeeList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEELIST_H
