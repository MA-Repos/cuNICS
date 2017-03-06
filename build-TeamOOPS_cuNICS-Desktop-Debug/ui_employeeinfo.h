/********************************************************************************
** Form generated from reading UI file 'employeeinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEINFO_H
#define UI_EMPLOYEEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_employeeInfo
{
public:
    QFrame *frame;
    QLabel *title;
    QFrame *frame_3;
    QFrame *profile_bg;
    QLabel *title_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_employeeNum;
    QLabel *label_Bankacc;
    QLabel *label_fullname;
    QLabel *label_address;
    QLabel *label_sin;
    QLabel *label_profilePic;
    QFrame *role_bg;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QLabel *title_3;
    QPushButton *pushButton;

    void setupUi(QDialog *employeeInfo)
    {
        if (employeeInfo->objectName().isEmpty())
            employeeInfo->setObjectName(QStringLiteral("employeeInfo"));
        employeeInfo->resize(602, 572);
        employeeInfo->setStyleSheet(QLatin1String("#employeeInfo{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        frame = new QFrame(employeeInfo);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 601, 80));
        frame->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"\n"
"background-color: rgb(254, 108, 111);\n"
"\n"
"border-bottom-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        title = new QLabel(frame);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(60, 10, 381, 51));
        QFont font;
        font.setFamily(QStringLiteral("URW Gothic L"));
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        title->setFont(font);
        title->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame_3 = new QFrame(employeeInfo);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 80, 601, 491));
        frame_3->setStyleSheet(QLatin1String("\n"
"#frame_3{\n"
"background-color: rgb(157, 157, 157);\n"
"border-color: rgb(0, 0, 0);\n"
"border: 4px solid;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        profile_bg = new QFrame(frame_3);
        profile_bg->setObjectName(QStringLiteral("profile_bg"));
        profile_bg->setGeometry(QRect(200, 10, 391, 211));
        profile_bg->setStyleSheet(QLatin1String("\n"
"#profile_bg{\n"
"background-color: rgb(85, 85, 85);\n"
"border:none;\n"
"}"));
        profile_bg->setFrameShape(QFrame::StyledPanel);
        profile_bg->setFrameShadow(QFrame::Raised);
        profile_bg->setLineWidth(7);
        title_2 = new QLabel(profile_bg);
        title_2->setObjectName(QStringLiteral("title_2"));
        title_2->setGeometry(QRect(120, 0, 151, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("STIXVariants"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(false);
        title_2->setFont(font1);
        title_2->setStyleSheet(QStringLiteral("color: rgb(255,255,255);"));
        pushButton_3 = new QPushButton(profile_bg);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 10, 51, 27));
        layoutWidget = new QWidget(profile_bg);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 241, 119));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_employeeNum = new QLabel(layoutWidget);
        label_employeeNum->setObjectName(QStringLiteral("label_employeeNum"));
        label_employeeNum->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border: solid 2px;"));
        label_employeeNum->setFrameShape(QFrame::Panel);
        label_employeeNum->setLineWidth(0);
        label_employeeNum->setMidLineWidth(0);

        verticalLayout->addWidget(label_employeeNum);

        label_Bankacc = new QLabel(layoutWidget);
        label_Bankacc->setObjectName(QStringLiteral("label_Bankacc"));
        label_Bankacc->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 255, 255);"));
        label_Bankacc->setFrameShape(QFrame::Panel);
        label_Bankacc->setLineWidth(0);
        label_Bankacc->setMidLineWidth(0);

        verticalLayout->addWidget(label_Bankacc);

        label_fullname = new QLabel(layoutWidget);
        label_fullname->setObjectName(QStringLiteral("label_fullname"));
        label_fullname->setStyleSheet(QStringLiteral("color: rgb(255,255,255);"));
        label_fullname->setFrameShape(QFrame::Panel);
        label_fullname->setLineWidth(0);
        label_fullname->setMidLineWidth(0);

        verticalLayout->addWidget(label_fullname);

        label_address = new QLabel(layoutWidget);
        label_address->setObjectName(QStringLiteral("label_address"));
        label_address->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_address->setFrameShape(QFrame::Panel);
        label_address->setLineWidth(0);
        label_address->setMidLineWidth(0);

        verticalLayout->addWidget(label_address);

        label_sin = new QLabel(layoutWidget);
        label_sin->setObjectName(QStringLiteral("label_sin"));
        label_sin->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_sin->setFrameShape(QFrame::Panel);
        label_sin->setFrameShadow(QFrame::Plain);
        label_sin->setLineWidth(0);
        label_sin->setMidLineWidth(0);

        verticalLayout->addWidget(label_sin);

        label_profilePic = new QLabel(frame_3);
        label_profilePic->setObjectName(QStringLiteral("label_profilePic"));
        label_profilePic->setGeometry(QRect(0, 10, 201, 211));
        label_profilePic->setStyleSheet(QLatin1String("#label_profilePic{\n"
"border: solid 10px;\n"
"border-color: rgb(0, 0, 0);\n"
"\n"
"}"));
        label_profilePic->setFrameShape(QFrame::Box);
        label_profilePic->setFrameShadow(QFrame::Plain);
        label_profilePic->setLineWidth(7);
        label_profilePic->setPixmap(QPixmap(QString::fromUtf8(":/pics/male.png")));
        label_profilePic->setScaledContents(true);
        role_bg = new QFrame(frame_3);
        role_bg->setObjectName(QStringLiteral("role_bg"));
        role_bg->setGeometry(QRect(10, 250, 561, 221));
        role_bg->setStyleSheet(QLatin1String("#role_bg{\n"
"background-color: rgb(85, 85, 85);\n"
"border:none;\n"
"}"));
        role_bg->setFrameShape(QFrame::StyledPanel);
        role_bg->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(role_bg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 20, 121, 27));
        QFont font2;
        font2.setFamily(QStringLiteral("Tlwg Mono"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pics/delete.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_2->setIcon(icon);
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(true);
        listWidget = new QListWidget(role_bg);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 256, 192));
        title_3 = new QLabel(frame_3);
        title_3->setObjectName(QStringLiteral("title_3"));
        title_3->setGeometry(QRect(30, 230, 71, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("STIXVariants"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        font3.setKerning(false);
        title_3->setFont(font3);
        title_3->setStyleSheet(QStringLiteral("color: rgb(255,255,255);"));
        pushButton = new QPushButton(frame_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 220, 91, 31));
        pushButton->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pics/add.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon1);
        pushButton->setCheckable(false);
        pushButton->setAutoRepeat(false);
        pushButton->setAutoDefault(false);
        pushButton->setDefault(false);
        pushButton->setFlat(true);
        role_bg->raise();
        profile_bg->raise();
        label_profilePic->raise();
        title_3->raise();
        pushButton->raise();
        frame_3->raise();
        frame->raise();

        retranslateUi(employeeInfo);

        QMetaObject::connectSlotsByName(employeeInfo);
    } // setupUi

    void retranslateUi(QDialog *employeeInfo)
    {
        employeeInfo->setWindowTitle(QApplication::translate("employeeInfo", "Dialog", 0));
        title->setText(QApplication::translate("employeeInfo", "Employee Information", 0));
        title_2->setText(QApplication::translate("employeeInfo", "Profile", 0));
        pushButton_3->setText(QApplication::translate("employeeInfo", "Edit", 0));
        label_employeeNum->setText(QApplication::translate("employeeInfo", "EmployeeID#:", 0));
        label_Bankacc->setText(QApplication::translate("employeeInfo", "Bank Account", 0));
        label_fullname->setText(QApplication::translate("employeeInfo", "Full Name:", 0));
        label_address->setText(QApplication::translate("employeeInfo", "Address", 0));
        label_sin->setText(QApplication::translate("employeeInfo", "SIN", 0));
        label_profilePic->setText(QString());
        pushButton_2->setText(QApplication::translate("employeeInfo", "DeleteRole", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("employeeInfo", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("employeeInfo", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("employeeInfo", "New Item", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        title_3->setText(QApplication::translate("employeeInfo", "Roles:", 0));
        pushButton->setText(QApplication::translate("employeeInfo", "AddRole", 0));
    } // retranslateUi

};

namespace Ui {
    class employeeInfo: public Ui_employeeInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEINFO_H
