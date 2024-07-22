#include "MyClient.h"

MyClient::MyClient(QObject *parent)
    : QObject{parent},ip{"192.168.1.107"},port{4444}
{
    connect(&socket,&QTcpSocket::connected,this,&MyClient::onConnection);
    connect(&socket,&QTcpSocket::disconnected,this,&MyClient::onDisconnected);
    connect(&socket,&QTcpSocket::errorOccurred,this,&MyClient::onErrorOccurred);
    connect(&socket,&QTcpSocket::stateChanged,this,&MyClient::onStateChanged);
    connect(&socket,&QTcpSocket::readyRead,this,&MyClient::onReadyRead);

}


void MyClient::ConnectToDevice()
{
    if(!socket.isOpen())
    {
        socket.connectToHost(this->ip,this->port);
    }

}

void MyClient::Disconnect()
{
    if(socket.isOpen())
    {
        socket.close();
    }
}

void MyClient::WriteData(QString data)
{
    if(socket.isOpen())
    {
        socket.write(data.toUtf8());
    }
}

void MyClient::onConnection()
{
    emit Connection();
}

void MyClient::onDisconnected()
{
    emit Disconnected();
}

void MyClient::onErrorOccurred(QAbstractSocket::SocketError socketError)
{   QMetaEnum meta = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    qDebug()<<meta.valueToKey(socketError)<<Qt::endl;
    emit ErrorOccurred(socketError);
}

void MyClient::onStateChanged(QAbstractSocket::SocketState socketState)
{
     qDebug()<<socketState<<Qt::endl;
    if(socketState == QAbstractSocket::UnconnectedState)
    {
        socket.close();
    }
    emit StateChanged(socketState);
}

void MyClient::onReadyRead()
{
    QByteArray byteArray = socket.readAll();
    QString data = QString(byteArray);
    qDebug()<<data<<Qt::endl;
    emit ReadyRead(data);
}

