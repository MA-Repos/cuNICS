/********************************************************************************
** Form generated from reading UI file 'applyraisedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYRAISEDIALOG_H
#define UI_APPLYRAISEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_applyRaiseDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;

    void setupUi(QDialog *applyRaiseDialog)
    {
        if (applyRaiseDialog->objectName().isEmpty())
            applyRaiseDialog->setObjectName(QString::fromUtf8("applyRaiseDialog"));
        applyRaiseDialog->resize(351, 168);
        widget = new QWidget(applyRaiseDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 99, 80));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);


        retranslateUi(applyRaiseDialog);

        QMetaObject::connectSlotsByName(applyRaiseDialog);
    } // setupUi

    void retranslateUi(QDialog *applyRaiseDialog)
    {
        applyRaiseDialog->setWindowTitle(QApplication::translate("applyRaiseDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("applyRaiseDialog", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("applyRaiseDialog", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("applyRaiseDialog", "CheckBox", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class applyRaiseDialog: public Ui_applyRaiseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYRAISEDIALOG_H
