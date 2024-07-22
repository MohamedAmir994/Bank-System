#include "serverhandler.h"

ServerHandler::ServerHandler(int Id,QObject *parent)
    : QThread{parent},ID{Id}
{
}


void ServerHandler::run()
{
    qDebug()<<"Client "<<ID<<" :is running on thread :"<<QThread::currentThreadId();

    socket_ptr =new QTcpSocket();
    socket_ptr->setSocketDescriptor(ID);

    connect(socket_ptr,&QTcpSocket::readyRead,this,&ServerHandler::onReadWrite_slot,Qt::DirectConnection);
    connect(socket_ptr,&QTcpSocket::disconnected,this,&ServerHandler::onDisconnect_slot,Qt::DirectConnection);

    exec();

}


void ServerHandler::sendMessageToClient(QString message)
{
    if(socket_ptr->isOpen())
    {
        socket_ptr->write(message.toUtf8());
    }
}




void ServerHandler::onReadWrite_slot()
{
    QByteArray byteArr = socket_ptr->readAll();
    QString str = QString(byteArr);
    qDebug()<<"str"<<Qt::endl;
    //read the first split of string
    QStringList parts = str.split("^");



    qint32 req = parts[0].toInt();

    //check
    switch (req) {
    case 0/*"login"*/:
    {
        QString user = parts[1];
        QString pass = parts[2];
        qint32 isAdmin = Log.checklog(user,pass);
        if(isAdmin==1)
        {
            sendMessageToClient("1@");
        }
        else if(isAdmin==-1)
        {
            sendMessageToClient("0@");
        }
        else if(isAdmin==-0)
        {
            sendMessageToClient("9@");
        }
        else
        {
            qDebug()<<"couldn't find the entered username"<<Qt::endl;
        }
        break;
    }
    case 1:
    {
        QString user=parts[1];
        int accNumber=parts[2].toInt();
        QString fullName=parts[3];
        int balance=parts[4].toInt();
        int age=parts[5].toInt();
        createUse.Add(user,accNumber,fullName,balance,age);
        break;}
    case 2:
    {
        QString message = QString(viewData.viewDb());
        QString comp = QString("2@"+message);
        sendMessageToClient(comp);
        break;
    }
    case 3:
    {
        int accNumber=parts[1].toInt();
        deleteUser.DeleteUser(accNumber);
        break;
    }
    case 4:
    {
        QString user = parts[1];
        QString message = getAccount.getAccNum(user);
        QString comp = QString("3@"+message);

        sendMessageToClient(comp.toUtf8());

        break;}
    case 5:
    {
        QString accNum = parts[1];
        QString message = getBalance.getAccBala(accNum);
        QString comp = QString("4@"+message);
        sendMessageToClient(comp.toUtf8());
        break;}
    case 6:
    {
        QString array = parts[1];
        updateUSer.Update(array);
    }
    case 7:
    {
        QString user = parts[1];
        QString message = getAccount.getAccNum(user);
        QString comp = QString("5@"+message);
        sendMessageToClient(comp.toUtf8());
        break;}
    case 8:
    {
        QString user = parts[1];
        QString message = getBalance.getAccBala(user);
        QString comp = QString("6@"+message);
        sendMessageToClient(comp.toUtf8());
        break;}
    case 9:
    {
        QString user = parts[1];
        qint32 amount = parts[2].toInt();
        maketrans.MakeTrans(user,amount);
        break;}
    case 10:
    {
        QString user = parts[1];
        QString sender = parts[2];
        QString Receiver = parts[3];
        qint32 amount = parts[4].toInt();

        if(makeTransfer.Check(user,amount))
        {
            maketrans.MakeTrans(sender,-amount);
            maketrans.MakeTrans(Receiver,amount);
        }

        break;}
    case 11:
    {
        qint32 accountNumber = parts[1].toInt();
        qint32 numEntries = parts[2].toInt();
        QString currentUser = parts[3];
        if(createUse.check(currentUser,accountNumber))
        {
            QString user = viewHistory.getTransactionHistory( accountNumber,  numEntries);
            QString comp = QString("7@"+user);
            sendMessageToClient(comp.toUtf8());
        }
        break;
    }
    case 12:
    {
        qint32 accountNumber = parts[1].toInt();
        qint32 numEntries = parts[2].toInt();
        QString user = viewHistory.getTransactionHistory( accountNumber,  numEntries);
        QString comp = QString("8@"+user);
        sendMessageToClient(comp.toUtf8());

        break;
    }


    }

}

void ServerHandler::onDisconnect_slot()
{
    if(socket_ptr->isOpen())
    {
        socket_ptr->disconnect();
        qDebug()<<"Client "<<ID<<" has been disconnected";
    }
}
