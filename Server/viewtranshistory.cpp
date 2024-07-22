#include "ViewTransHistory.h"

ViewTransHistory::ViewTransHistory(QObject *parent)
    : QObject(parent), logPath("C:\\Users\\go\\Desktop\\Server\\build\\logs.json") {
}

ViewTransHistory::~ViewTransHistory() {
}

QJsonObject ViewTransHistory::loadLogs() {
    QFile file(logPath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QByteArray byteArray = file.readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(byteArray);
        file.close();
        return jsonDoc.object();
    } else {
        qDebug() << "Cannot open log file for reading.";
        return QJsonObject();
    }
}

QString ViewTransHistory::getTransactionHistory(qint32 accountNumber, qint32 numEntries) {
    QJsonObject logs = loadLogs();
    QString accountKey = QString::number(accountNumber);

    if (!logs.contains(accountKey)) {
        qDebug() << "No logs found for account number:" << accountNumber;
        return QString();
    }

    QJsonObject accountLog = logs[accountKey].toObject();
    QJsonArray transactionsArray = accountLog["transactions"].toArray();

    if (transactionsArray.isEmpty()) {
        qDebug() << "No transactions found for account number:" << accountNumber;
        return QString();
    }

    QList<QJsonObject> transactionsList;
    for (const QJsonValue &value : transactionsArray) {
        transactionsList.append(value.toObject());
    }

    std::sort(transactionsList.begin(), transactionsList.end(), [](const QJsonObject &a, const QJsonObject &b) {
        return a["timestamp"].toString() > b["timestamp"].toString();
    });

    qint32 availableEntries = transactionsList.size();
    qint32 entriesToReturn = qMin(numEntries, availableEntries);


    QJsonArray recentTransactions;
    for (int i = 0; i < entriesToReturn; ++i) {
        recentTransactions.append(transactionsList[i]);
    }

    QJsonObject result;
    result["transactions"] = recentTransactions;
    QJsonDocument resultDoc(result);

    return resultDoc.toJson(QJsonDocument::Compact);
}

QString ViewTransHistory::getTransactionHistoryUser(qint32 accountNumber, qint32 numEntries) {
    QJsonObject logs = loadLogs();
    QString accountKey = QString::number(accountNumber);

    if (!logs.contains(accountKey)) {
        qDebug() << "No logs found for account number:" << accountNumber;
        return QString();
    }

    QJsonObject accountLog = logs[accountKey].toObject();
    QJsonArray transactionsArray = accountLog["transactions"].toArray();

    if (transactionsArray.isEmpty()) {
        qDebug() << "No transactions found for account number:" << accountNumber;
        return QString();
    }

    QList<QJsonObject> transactionsList;
    for (const QJsonValue &value : transactionsArray) {
        transactionsList.append(value.toObject());
    }

    std::sort(transactionsList.begin(), transactionsList.end(), [](const QJsonObject &a, const QJsonObject &b) {
        return a["timestamp"].toString() > b["timestamp"].toString();
    });

    qint32 availableEntries = transactionsList.size();
    qint32 entriesToReturn = qMin(numEntries, availableEntries);


    QJsonArray recentTransactions;
    for (int i = 0; i < entriesToReturn; ++i) {
        recentTransactions.append(transactionsList[i]);
    }

    QJsonObject result;
    result["transactions"] = recentTransactions;
    QJsonDocument resultDoc(result);

    return resultDoc.toJson(QJsonDocument::Compact);
}


