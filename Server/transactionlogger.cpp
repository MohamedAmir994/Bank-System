#include "TransactionLogger.h"

TransactionLogger::TransactionLogger(QObject *parent)
    : QObject(parent), logPath("C:\\Users\\go\\Desktop\\Server\\build\\logs.json") {
}

TransactionLogger::~TransactionLogger() {
}

void TransactionLogger::logTransaction(qint32 accountNumber, const QString &type, qint32 amount) {
    QMutexLocker locker(&logMutex);
    QJsonObject logs = loadLogs();

    QString accountKey = QString::number(accountNumber);

    QJsonObject accountLog;
    if (logs.contains(accountKey)) {
        accountLog = logs[accountKey].toObject();
    }

    QJsonArray transactions;
    if (accountLog.contains("transactions")) {
        transactions = accountLog["transactions"].toArray();
    }

    QJsonObject transaction;
    transaction["type"] = type;
    transaction["amount"] = amount;
    transaction["timestamp"] = QDateTime::currentDateTime().toString(Qt::ISODate);

    transactions.append(transaction);
    accountLog["transactions"] = transactions;
    logs[accountKey] = accountLog;

    QString subject = QString ("A transaction of value : ")+QString::number(amount) + QString("  was made on your account with account number : ") + QString::number(accountNumber) + QString("  at :") + QDateTime::currentDateTime().toString(Qt::ISODate);
    saveLogs(logs);
    sendEmail("mohamed.amir124999@gmail.com" , "Transaction " , subject);
}

void TransactionLogger::sendEmail(const QString &to, const QString &subject, const QString &body)
{
    QProcess pro;
    // Path to your batch script
    QString batchFilePath =  QString("C:\\Users\\go\\Desktop\\Server\\send_email.bat");

    // Prepare arguments
    QStringList arguments;
    arguments << to << subject << body;

    // Start the batch script with arguments
    pro.start(batchFilePath, arguments);

    if (!pro.waitForFinished()) {
        qWarning() << "Failed to send email:" << pro.errorString();
    } else {
        qDebug() << "Email sent successfully!";
    }

}

QJsonObject TransactionLogger::loadLogs() {
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

void TransactionLogger::saveLogs(const QJsonObject &logs) {
    QFile file(logPath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        file.write(QJsonDocument(logs).toJson());
        file.close();
    } else {
        qDebug() << "Cannot open log file for writing.";
    }
}
