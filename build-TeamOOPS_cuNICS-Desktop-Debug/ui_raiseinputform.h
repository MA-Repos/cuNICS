/********************************************************************************
** Form generated from reading UI file 'raiseinputform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAISEINPUTFORM_H
#define UI_RAISEINPUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RaiseInputForm
{
public:
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QWidget *RaiseInputForm)
    {
        if (RaiseInputForm->objectName().isEmpty())
            RaiseInputForm->setObjectName(QStringLiteral("RaiseInputForm"));
        RaiseInputForm->resize(240, 80);
        label = new QLabel(RaiseInputForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 141, 17));
        doubleSpinBox = new QDoubleSpinBox(RaiseInputForm);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(90, 40, 69, 27));

        retranslateUi(RaiseInputForm);

        QMetaObject::connectSlotsByName(RaiseInputForm);
    } // setupUi

    void retranslateUi(QWidget *RaiseInputForm)
    {
        RaiseInputForm->setWindowTitle(QApplication::translate("RaiseInputForm", "Form", 0));
        label->setText(QApplication::translate("RaiseInputForm", "Enter Raise amount", 0));
    } // retranslateUi

};

namespace Ui {
    class RaiseInputForm: public Ui_RaiseInputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAISEINPUTFORM_H
