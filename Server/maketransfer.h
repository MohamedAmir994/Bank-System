#ifndef MAKETRANSFER_H
#define MAKETRANSFER_H

#include <QObject>
#include <QFile>
#include <QVector>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
#include <TransactionLogger.h>

class maketransfer : public QObject
{
    Q_OBJECT

public:
    explicit maketransfer(QObject *parent = nullptr);
    ~maketransfer();
    qint32 Check(QString user,qint32 amount );
private:
    QVector<QJsonObject> dataBase;
    QString dbPath;
    void init_db();
    TransactionLogger transactionLogger;
};

#endif // MAKETRANSFER_H
