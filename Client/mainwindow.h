#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <MyClient.h>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QVector>
#include <QTableWidget>
#include <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    MyClient* client;


public slots:
    void onReadyReadDevice(QString data);


signals:
    void dbReceive(QString data);
private slots:
    void on_loginpb_clicked();


    void on_CreatePb_2_clicked();

    void on_viewdbPb_clicked();

    void on_Deletepb_clicked();

    void on_viewaccPb_clicked();

    void on_LogoutPb_clicked();

    void on_LogoutPb_2_clicked();

    void on_viewaccBAdPb_clicked();

    void on_updatePb_clicked();

    void on_viewaccNUsPb_clicked();

    void on_viewaccBUsPb_clicked();

    void on_MakeTransPb_clicked();

    void on_MakeTransPb_2_clicked();

    void on_viewTransPb_clicked();

    void on_viewTransPb_2_clicked();

private:
    Ui::MainWindow *ui;
    void viewdb(QTableWidget *tableWidget, const QString &jsonString);
    void getAccountNum(QString num);
    void getAccountNumUser(QString num);
    void getAccountBalance(QString balance);
    void getAccountBalanceUser(QString balance);
    void displayTransactionHistory(QTableWidget *tableWidget, const QString &transactionHistoryString);
    QVector<QJsonObject> dataBase;
    QString currentUser;
    QString currentAccNum;




};
#endif // MAINWINDOW_H
