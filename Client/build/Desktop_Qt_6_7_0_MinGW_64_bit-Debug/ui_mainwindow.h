/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Logintab;
    QLabel *userla;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *userle;
    QLineEdit *passle;
    QPushButton *loginpb;
    QLabel *passla;
    QWidget *AdminTab;
    QPushButton *LogoutPb;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLineEdit *BalanceLe;
    QPushButton *CreatePb_2;
    QLineEdit *fullNameLe;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QLabel *label_7;
    QLineEdit *ageLe;
    QLineEdit *userNameLe;
    QLineEdit *accountNmLe;
    QGroupBox *viewdb;
    QPushButton *viewdbPb;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget_3;
    QGroupBox *groupBox_2;
    QLineEdit *DeleteLe;
    QLabel *label_6;
    QPushButton *Deletepb;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_3;
    QLineEdit *updateBalanceLe;
    QPushButton *updatePb;
    QLineEdit *updateaccnumLe;
    QLabel *label_4;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButton_7;
    QLabel *label_15;
    QLineEdit *updateageLe;
    QLineEdit *updateUserNameLe;
    QLineEdit *updatefullnameLe;
    QLabel *label_14;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_6;
    QPushButton *viewaccPb;
    QLineEdit *viewaccLe;
    QLabel *label_10;
    QListWidget *viewaccLw;
    QLabel *label_11;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_13;
    QLabel *label_24;
    QPushButton *viewaccBAdPb;
    QLineEdit *viewaccBLe;
    QLabel *label_16;
    QListWidget *accBLw;
    QGroupBox *groupBox_12;
    QLabel *label_25;
    QPushButton *pushButton_14;
    QPushButton *viewTransPb_2;
    QLabel *label_27;
    QLineEdit *NumTransLe_2;
    QLineEdit *accNumTransLe_2;
    QTableWidget *tableWidget_2;
    QWidget *UserTab;
    QGroupBox *groupBox_7;
    QPushButton *pushButton_8;
    QPushButton *viewaccNUsPb;
    QListWidget *viewaccNUsLw;
    QLabel *label_17;
    QPushButton *LogoutPb_2;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_10;
    QListWidget *viewaccBUsLw;
    QLabel *label_19;
    QPushButton *viewaccBUsPb;
    QGroupBox *groupBox_9;
    QLabel *label_20;
    QPushButton *pushButton_11;
    QPushButton *viewTransPb;
    QLabel *label_26;
    QLineEdit *NumTransLe;
    QLineEdit *accNumTransLe;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_10;
    QPushButton *MakeTransPb_2;
    QPushButton *pushButton_12;
    QLabel *label_21;
    QLineEdit *MakeTransLe_2;
    QLabel *label_22;
    QLineEdit *MakeTransLe_3;
    QLineEdit *MakeTransLe_4;
    QLabel *label_23;
    QGroupBox *groupBox_11;
    QLineEdit *MakeTransLe;
    QPushButton *pushButton_9;
    QPushButton *MakeTransPb;
    QLabel *label_18;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1365, 903);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 0, 1341, 841));
        Logintab = new QWidget();
        Logintab->setObjectName("Logintab");
        userla = new QLabel(Logintab);
        userla->setObjectName("userla");
        userla->setGeometry(QRect(440, 260, 271, 41));
        userla->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(Logintab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(440, 190, 481, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(Logintab);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 50, 551, 141));
        label->setStyleSheet(QString::fromUtf8("font: 22pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        userle = new QLineEdit(Logintab);
        userle->setObjectName("userle");
        userle->setGeometry(QRect(440, 310, 281, 51));
        userle->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        passle = new QLineEdit(Logintab);
        passle->setObjectName("passle");
        passle->setGeometry(QRect(440, 420, 281, 51));
        passle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        loginpb = new QPushButton(Logintab);
        loginpb->setObjectName("loginpb");
        loginpb->setGeometry(QRect(440, 600, 301, 81));
        loginpb->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"color: rgb(255, 255, 255);"));
        passla = new QLabel(Logintab);
        passla->setObjectName("passla");
        passla->setGeometry(QRect(440, 380, 371, 20));
        passla->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(Logintab, QString());
        AdminTab = new QWidget();
        AdminTab->setObjectName("AdminTab");
        LogoutPb = new QPushButton(AdminTab);
        LogoutPb->setObjectName("LogoutPb");
        LogoutPb->setGeometry(QRect(400, 700, 521, 71));
        LogoutPb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);"));
        groupBox = new QGroupBox(AdminTab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 0, 351, 301));
        groupBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 80, 161, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        BalanceLe = new QLineEdit(groupBox);
        BalanceLe->setObjectName("BalanceLe");
        BalanceLe->setGeometry(QRect(190, 200, 151, 28));
        BalanceLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        CreatePb_2 = new QPushButton(groupBox);
        CreatePb_2->setObjectName("CreatePb_2");
        CreatePb_2->setGeometry(QRect(30, 250, 121, 41));
        CreatePb_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        fullNameLe = new QLineEdit(groupBox);
        fullNameLe->setObjectName("fullNameLe");
        fullNameLe->setGeometry(QRect(190, 40, 151, 28));
        fullNameLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 160, 161, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 200, 161, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(190, 250, 131, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 40, 161, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 120, 161, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        ageLe = new QLineEdit(groupBox);
        ageLe->setObjectName("ageLe");
        ageLe->setGeometry(QRect(190, 80, 151, 28));
        ageLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        userNameLe = new QLineEdit(groupBox);
        userNameLe->setObjectName("userNameLe");
        userNameLe->setGeometry(QRect(190, 160, 151, 28));
        userNameLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        accountNmLe = new QLineEdit(groupBox);
        accountNmLe->setObjectName("accountNmLe");
        accountNmLe->setGeometry(QRect(190, 120, 151, 28));
        accountNmLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        viewdb = new QGroupBox(AdminTab);
        viewdb->setObjectName("viewdb");
        viewdb->setGeometry(QRect(370, 340, 401, 351));
        viewdb->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 0, 255);"));
        viewdbPb = new QPushButton(viewdb);
        viewdbPb->setObjectName("viewdbPb");
        viewdbPb->setGeometry(QRect(70, 300, 101, 41));
        viewdbPb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(viewdb);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(210, 300, 111, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tableWidget_3 = new QTableWidget(viewdb);
        tableWidget_3->setObjectName("tableWidget_3");
        tableWidget_3->setGeometry(QRect(0, 30, 401, 192));
        tableWidget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        tableWidget_3->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_3->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        groupBox_2 = new QGroupBox(AdminTab);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 340, 301, 351));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 0, 255);"));
        DeleteLe = new QLineEdit(groupBox_2);
        DeleteLe->setObjectName("DeleteLe");
        DeleteLe->setGeometry(QRect(30, 150, 231, 31));
        DeleteLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 100, 241, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        Deletepb = new QPushButton(groupBox_2);
        Deletepb->setObjectName("Deletepb");
        Deletepb->setGeometry(QRect(30, 300, 101, 41));
        Deletepb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(150, 300, 111, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        groupBox_3 = new QGroupBox(AdminTab);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(990, 0, 341, 301));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        updateBalanceLe = new QLineEdit(groupBox_3);
        updateBalanceLe->setObjectName("updateBalanceLe");
        updateBalanceLe->setGeometry(QRect(180, 200, 151, 28));
        updateBalanceLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        updatePb = new QPushButton(groupBox_3);
        updatePb->setObjectName("updatePb");
        updatePb->setGeometry(QRect(10, 250, 121, 41));
        updatePb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        updateaccnumLe = new QLineEdit(groupBox_3);
        updateaccnumLe->setObjectName("updateaccnumLe");
        updateaccnumLe->setGeometry(QRect(180, 40, 151, 28));
        updateaccnumLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 80, 161, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 160, 161, 31));
        label_12->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 200, 161, 31));
        label_13->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(groupBox_3);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(180, 250, 131, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 40, 161, 31));
        label_15->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        updateageLe = new QLineEdit(groupBox_3);
        updateageLe->setObjectName("updateageLe");
        updateageLe->setGeometry(QRect(180, 80, 151, 28));
        updateageLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        updateUserNameLe = new QLineEdit(groupBox_3);
        updateUserNameLe->setObjectName("updateUserNameLe");
        updateUserNameLe->setGeometry(QRect(180, 160, 151, 28));
        updateUserNameLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        updatefullnameLe = new QLineEdit(groupBox_3);
        updatefullnameLe->setObjectName("updatefullnameLe");
        updatefullnameLe->setGeometry(QRect(180, 120, 151, 28));
        updatefullnameLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 120, 161, 31));
        label_14->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        groupBox_4 = new QGroupBox(AdminTab);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(370, 0, 301, 301));
        groupBox_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_6 = new QPushButton(groupBox_4);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(150, 250, 111, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        viewaccPb = new QPushButton(groupBox_4);
        viewaccPb->setObjectName("viewaccPb");
        viewaccPb->setGeometry(QRect(30, 250, 101, 41));
        viewaccPb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        viewaccLe = new QLineEdit(groupBox_4);
        viewaccLe->setObjectName("viewaccLe");
        viewaccLe->setGeometry(QRect(40, 110, 221, 31));
        viewaccLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(40, 60, 241, 31));
        label_10->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        viewaccLw = new QListWidget(groupBox_4);
        viewaccLw->setObjectName("viewaccLw");
        viewaccLw->setGeometry(QRect(40, 200, 221, 31));
        viewaccLw->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(40, 160, 241, 31));
        label_11->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        groupBox_5 = new QGroupBox(AdminTab);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(680, 0, 301, 301));
        groupBox_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_13 = new QPushButton(groupBox_5);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(160, 250, 111, 41));
        pushButton_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_24 = new QLabel(groupBox_5);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(30, 160, 241, 31));
        label_24->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        viewaccBAdPb = new QPushButton(groupBox_5);
        viewaccBAdPb->setObjectName("viewaccBAdPb");
        viewaccBAdPb->setGeometry(QRect(30, 250, 101, 41));
        viewaccBAdPb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        viewaccBLe = new QLineEdit(groupBox_5);
        viewaccBLe->setObjectName("viewaccBLe");
        viewaccBLe->setGeometry(QRect(30, 110, 241, 31));
        viewaccBLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 60, 241, 31));
        label_16->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        accBLw = new QListWidget(groupBox_5);
        accBLw->setObjectName("accBLw");
        accBLw->setGeometry(QRect(30, 200, 241, 31));
        accBLw->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        groupBox_12 = new QGroupBox(AdminTab);
        groupBox_12->setObjectName("groupBox_12");
        groupBox_12->setGeometry(QRect(790, 340, 531, 351));
        groupBox_12->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_25 = new QLabel(groupBox_12);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(110, 230, 181, 21));
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Segoe UI\";"));
        pushButton_14 = new QPushButton(groupBox_12);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(310, 300, 111, 41));
        pushButton_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        viewTransPb_2 = new QPushButton(groupBox_12);
        viewTransPb_2->setObjectName("viewTransPb_2");
        viewTransPb_2->setGeometry(QRect(120, 300, 101, 41));
        viewTransPb_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_27 = new QLabel(groupBox_12);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(120, 260, 161, 21));
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Segoe UI\";"));
        NumTransLe_2 = new QLineEdit(groupBox_12);
        NumTransLe_2->setObjectName("NumTransLe_2");
        NumTransLe_2->setGeometry(QRect(310, 230, 111, 21));
        NumTransLe_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        accNumTransLe_2 = new QLineEdit(groupBox_12);
        accNumTransLe_2->setObjectName("accNumTransLe_2");
        accNumTransLe_2->setGeometry(QRect(310, 260, 111, 21));
        accNumTransLe_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        tableWidget_2 = new QTableWidget(groupBox_12);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(0, 30, 531, 192));
        tableWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        tableWidget_2->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_2->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tabWidget->addTab(AdminTab, QString());
        UserTab = new QWidget();
        UserTab->setObjectName("UserTab");
        groupBox_7 = new QGroupBox(UserTab);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(110, 340, 301, 351));
        groupBox_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_8 = new QPushButton(groupBox_7);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(150, 300, 111, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        viewaccNUsPb = new QPushButton(groupBox_7);
        viewaccNUsPb->setObjectName("viewaccNUsPb");
        viewaccNUsPb->setGeometry(QRect(30, 300, 101, 41));
        viewaccNUsPb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        viewaccNUsLw = new QListWidget(groupBox_7);
        viewaccNUsLw->setObjectName("viewaccNUsLw");
        viewaccNUsLw->setGeometry(QRect(40, 160, 221, 31));
        viewaccNUsLw->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_17 = new QLabel(groupBox_7);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(40, 120, 241, 31));
        label_17->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        LogoutPb_2 = new QPushButton(UserTab);
        LogoutPb_2->setObjectName("LogoutPb_2");
        LogoutPb_2->setGeometry(QRect(400, 720, 521, 71));
        LogoutPb_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);"));
        groupBox_8 = new QGroupBox(UserTab);
        groupBox_8->setObjectName("groupBox_8");
        groupBox_8->setGeometry(QRect(430, 340, 301, 351));
        groupBox_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_10 = new QPushButton(groupBox_8);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(160, 300, 111, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        viewaccBUsLw = new QListWidget(groupBox_8);
        viewaccBUsLw->setObjectName("viewaccBUsLw");
        viewaccBUsLw->setGeometry(QRect(40, 160, 221, 31));
        viewaccBUsLw->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_19 = new QLabel(groupBox_8);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(40, 120, 241, 31));
        label_19->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        viewaccBUsPb = new QPushButton(groupBox_8);
        viewaccBUsPb->setObjectName("viewaccBUsPb");
        viewaccBUsPb->setGeometry(QRect(30, 300, 111, 41));
        viewaccBUsPb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        groupBox_9 = new QGroupBox(UserTab);
        groupBox_9->setObjectName("groupBox_9");
        groupBox_9->setGeometry(QRect(750, 340, 571, 351));
        groupBox_9->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_20 = new QLabel(groupBox_9);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(110, 230, 181, 21));
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Segoe UI\";"));
        pushButton_11 = new QPushButton(groupBox_9);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(310, 300, 111, 41));
        pushButton_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        viewTransPb = new QPushButton(groupBox_9);
        viewTransPb->setObjectName("viewTransPb");
        viewTransPb->setGeometry(QRect(120, 300, 101, 41));
        viewTransPb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_26 = new QLabel(groupBox_9);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(120, 260, 161, 21));
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Segoe UI\";"));
        NumTransLe = new QLineEdit(groupBox_9);
        NumTransLe->setObjectName("NumTransLe");
        NumTransLe->setGeometry(QRect(310, 230, 111, 21));
        NumTransLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        accNumTransLe = new QLineEdit(groupBox_9);
        accNumTransLe->setObjectName("accNumTransLe");
        accNumTransLe->setGeometry(QRect(310, 260, 111, 21));
        accNumTransLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        tableWidget = new QTableWidget(groupBox_9);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 30, 571, 192));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        groupBox_10 = new QGroupBox(UserTab);
        groupBox_10->setObjectName("groupBox_10");
        groupBox_10->setGeometry(QRect(260, 10, 431, 311));
        groupBox_10->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        MakeTransPb_2 = new QPushButton(groupBox_10);
        MakeTransPb_2->setObjectName("MakeTransPb_2");
        MakeTransPb_2->setGeometry(QRect(30, 260, 101, 41));
        MakeTransPb_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_12 = new QPushButton(groupBox_10);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(270, 260, 111, 41));
        pushButton_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_21 = new QLabel(groupBox_10);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(10, 60, 271, 31));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Segoe UI\";"));
        MakeTransLe_2 = new QLineEdit(groupBox_10);
        MakeTransLe_2->setObjectName("MakeTransLe_2");
        MakeTransLe_2->setGeometry(QRect(280, 60, 131, 31));
        MakeTransLe_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_22 = new QLabel(groupBox_10);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(10, 110, 271, 31));
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Segoe UI\";"));
        MakeTransLe_3 = new QLineEdit(groupBox_10);
        MakeTransLe_3->setObjectName("MakeTransLe_3");
        MakeTransLe_3->setGeometry(QRect(280, 110, 131, 31));
        MakeTransLe_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        MakeTransLe_4 = new QLineEdit(groupBox_10);
        MakeTransLe_4->setObjectName("MakeTransLe_4");
        MakeTransLe_4->setGeometry(QRect(280, 160, 131, 31));
        MakeTransLe_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_23 = new QLabel(groupBox_10);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(10, 160, 111, 31));
        label_23->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        groupBox_11 = new QGroupBox(UserTab);
        groupBox_11->setObjectName("groupBox_11");
        groupBox_11->setGeometry(QRect(730, 10, 301, 311));
        groupBox_11->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        MakeTransLe = new QLineEdit(groupBox_11);
        MakeTransLe->setObjectName("MakeTransLe");
        MakeTransLe->setGeometry(QRect(40, 120, 211, 41));
        MakeTransLe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton_9 = new QPushButton(groupBox_11);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(170, 260, 111, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        MakeTransPb = new QPushButton(groupBox_11);
        MakeTransPb->setObjectName("MakeTransPb");
        MakeTransPb->setGeometry(QRect(30, 260, 101, 41));
        MakeTransPb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_18 = new QLabel(groupBox_11);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(40, 80, 241, 31));
        label_18->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(UserTab, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_8, &QPushButton::clicked, viewaccNUsLw, qOverload<>(&QListWidget::clear));
        QObject::connect(pushButton_9, &QPushButton::clicked, MakeTransLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_10, &QPushButton::clicked, viewaccBUsLw, qOverload<>(&QListWidget::clear));
        QObject::connect(pushButton_12, &QPushButton::clicked, MakeTransLe_4, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_12, &QPushButton::clicked, MakeTransLe_3, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_12, &QPushButton::clicked, MakeTransLe_2, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_6, &QPushButton::clicked, viewaccLw, qOverload<>(&QListWidget::clear));
        QObject::connect(pushButton_6, &QPushButton::clicked, viewaccLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_3, &QPushButton::clicked, BalanceLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_3, &QPushButton::clicked, userNameLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_3, &QPushButton::clicked, accountNmLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_3, &QPushButton::clicked, ageLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_3, &QPushButton::clicked, fullNameLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_5, &QPushButton::clicked, DeleteLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_7, &QPushButton::clicked, updateBalanceLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_7, &QPushButton::clicked, updateUserNameLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_7, &QPushButton::clicked, updatefullnameLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_7, &QPushButton::clicked, updateageLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_7, &QPushButton::clicked, updateaccnumLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_13, &QPushButton::clicked, viewaccBLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_14, &QPushButton::clicked, accNumTransLe_2, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_14, &QPushButton::clicked, NumTransLe_2, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_14, &QPushButton::clicked, tableWidget_2, qOverload<>(&QTableWidget::clear));
        QObject::connect(pushButton_11, &QPushButton::clicked, accNumTransLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_11, &QPushButton::clicked, NumTransLe, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_11, &QPushButton::clicked, tableWidget, qOverload<>(&QTableWidget::clear));
        QObject::connect(pushButton_4, &QPushButton::clicked, tableWidget_3, qOverload<>(&QTableWidget::clear));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        userla->setText(QCoreApplication::translate("MainWindow", "User Name :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Developed By Eng. Mohamed Amir", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome To Amir's Bank System", nullptr));
        loginpb->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        passla->setText(QCoreApplication::translate("MainWindow", "Pass Word :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Logintab), QCoreApplication::translate("MainWindow", "Login", nullptr));
        LogoutPb->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Create User", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        CreatePb_2->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Balance", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Full Name", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Account Number", nullptr));
        viewdb->setTitle(QCoreApplication::translate("MainWindow", "View Data Base", nullptr));
        viewdbPb->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Delete User", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Enter Account Number :", nullptr));
        Deletepb->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Update User", nullptr));
        updatePb->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Balance", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Account Number", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Full Name", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "View Account Number", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        viewaccPb->setText(QCoreApplication::translate("MainWindow", "Get Num", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Enter User Name :", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Account Number :", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "View Account Balance", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Account Balance :", nullptr));
        viewaccBAdPb->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Enter Account number :", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("MainWindow", "View Transaction History", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Num of Transactions:", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        viewTransPb_2->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Account Number :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(AdminTab), QCoreApplication::translate("MainWindow", "Admin ", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "View Account Number", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        viewaccNUsPb->setText(QCoreApplication::translate("MainWindow", "Get Num", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Account Number :", nullptr));
        LogoutPb_2->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "View Account Balance", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Account Balance :", nullptr));
        viewaccBUsPb->setText(QCoreApplication::translate("MainWindow", "Get Balance", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "View Transaction History", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Num of Transactions:", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        viewTransPb->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Account Number :", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "Transfer ", nullptr));
        MakeTransPb_2->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Enter your Account Number :", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Enter receiver Account Number :", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Amount  :", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("MainWindow", "Make Transaction", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        MakeTransPb->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Amount  :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(UserTab), QCoreApplication::translate("MainWindow", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
