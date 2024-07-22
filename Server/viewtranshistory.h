#ifndef VIEWTRANSHISTORY_H
#define VIEWTRANSHISTORY_H

#include <QObject>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QDebug>
#include <QDateTime>

class ViewTransHistory : public QObject {
    Q_OBJECT

public:
    explicit ViewTransHistory(QObject *parent = nullptr);
    virtual ~ViewTransHistory();
    QString getTransactionHistory(qint32 accountNumber, qint32 numEntries);
    QString getTransactionHistoryUser(qint32 accountNumber, qint32 numEntries);
private:
    QString logPath;
    QJsonObject loadLogs();
};

#endif // VIEWTRANSHISTORY_H
