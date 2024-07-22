/********************************************************************************
** Form generated from reading UI file 'viewdbwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWDBWINDOW_H
#define UI_VIEWDBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_viewdbwindow
{
public:
    QPushButton *Backpb;
    QTableWidget *tableWidget;

    void setupUi(QDialog *viewdbwindow)
    {
        if (viewdbwindow->objectName().isEmpty())
            viewdbwindow->setObjectName("viewdbwindow");
        viewdbwindow->resize(1118, 738);
        Backpb = new QPushButton(viewdbwindow);
        Backpb->setObjectName("Backpb");
        Backpb->setGeometry(QRect(430, 630, 251, 81));
        tableWidget = new QTableWidget(viewdbwindow);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(95, 61, 931, 561));

        retranslateUi(viewdbwindow);

        QMetaObject::connectSlotsByName(viewdbwindow);
    } // setupUi

    void retranslateUi(QDialog *viewdbwindow)
    {
        viewdbwindow->setWindowTitle(QCoreApplication::translate("viewdbwindow", "Dialog", nullptr));
        Backpb->setText(QCoreApplication::translate("viewdbwindow", "Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("viewdbwindow", "Full Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("viewdbwindow", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("viewdbwindow", "Account Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("viewdbwindow", "User Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("viewdbwindow", "Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewdbwindow: public Ui_viewdbwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWDBWINDOW_H
