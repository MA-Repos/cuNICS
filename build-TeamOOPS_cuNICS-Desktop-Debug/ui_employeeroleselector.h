/********************************************************************************
** Form generated from reading UI file 'employeeroleselector.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEROLESELECTOR_H
#define UI_EMPLOYEEROLESELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeRoleSelector
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QWidget *EmployeeRoleSelector)
    {
        if (EmployeeRoleSelector->objectName().isEmpty())
            EmployeeRoleSelector->setObjectName(QStringLiteral("EmployeeRoleSelector"));
        EmployeeRoleSelector->resize(229, 140);
        label = new QLabel(EmployeeRoleSelector);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 151, 17));
        widget = new QWidget(EmployeeRoleSelector);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 40, 96, 80));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);


        retranslateUi(EmployeeRoleSelector);

        QMetaObject::connectSlotsByName(EmployeeRoleSelector);
    } // setupUi

    void retranslateUi(QWidget *EmployeeRoleSelector)
    {
        EmployeeRoleSelector->setWindowTitle(QApplication::translate("EmployeeRoleSelector", "Form", 0));
        label->setText(QApplication::translate("EmployeeRoleSelector", "Select Employee Role", 0));
        radioButton->setText(QApplication::translate("EmployeeRoleSelector", "Faculty", 0));
        radioButton_2->setText(QApplication::translate("EmployeeRoleSelector", "Part-time", 0));
        radioButton_3->setText(QApplication::translate("EmployeeRoleSelector", "Full-time", 0));
    } // retranslateUi

};

namespace Ui {
    class EmployeeRoleSelector: public Ui_EmployeeRoleSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEROLESELECTOR_H
