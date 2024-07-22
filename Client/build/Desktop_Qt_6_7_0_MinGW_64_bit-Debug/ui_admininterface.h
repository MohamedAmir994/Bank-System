/********************************************************************************
** Form generated from reading UI file 'admininterface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admininterface
{
public:
    QLabel *label;
    QPushButton *createUserPb;
    QPushButton *viewdbpb;

    void setupUi(QDialog *admininterface)
    {
        if (admininterface->objectName().isEmpty())
            admininterface->setObjectName("admininterface");
        admininterface->resize(1155, 779);
        label = new QLabel(admininterface);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 20, 331, 81));
        createUserPb = new QPushButton(admininterface);
        createUserPb->setObjectName("createUserPb");
        createUserPb->setGeometry(QRect(110, 120, 211, 121));
        viewdbpb = new QPushButton(admininterface);
        viewdbpb->setObjectName("viewdbpb");
        viewdbpb->setGeometry(QRect(510, 120, 311, 121));

        retranslateUi(admininterface);

        QMetaObject::connectSlotsByName(admininterface);
    } // setupUi

    void retranslateUi(QDialog *admininterface)
    {
        admininterface->setWindowTitle(QCoreApplication::translate("admininterface", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("admininterface", "TextLabel", nullptr));
        createUserPb->setText(QCoreApplication::translate("admininterface", "create new user", nullptr));
        viewdbpb->setText(QCoreApplication::translate("admininterface", "View Data Base", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admininterface: public Ui_admininterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
