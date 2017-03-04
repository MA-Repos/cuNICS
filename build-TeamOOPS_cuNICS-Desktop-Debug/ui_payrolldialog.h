/********************************************************************************
** Form generated from reading UI file 'payrolldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYROLLDIALOG_H
#define UI_PAYROLLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_payrollDialog
{
public:
    QLabel *title;
    QLabel *fullname;
    QPushButton *pushButton;
    QTableWidget *Employee_List;

    void setupUi(QDialog *payrollDialog)
    {
        if (payrollDialog->objectName().isEmpty())
            payrollDialog->setObjectName(QStringLiteral("payrollDialog"));
        payrollDialog->resize(442, 455);
        payrollDialog->setStyleSheet(QStringLiteral("background-color: rgb(44, 44, 44);"));
        title = new QLabel(payrollDialog);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(80, 10, 301, 51));
        QFont font;
        font.setFamily(QStringLiteral("URW Gothic L"));
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        title->setFont(font);
        title->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        fullname = new QLabel(payrollDialog);
        fullname->setObjectName(QStringLiteral("fullname"));
        fullname->setGeometry(QRect(20, 150, 67, 17));
        pushButton = new QPushButton(payrollDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 80, 131, 41));
        Employee_List = new QTableWidget(payrollDialog);
        if (Employee_List->columnCount() < 2)
            Employee_List->setColumnCount(2);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignTop);
        __qtablewidgetitem->setFont(font1);
        Employee_List->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Employee_List->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        Employee_List->setObjectName(QStringLiteral("Employee_List"));
        Employee_List->setGeometry(QRect(80, 180, 256, 192));
        Employee_List->setMaximumSize(QSize(281, 192));
        Employee_List->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        QWidget::setTabOrder(pushButton, Employee_List);

        retranslateUi(payrollDialog);

        QMetaObject::connectSlotsByName(payrollDialog);
    } // setupUi

    void retranslateUi(QDialog *payrollDialog)
    {
        payrollDialog->setWindowTitle(QApplication::translate("payrollDialog", "Dialog", 0));
        title->setText(QApplication::translate("payrollDialog", "Payroll Specialist", 0));
        fullname->setText(QApplication::translate("payrollDialog", "FullName", 0));
        pushButton->setText(QApplication::translate("payrollDialog", "List All Employees", 0));
        QTableWidgetItem *___qtablewidgetitem = Employee_List->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("payrollDialog", "EmployeeNumber", 0));
        QTableWidgetItem *___qtablewidgetitem1 = Employee_List->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("payrollDialog", "Employee Name", 0));
    } // retranslateUi

};

namespace Ui {
    class payrollDialog: public Ui_payrollDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYROLLDIALOG_H
