/********************************************************************************
** Form generated from reading UI file 'payrollgentool.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYROLLGENTOOL_H
#define UI_PAYROLLGENTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <displaysummary.h>

QT_BEGIN_NAMESPACE

class Ui_PayrollGenTool
{
public:
    QPushButton *pushButton_3;
    QFrame *frame;
    QLabel *title;
    DisplaySummary *PaySummary;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *GEP_Button;
    QPushButton *VPS_Button;

    void setupUi(QDialog *PayrollGenTool)
    {
        if (PayrollGenTool->objectName().isEmpty())
            PayrollGenTool->setObjectName(QStringLiteral("PayrollGenTool"));
        PayrollGenTool->resize(576, 535);
        pushButton_3 = new QPushButton(PayrollGenTool);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(480, 110, 99, 27));
        frame = new QFrame(PayrollGenTool);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 581, 91));
        frame->setStyleSheet(QLatin1String("\n"
"background-color: rgb(254, 108, 111);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        title = new QLabel(frame);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(90, 20, 411, 51));
        QFont font;
        font.setFamily(QStringLiteral("URW Gothic L"));
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        title->setFont(font);
        title->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        PaySummary = new DisplaySummary(PayrollGenTool);
        PaySummary->setObjectName(QStringLiteral("PaySummary"));
        PaySummary->setGeometry(QRect(30, 230, 511, 271));
        widget = new QWidget(PayrollGenTool);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 120, 219, 62));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        GEP_Button = new QPushButton(widget);
        GEP_Button->setObjectName(QStringLiteral("GEP_Button"));

        verticalLayout->addWidget(GEP_Button);

        VPS_Button = new QPushButton(widget);
        VPS_Button->setObjectName(QStringLiteral("VPS_Button"));

        verticalLayout->addWidget(VPS_Button);


        retranslateUi(PayrollGenTool);

        QMetaObject::connectSlotsByName(PayrollGenTool);
    } // setupUi

    void retranslateUi(QDialog *PayrollGenTool)
    {
        PayrollGenTool->setWindowTitle(QApplication::translate("PayrollGenTool", "Dialog", 0));
        pushButton_3->setText(QApplication::translate("PayrollGenTool", "Close", 0));
        title->setText(QApplication::translate("PayrollGenTool", "Payroll Generation Tool", 0));
        GEP_Button->setText(QApplication::translate("PayrollGenTool", "Generate Employee Paystubs", 0));
        VPS_Button->setText(QApplication::translate("PayrollGenTool", "View Payroll Summary", 0));
    } // retranslateUi

};

namespace Ui {
    class PayrollGenTool: public Ui_PayrollGenTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYROLLGENTOOL_H
