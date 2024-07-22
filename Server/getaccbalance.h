#ifndef GETACCBALANCE_H
#define GETACCBALANCE_H

#include <QObject>
#include <QFile>
#include <QVector>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QString>
#include <QJsonValue>
#include <QDebug>
class getaccbalance : public QObject
{
    Q_OBJECT

public:
    explicit getaccbalance(QObject *parent = nullptr);
    ~getaccbalance();
    QString getAccBala(QString accNum);
private:
    QVector<QJsonObject> dataBase;
    QString dbPath;
    void init_db();
};

#endif // GETACCBALANCE_H
