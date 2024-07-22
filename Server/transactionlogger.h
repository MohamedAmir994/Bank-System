#ifndef TRANSACTIONLOGGER_H
#define TRANSACTIONLOGGER_H

#include <QObject>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QDebug>
#include <QDateTime>
#include <QMutex>
#include <QProcess>
#include <QCoreApplication>

class TransactionLogger : public QObject {
    Q_OBJECT

public:
    explicit TransactionLogger(QObject *parent = nullptr);
    virtual ~TransactionLogger();

    void logTransaction(qint32 accountNumber, const QString &type, qint32 amount);
    void sendEmail(const QString &to, const QString &subject, const QString &body);


private:
    QString logPath;
    QMutex logMutex;
    QJsonObject loadLogs();
    void saveLogs(const QJsonObject &logs);
};

#endif // TRANSACTIONLOGGER_H
