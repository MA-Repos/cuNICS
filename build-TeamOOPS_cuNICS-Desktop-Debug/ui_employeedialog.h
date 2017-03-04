/********************************************************************************
** Form generated from reading UI file 'employeedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEDIALOG_H
#define UI_EMPLOYEEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_EmployeeDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *EmployeeDialog)
    {
        if (EmployeeDialog->objectName().isEmpty())
            EmployeeDialog->setObjectName(QStringLiteral("EmployeeDialog"));
        EmployeeDialog->resize(568, 411);
        label = new QLabel(EmployeeDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 30, 151, 17));

        retranslateUi(EmployeeDialog);

        QMetaObject::connectSlotsByName(EmployeeDialog);
    } // setupUi

    void retranslateUi(QDialog *EmployeeDialog)
    {
        EmployeeDialog->setWindowTitle(QApplication::translate("EmployeeDialog", "Dialog", 0));
        label->setText(QApplication::translate("EmployeeDialog", "Employee Login Page", 0));
    } // retranslateUi

};

namespace Ui {
    class EmployeeDialog: public Ui_EmployeeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEDIALOG_H
