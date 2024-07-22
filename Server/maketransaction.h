#ifndef MAKETRANSACTION_H
#define MAKETRANSACTION_H

#include <QObject>
#include <QFile>
#include <QVector>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <TransactionLogger.h>
class maketransaction : public QObject
{
    Q_OBJECT

public:
    explicit maketransaction(QObject *parent = nullptr);
    ~maketransaction();
    void MakeTrans(QString user,qint32 amount);
private:
    QVector<QJsonObject> dataBase;
    QString dbPath;
    void init_db();
    TransactionLogger transactionLogger;
};

#endif // MAKETRANSACTION_H
