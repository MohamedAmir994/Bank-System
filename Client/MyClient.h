#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <QMetaEnum>
class MyClient : public QObject
{
    Q_OBJECT
public:
    explicit MyClient(QObject *parent = nullptr);
    void ConnectToDevice();
    void Disconnect();
    void WriteData(QString data);


signals:
    void Connection();
    void Disconnected();
    void ErrorOccurred(QAbstractSocket::SocketError socketError);
    void StateChanged(QAbstractSocket::SocketState socketState);
    void ReadyRead(QString data);
private slots:
    void onConnection();
    void onDisconnected();
    void onErrorOccurred(QAbstractSocket::SocketError socketError);
    void onStateChanged(QAbstractSocket::SocketState socketState);
    void onReadyRead();
private:
    QString ip;
    qint32 port;
    QTcpSocket socket;
};

#endif // MYCLIENT_H
