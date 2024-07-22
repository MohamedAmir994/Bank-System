#ifndef CREATEUSERWINDOW_H
#define CREATEUSERWINDOW_H

#include <QObject>
#include <QFile>
#include <QVector>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>

class createuserwindow : public QObject
{
    Q_OBJECT

public:
    explicit createuserwindow(QObject *parent = nullptr);

    void Add(QString user,int accNumber,QString fullName,int balance,int age);
    qint32 check(QString currentUser , qint32 accountNumber);
    ~createuserwindow();

private:
    void init_db();
    void init_logindb();

    QVector<QJsonObject> dataBase;
    QVector<QJsonObject> logindb;

    QString loginPath;
    QString dbPath;

};

#endif // CREATEUSERWINDOW_H
