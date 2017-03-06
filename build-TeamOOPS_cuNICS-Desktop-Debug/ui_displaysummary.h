/********************************************************************************
** Form generated from reading UI file 'displaysummary.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSUMMARY_H
#define UI_DISPLAYSUMMARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplaySummary
{
public:

    void setupUi(QWidget *DisplaySummary)
    {
        if (DisplaySummary->objectName().isEmpty())
            DisplaySummary->setObjectName(QStringLiteral("DisplaySummary"));
        DisplaySummary->resize(320, 240);

        retranslateUi(DisplaySummary);

        QMetaObject::connectSlotsByName(DisplaySummary);
    } // setupUi

    void retranslateUi(QWidget *DisplaySummary)
    {
        DisplaySummary->setWindowTitle(QApplication::translate("DisplaySummary", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class DisplaySummary: public Ui_DisplaySummary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSUMMARY_H
