#ifndef SERVERHANDLER_H
#define SERVERHANDLER_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include <QString>
#include <QTcpSocket>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <login.h>
#include <createuserwindow.h>
#include <deleteuserwindow.h>
#include <getaccbalance.h>
#include <getaccountnumwindow.h>
#include <maketransaction.h>
#include <maketransfer.h>
#include <updateuserwindow.h>
#include <viewdb.h>
#include <viewtranshistory.h>

class ServerHandler : public QThread
{
    Q_OBJECT
public:
    explicit ServerHandler(int Id,QObject *parent = nullptr);
    void sendMessageToClient(QString message);
    void Operations(QString operation);
    QTcpSocket *socket_ptr;

public slots:
    void onReadWrite_slot();
    void onDisconnect_slot();

private:
    int ID;
    login Log;
    createuserwindow createUse;
    viewdb viewData;
    deleteuserwindow deleteUser;
    getAccountnumwindow getAccount;
    getaccbalance getBalance;
    updateuserwindow updateUSer;
    maketransaction maketrans;
    maketransfer makeTransfer;
    ViewTransHistory viewHistory;
    // QThread interface
protected:
    void run();
};
#endif // SERVERHANDLER_H
