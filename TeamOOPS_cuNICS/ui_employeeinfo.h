/********************************************************************************
** Form generated from reading UI file 'employeeinfo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEINFO_H
#define UI_EMPLOYEEINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_employeeInfo
{
public:
    QFrame *frame;
    QLabel *title;
    QFrame *frame_3;
    QFrame *profile_bg;
    QLabel *label_profilePic;
    QFrame *role_bg;
    QTableWidget *rolesTable;
    QLabel *title_3;
    QPushButton *addButton;
    QFrame *profile_bg_2;
    QLabel *title_2;
    QLabel *label_3;
    QLabel *title_4;
    QLabel *label_12;
    QWidget *layoutWidget_4;
    QHBoxLayout *City_2;
    QLabel *label_13;
    QLineEdit *label_country;
    QWidget *layoutWidget_5;
    QHBoxLayout *City_3;
    QLabel *label_14;
    QLineEdit *label_postalCode;
    QWidget *layoutWidget_6;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_17;
    QLineEdit *label_bankName;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_18;
    QLineEdit *label_bankNum;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_19;
    QLineEdit *label_branchNum;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_20;
    QLineEdit *label_accountNum;
    QLabel *title_5;
    QLabel *title_6;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QWidget *layoutWidget;
    QHBoxLayout *PhoneLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *label_countryCode;
    QLabel *label_6;
    QLineEdit *label_localCode;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *label_localNum;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *label_extension;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_15;
    QLabel *label_eID;
    QLabel *label;
    QLineEdit *label_Fname;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *label_Lname;
    QWidget *layoutWidget2;
    QHBoxLayout *StreetNum;
    QLabel *label_8;
    QLineEdit *label_streetNum;
    QWidget *layoutWidget3;
    QHBoxLayout *City;
    QLabel *label_10;
    QLineEdit *label_city;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *label_street;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLineEdit *label_province;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_22;
    QLineEdit *label_sin;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_21;
    QLineEdit *label_deductionPerc;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_23;
    QLabel *label_salary;

    void setupUi(QDialog *employeeInfo)
    {
        if (employeeInfo->objectName().isEmpty())
            employeeInfo->setObjectName(QString::fromUtf8("employeeInfo"));
        employeeInfo->resize(822, 555);
        employeeInfo->setStyleSheet(QString::fromUtf8("#employeeInfo{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        frame = new QFrame(employeeInfo);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, -1, 821, 81));
        frame->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 72, 66);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        title = new QLabel(frame);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(140, 10, 381, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Gothic L"));
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_3 = new QFrame(employeeInfo);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 80, 821, 471));
        frame_3->setStyleSheet(QString::fromUtf8("\n"
"#frame_3{\n"
"background-color: rgb(39,39,39);\n"
"\n"
"border: 4px solid;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        profile_bg = new QFrame(frame_3);
        profile_bg->setObjectName(QString::fromUtf8("profile_bg"));
        profile_bg->setGeometry(QRect(200, 0, 20, 221));
        profile_bg->setStyleSheet(QString::fromUtf8("\n"
"#profile_bg{\n"
"background-color: rgb(255, 72, 66);\n"
"border:none;\n"
"}"));
        profile_bg->setFrameShape(QFrame::StyledPanel);
        profile_bg->setFrameShadow(QFrame::Raised);
        profile_bg->setLineWidth(7);
        label_profilePic = new QLabel(frame_3);
        label_profilePic->setObjectName(QString::fromUtf8("label_profilePic"));
        label_profilePic->setGeometry(QRect(10, 10, 201, 211));
        label_profilePic->setStyleSheet(QString::fromUtf8("#label_profilePic{\n"
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
        role_bg->setObjectName(QString::fromUtf8("role_bg"));
        role_bg->setGeometry(QRect(10, 280, 321, 171));
        role_bg->setStyleSheet(QString::fromUtf8("#role_bg{\n"
"background-color: rgb(85, 85, 85);\n"
"border:none;\n"
"}"));
        role_bg->setFrameShape(QFrame::StyledPanel);
        role_bg->setFrameShadow(QFrame::Raised);
        rolesTable = new QTableWidget(role_bg);
        if (rolesTable->columnCount() < 3)
            rolesTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        rolesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        rolesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        rolesTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        rolesTable->setObjectName(QString::fromUtf8("rolesTable"));
        rolesTable->setGeometry(QRect(10, 10, 301, 141));
        title_3 = new QLabel(frame_3);
        title_3->setObjectName(QString::fromUtf8("title_3"));
        title_3->setGeometry(QRect(20, 250, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("STIXVariants"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(false);
        title_3->setFont(font1);
        title_3->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);"));
        addButton = new QPushButton(frame_3);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(190, 260, 81, 21));
        addButton->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pics/add.png"), QSize(), QIcon::Normal, QIcon::On);
        addButton->setIcon(icon);
        addButton->setCheckable(false);
        addButton->setAutoRepeat(false);
        addButton->setAutoDefault(false);
        addButton->setDefault(false);
        addButton->setFlat(true);
        profile_bg_2 = new QFrame(frame_3);
        profile_bg_2->setObjectName(QString::fromUtf8("profile_bg_2"));
        profile_bg_2->setGeometry(QRect(10, 220, 211, 20));
        profile_bg_2->setStyleSheet(QString::fromUtf8("\n"
"#profile_bg_2{\n"
"background-color: rgb(255, 72, 66);\n"
"border:none;\n"
"}"));
        profile_bg_2->setFrameShape(QFrame::StyledPanel);
        profile_bg_2->setFrameShadow(QFrame::Raised);
        profile_bg_2->setLineWidth(7);
        title_2 = new QLabel(frame_3);
        title_2->setObjectName(QString::fromUtf8("title_2"));
        title_2->setGeometry(QRect(230, 10, 581, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("STIXVariants"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(false);
        title_2->setFont(font2);
        title_2->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background-color: rgb(0, 0, 0);\n"
"text-align: center;"));
        title_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(470, 50, 79, 17));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Century Schoolbook L\";\n"
"color: rgb(255, 255, 255);"));
        title_4 = new QLabel(frame_3);
        title_4->setObjectName(QString::fromUtf8("title_4"));
        title_4->setGeometry(QRect(230, 220, 571, 31));
        title_4->setFont(font2);
        title_4->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background-color: rgb(0, 0, 0);\n"
"text-align: center;"));
        title_4->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(470, 110, 79, 17));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Century Schoolbook L\";\n"
"color: rgb(255, 255, 255);"));
        layoutWidget_4 = new QWidget(frame_3);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(620, 130, 141, 29));
        City_2 = new QHBoxLayout(layoutWidget_4);
        City_2->setObjectName(QString::fromUtf8("City_2"));
        City_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        City_2->addWidget(label_13);

        label_country = new QLineEdit(layoutWidget_4);
        label_country->setObjectName(QString::fromUtf8("label_country"));

        City_2->addWidget(label_country);

        layoutWidget_5 = new QWidget(frame_3);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(620, 160, 141, 31));
        City_3 = new QHBoxLayout(layoutWidget_5);
        City_3->setObjectName(QString::fromUtf8("City_3"));
        City_3->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        City_3->addWidget(label_14);

        label_postalCode = new QLineEdit(layoutWidget_5);
        label_postalCode->setObjectName(QString::fromUtf8("label_postalCode"));

        City_3->addWidget(label_postalCode);

        layoutWidget_6 = new QWidget(frame_3);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(350, 260, 411, 72));
        formLayout = new QFormLayout(layoutWidget_6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_17 = new QLabel(layoutWidget_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_17);

        label_bankName = new QLineEdit(layoutWidget_6);
        label_bankName->setObjectName(QString::fromUtf8("label_bankName"));

        horizontalLayout_4->addWidget(label_bankName);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_18 = new QLabel(layoutWidget_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(label_18);

        label_bankNum = new QLineEdit(layoutWidget_6);
        label_bankNum->setObjectName(QString::fromUtf8("label_bankNum"));

        horizontalLayout_7->addWidget(label_bankNum);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_19 = new QLabel(layoutWidget_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(label_19);

        label_branchNum = new QLineEdit(layoutWidget_6);
        label_branchNum->setObjectName(QString::fromUtf8("label_branchNum"));

        horizontalLayout_9->addWidget(label_branchNum);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_20 = new QLabel(layoutWidget_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(label_20);

        label_accountNum = new QLineEdit(layoutWidget_6);
        label_accountNum->setObjectName(QString::fromUtf8("label_accountNum"));

        horizontalLayout_10->addWidget(label_accountNum);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_10);

        title_5 = new QLabel(frame_3);
        title_5->setObjectName(QString::fromUtf8("title_5"));
        title_5->setGeometry(QRect(330, 360, 251, 31));
        title_5->setFont(font2);
        title_5->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background-color: rgb(0, 0, 0);\n"
"text-align: center;"));
        title_5->setAlignment(Qt::AlignCenter);
        title_6 = new QLabel(frame_3);
        title_6->setObjectName(QString::fromUtf8("title_6"));
        title_6->setGeometry(QRect(550, 360, 31, 101));
        title_6->setFont(font2);
        title_6->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background-color: rgb(0, 0, 0);\n"
"text-align: center;"));
        title_6->setAlignment(Qt::AlignCenter);
        updateButton = new QPushButton(frame_3);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(710, 420, 99, 27));
        deleteButton = new QPushButton(frame_3);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(110, 260, 81, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Tlwg Mono"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        deleteButton->setFont(font3);
        deleteButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pics/delete.png"), QSize(), QIcon::Normal, QIcon::On);
        deleteButton->setIcon(icon1);
        deleteButton->setCheckable(false);
        deleteButton->setAutoDefault(false);
        deleteButton->setFlat(true);
        layoutWidget = new QWidget(frame_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(340, 70, 471, 33));
        PhoneLayout = new QHBoxLayout(layoutWidget);
        PhoneLayout->setObjectName(QString::fromUtf8("PhoneLayout"));
        PhoneLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_4);

        label_countryCode = new QLineEdit(layoutWidget);
        label_countryCode->setObjectName(QString::fromUtf8("label_countryCode"));

        horizontalLayout->addWidget(label_countryCode);


        horizontalLayout_3->addLayout(horizontalLayout);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_6);

        label_localCode = new QLineEdit(layoutWidget);
        label_localCode->setObjectName(QString::fromUtf8("label_localCode"));

        horizontalLayout_3->addWidget(label_localCode);


        PhoneLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_5);

        label_localNum = new QLineEdit(layoutWidget);
        label_localNum->setObjectName(QString::fromUtf8("label_localNum"));

        horizontalLayout_2->addWidget(label_localNum);


        PhoneLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_7);

        label_extension = new QLineEdit(layoutWidget);
        label_extension->setObjectName(QString::fromUtf8("label_extension"));

        horizontalLayout_5->addWidget(label_extension);


        PhoneLayout->addLayout(horizontalLayout_5);

        layoutWidget1 = new QWidget(frame_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(230, 40, 91, 160));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_15);

        label_eID = new QLabel(layoutWidget1);
        label_eID->setObjectName(QString::fromUtf8("label_eID"));
        label_eID->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_eID);


        verticalLayout_2->addLayout(verticalLayout_4);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label);

        label_Fname = new QLineEdit(layoutWidget1);
        label_Fname->setObjectName(QString::fromUtf8("label_Fname"));

        verticalLayout_2->addWidget(label_Fname);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_2);

        label_Lname = new QLineEdit(layoutWidget1);
        label_Lname->setObjectName(QString::fromUtf8("label_Lname"));

        verticalLayout->addWidget(label_Lname);


        verticalLayout_3->addLayout(verticalLayout);

        layoutWidget2 = new QWidget(frame_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(340, 130, 121, 29));
        StreetNum = new QHBoxLayout(layoutWidget2);
        StreetNum->setObjectName(QString::fromUtf8("StreetNum"));
        StreetNum->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        StreetNum->addWidget(label_8);

        label_streetNum = new QLineEdit(layoutWidget2);
        label_streetNum->setObjectName(QString::fromUtf8("label_streetNum"));

        StreetNum->addWidget(label_streetNum);

        layoutWidget3 = new QWidget(frame_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(471, 130, 131, 29));
        City = new QHBoxLayout(layoutWidget3);
        City->setObjectName(QString::fromUtf8("City"));
        City->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        City->addWidget(label_10);

        label_city = new QLineEdit(layoutWidget3);
        label_city->setObjectName(QString::fromUtf8("label_city"));

        City->addWidget(label_city);

        layoutWidget4 = new QWidget(frame_3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(340, 160, 261, 31));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(label_9);

        label_street = new QLineEdit(layoutWidget4);
        label_street->setObjectName(QString::fromUtf8("label_street"));

        horizontalLayout_6->addWidget(label_street);

        layoutWidget5 = new QWidget(frame_3);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(620, 190, 141, 31));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(label_11);

        label_province = new QLineEdit(layoutWidget5);
        label_province->setObjectName(QString::fromUtf8("label_province"));

        horizontalLayout_8->addWidget(label_province);

        layoutWidget6 = new QWidget(frame_3);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(630, 360, 177, 29));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget6);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(label_22);

        label_sin = new QLineEdit(layoutWidget6);
        label_sin->setObjectName(QString::fromUtf8("label_sin"));

        horizontalLayout_11->addWidget(label_sin);

        layoutWidget7 = new QWidget(frame_3);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(330, 400, 201, 29));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget7);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_12->addWidget(label_21);

        label_deductionPerc = new QLineEdit(layoutWidget7);
        label_deductionPerc->setObjectName(QString::fromUtf8("label_deductionPerc"));

        horizontalLayout_12->addWidget(label_deductionPerc);

        layoutWidget_2 = new QWidget(frame_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(330, 430, 201, 29));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_13->addWidget(label_23);

        label_salary = new QLabel(layoutWidget_2);
        label_salary->setObjectName(QString::fromUtf8("label_salary"));
        label_salary->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_13->addWidget(label_salary);

        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        title_6->raise();
        role_bg->raise();
        profile_bg->raise();
        label_profilePic->raise();
        title_3->raise();
        addButton->raise();
        profile_bg_2->raise();
        title_2->raise();
        label_3->raise();
        layoutWidget->raise();
        title_4->raise();
        label_12->raise();
        layoutWidget_4->raise();
        layoutWidget_5->raise();
        layoutWidget_6->raise();
        title_5->raise();
        updateButton->raise();
        deleteButton->raise();
        layoutWidget_2->raise();
        frame_3->raise();
        frame->raise();

        retranslateUi(employeeInfo);

        QMetaObject::connectSlotsByName(employeeInfo);
    } // setupUi

    void retranslateUi(QDialog *employeeInfo)
    {
        employeeInfo->setWindowTitle(QApplication::translate("employeeInfo", "Dialog", 0, QApplication::UnicodeUTF8));
        title->setText(QApplication::translate("employeeInfo", "Employee Information", 0, QApplication::UnicodeUTF8));
        label_profilePic->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = rolesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("employeeInfo", "Role", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = rolesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("employeeInfo", "EmpStatus", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = rolesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("employeeInfo", "EmpType", 0, QApplication::UnicodeUTF8));
        title_3->setText(QApplication::translate("employeeInfo", "Roles:", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("employeeInfo", "AddRole", 0, QApplication::UnicodeUTF8));
        title_2->setText(QApplication::translate("employeeInfo", "Profile", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("employeeInfo", "Phone#", 0, QApplication::UnicodeUTF8));
        title_4->setText(QApplication::translate("employeeInfo", "Bank Information", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("employeeInfo", "Address", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("employeeInfo", "Country", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("employeeInfo", "Postal", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("employeeInfo", "BankName", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("employeeInfo", "BankNumber", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("employeeInfo", "BranchNumber", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("employeeInfo", "AccountNumber", 0, QApplication::UnicodeUTF8));
        title_5->setText(QApplication::translate("employeeInfo", "Salary Information", 0, QApplication::UnicodeUTF8));
        title_6->setText(QString());
        updateButton->setText(QApplication::translate("employeeInfo", "UPDATE", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("employeeInfo", "Delete", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("employeeInfo", "Country", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("employeeInfo", "Local", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("employeeInfo", "Area", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("employeeInfo", "Ext", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("employeeInfo", "EmployeeID", 0, QApplication::UnicodeUTF8));
        label_eID->setText(QApplication::translate("employeeInfo", "#", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("employeeInfo", "FirstName", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("employeeInfo", "LastName", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("employeeInfo", "Street#", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("employeeInfo", "City", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("employeeInfo", "Street   ", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("employeeInfo", "Province ", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("employeeInfo", "SIN", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("employeeInfo", "Salary Deduction %", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("employeeInfo", "Total Salary", 0, QApplication::UnicodeUTF8));
        label_salary->setText(QApplication::translate("employeeInfo", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class employeeInfo: public Ui_employeeInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEINFO_H
