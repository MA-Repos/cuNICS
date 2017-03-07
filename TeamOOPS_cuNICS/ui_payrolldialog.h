/********************************************************************************
** Form generated from reading UI file 'payrolldialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYROLLDIALOG_H
#define UI_PAYROLLDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_payrollDialog
{
public:
    QFrame *frame;
    QLabel *title;
    QFrame *frame_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *applyRaise;
    QPushButton *LAE_button;
    QPushButton *logoutButton;

    void setupUi(QDialog *payrollDialog)
    {
        if (payrollDialog->objectName().isEmpty())
            payrollDialog->setObjectName(QString::fromUtf8("payrollDialog"));
        payrollDialog->resize(598, 230);
        payrollDialog->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(payrollDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 611, 80));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 72, 66);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        title = new QLabel(frame);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(150, 10, 301, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Gothic L"));
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_2 = new QFrame(payrollDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 80, 601, 151));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"border-radius: 84px 84px 84px 84px;\n"
"background-color: rgb(39,39,39);\n"
"border: 8px double  #080608;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(18, 10, 194, 62));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        applyRaise = new QPushButton(layoutWidget);
        applyRaise->setObjectName(QString::fromUtf8("applyRaise"));
        applyRaise->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(applyRaise);

        LAE_button = new QPushButton(layoutWidget);
        LAE_button->setObjectName(QString::fromUtf8("LAE_button"));
        LAE_button->setStyleSheet(QString::fromUtf8("color:rgb(0,0,0);\n"
""));

        verticalLayout->addWidget(LAE_button);

        logoutButton = new QPushButton(frame_2);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setGeometry(QRect(460, 110, 99, 27));
        logoutButton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0) !important;"));
        frame_2->raise();
        frame->raise();

        retranslateUi(payrollDialog);

        QMetaObject::connectSlotsByName(payrollDialog);
    } // setupUi

    void retranslateUi(QDialog *payrollDialog)
    {
        payrollDialog->setWindowTitle(QApplication::translate("payrollDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        title->setText(QApplication::translate("payrollDialog", "Payroll Specialist", 0, QApplication::UnicodeUTF8));
        applyRaise->setText(QApplication::translate("payrollDialog", "ApplySalaryRaise", 0, QApplication::UnicodeUTF8));
        LAE_button->setText(QApplication::translate("payrollDialog", "List All Employees", 0, QApplication::UnicodeUTF8));
        logoutButton->setText(QApplication::translate("payrollDialog", "Logout", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class payrollDialog: public Ui_payrollDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYROLLDIALOG_H
