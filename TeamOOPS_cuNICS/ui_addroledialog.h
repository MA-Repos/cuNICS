/********************************************************************************
** Form generated from reading UI file 'addroledialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDROLEDIALOG_H
#define UI_ADDROLEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addRoleDialog
{
public:
    QFrame *frame;
    QLabel *title;
    QComboBox *comboBox_role;
    QComboBox *comboBox_status;
    QComboBox *comboBox_type;
    QCheckBox *checkBox;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *salaryTotal;
    QLineEdit *deduct;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDateEdit *startDate;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QDateEdit *endDate;

    void setupUi(QDialog *addRoleDialog)
    {
        if (addRoleDialog->objectName().isEmpty())
            addRoleDialog->setObjectName(QString::fromUtf8("addRoleDialog"));
        addRoleDialog->resize(479, 266);
        addRoleDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);"));
        frame = new QFrame(addRoleDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 481, 80));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 72, 66);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        title = new QLabel(frame);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(150, 10, 161, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Gothic L"));
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        comboBox_role = new QComboBox(addRoleDialog);
        comboBox_role->setObjectName(QString::fromUtf8("comboBox_role"));
        comboBox_role->setGeometry(QRect(20, 100, 85, 27));
        comboBox_status = new QComboBox(addRoleDialog);
        comboBox_status->setObjectName(QString::fromUtf8("comboBox_status"));
        comboBox_status->setGeometry(QRect(20, 160, 91, 27));
        comboBox_type = new QComboBox(addRoleDialog);
        comboBox_type->setObjectName(QString::fromUtf8("comboBox_type"));
        comboBox_type->setGeometry(QRect(20, 220, 85, 27));
        checkBox = new QCheckBox(addRoleDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(130, 190, 121, 22));
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(addRoleDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 170, 81, 17));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(addRoleDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 170, 81, 17));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        salaryTotal = new QLineEdit(addRoleDialog);
        salaryTotal->setObjectName(QString::fromUtf8("salaryTotal"));
        salaryTotal->setGeometry(QRect(280, 190, 81, 27));
        salaryTotal->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        deduct = new QLineEdit(addRoleDialog);
        deduct->setObjectName(QString::fromUtf8("deduct"));
        deduct->setGeometry(QRect(380, 190, 81, 27));
        pushButton = new QPushButton(addRoleDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 230, 99, 27));
        layoutWidget = new QWidget(addRoleDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 100, 220, 52));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);

        startDate = new QDateEdit(layoutWidget);
        startDate->setObjectName(QString::fromUtf8("startDate"));
        startDate->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(startDate);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_2);

        endDate = new QDateEdit(layoutWidget);
        endDate->setObjectName(QString::fromUtf8("endDate"));
        endDate->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(endDate);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(addRoleDialog);

        QMetaObject::connectSlotsByName(addRoleDialog);
    } // setupUi

    void retranslateUi(QDialog *addRoleDialog)
    {
        addRoleDialog->setWindowTitle(QApplication::translate("addRoleDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        title->setText(QApplication::translate("addRoleDialog", "Add Role", 0, QApplication::UnicodeUTF8));
        comboBox_role->clear();
        comboBox_role->insertItems(0, QStringList()
         << QApplication::translate("addRoleDialog", "TA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addRoleDialog", "RA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addRoleDialog", "Faculty", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addRoleDialog", "Staff", 0, QApplication::UnicodeUTF8)
        );
        comboBox_status->clear();
        comboBox_status->insertItems(0, QStringList()
         << QApplication::translate("addRoleDialog", "Part-Time", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addRoleDialog", "Full-Time", 0, QApplication::UnicodeUTF8)
        );
        comboBox_type->clear();
        comboBox_type->insertItems(0, QStringList()
         << QApplication::translate("addRoleDialog", "Term", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addRoleDialog", "Continuing", 0, QApplication::UnicodeUTF8)
        );
        checkBox->setText(QApplication::translate("addRoleDialog", "Is Employed", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addRoleDialog", "SalaryTotal", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("addRoleDialog", "Deduction%", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("addRoleDialog", "Submit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addRoleDialog", "Start Date", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("addRoleDialog", "End Date", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addRoleDialog: public Ui_addRoleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDROLEDIALOG_H
