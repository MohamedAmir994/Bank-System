#ifndef GETACCOUNTNUMWINDOW_H
#define GETACCOUNTNUMWINDOW_H

#include <QObject>
#include <QFile>
#include <QVector>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QString>
#include <QJsonValue>
#include <QDebug>

class getAccountnumwindow : public QObject
{
    Q_OBJECT

public:
    explicit getAccountnumwindow(QObject *parent = nullptr);
    ~getAccountnumwindow();
    QString getAccNum(QString user);
private:
    QVector<QJsonObject> dataBase;
    QString dbPath;
    void init_db();
};

#endif // GETACCOUNTNUMWINDOW_H
