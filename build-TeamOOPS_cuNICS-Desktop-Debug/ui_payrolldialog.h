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

QT_BEGIN_NAMESPACE

class Ui_payrollDialog
{
public:
    QLabel *label_2;
    QLabel *fullname;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *payrollDialog)
    {
        if (payrollDialog->objectName().isEmpty())
            payrollDialog->setObjectName(QStringLiteral("payrollDialog"));
        payrollDialog->resize(442, 455);
        label_2 = new QLabel(payrollDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 0, 301, 51));
        QFont font;
        font.setFamily(QStringLiteral("URW Gothic L"));
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        fullname = new QLabel(payrollDialog);
        fullname->setObjectName(QStringLiteral("fullname"));
        fullname->setGeometry(QRect(20, 90, 67, 17));
        label_3 = new QLabel(payrollDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 110, 131, 17));
        pushButton = new QPushButton(payrollDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 80, 131, 61));

        retranslateUi(payrollDialog);

        QMetaObject::connectSlotsByName(payrollDialog);
    } // setupUi

    void retranslateUi(QDialog *payrollDialog)
    {
        payrollDialog->setWindowTitle(QApplication::translate("payrollDialog", "Dialog", 0));
        label_2->setText(QApplication::translate("payrollDialog", "Payroll Specialist", 0));
        fullname->setText(QApplication::translate("payrollDialog", "FullName", 0));
        label_3->setText(QApplication::translate("payrollDialog", "Employee Number", 0));
        pushButton->setText(QApplication::translate("payrollDialog", "List All Employees", 0));
    } // retranslateUi

};

namespace Ui {
    class payrollDialog: public Ui_payrollDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYROLLDIALOG_H
