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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_payrollDialog
{
public:
    QFrame *frame;
    QLabel *title;
    QFrame *frame_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *EditEmpInfo_button;
    QPushButton *manageSalaries_button;
    QPushButton *PRGT_button_2;
    QPushButton *LAE_button;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *fullname;
    QPushButton *pushButton;

    void setupUi(QDialog *payrollDialog)
    {
        if (payrollDialog->objectName().isEmpty())
            payrollDialog->setObjectName(QStringLiteral("payrollDialog"));
        payrollDialog->resize(598, 574);
        payrollDialog->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(payrollDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 611, 80));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(254, 108, 111);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        title = new QLabel(frame);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(150, 10, 301, 51));
        QFont font;
        font.setFamily(QStringLiteral("URW Gothic L"));
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        title->setFont(font);
        title->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame_2 = new QFrame(payrollDialog);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 80, 601, 151));
        frame_2->setStyleSheet(QLatin1String("#frame_2{\n"
"border-radius: 84px 84px 84px 84px;\n"
"background-color: rgb(255, 255, 255);\n"
"border: 8px double  #080608;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(18, 10, 342, 95));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        EditEmpInfo_button = new QPushButton(layoutWidget);
        EditEmpInfo_button->setObjectName(QStringLiteral("EditEmpInfo_button"));
        EditEmpInfo_button->setStyleSheet(QLatin1String("\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(EditEmpInfo_button, 0, 0, 1, 1);

        manageSalaries_button = new QPushButton(layoutWidget);
        manageSalaries_button->setObjectName(QStringLiteral("manageSalaries_button"));
        manageSalaries_button->setStyleSheet(QLatin1String("\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(manageSalaries_button, 0, 1, 1, 1);

        PRGT_button_2 = new QPushButton(layoutWidget);
        PRGT_button_2->setObjectName(QStringLiteral("PRGT_button_2"));
        PRGT_button_2->setStyleSheet(QLatin1String("background-color: rgb(77, 139, 36);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(PRGT_button_2, 1, 1, 1, 1);

        LAE_button = new QPushButton(layoutWidget);
        LAE_button->setObjectName(QStringLiteral("LAE_button"));
        LAE_button->setStyleSheet(QLatin1String("color:rgb(0,0,0);\n"
""));

        gridLayout->addWidget(LAE_button, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(frame_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(400, 10, 159, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        fullname = new QLabel(layoutWidget1);
        fullname->setObjectName(QStringLiteral("fullname"));

        horizontalLayout->addWidget(fullname);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 110, 99, 27));
        pushButton->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0) !important;"));
        frame_2->raise();
        frame->raise();

        retranslateUi(payrollDialog);

        QMetaObject::connectSlotsByName(payrollDialog);
    } // setupUi

    void retranslateUi(QDialog *payrollDialog)
    {
        payrollDialog->setWindowTitle(QApplication::translate("payrollDialog", "Dialog", 0));
        title->setText(QApplication::translate("payrollDialog", "Payroll Specialist", 0));
        EditEmpInfo_button->setText(QApplication::translate("payrollDialog", "EditEmployeeInfo", 0));
        manageSalaries_button->setText(QApplication::translate("payrollDialog", "ManageEmployeeSalaries", 0));
        PRGT_button_2->setText(QApplication::translate("payrollDialog", "PayRollGenerationTool", 0));
        LAE_button->setText(QApplication::translate("payrollDialog", "List All Employees", 0));
        label->setText(QApplication::translate("payrollDialog", "Logged In as", 0));
        fullname->setText(QApplication::translate("payrollDialog", "FullName", 0));
        pushButton->setText(QApplication::translate("payrollDialog", "Logout", 0));
    } // retranslateUi

};

namespace Ui {
    class payrollDialog: public Ui_payrollDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYROLLDIALOG_H
