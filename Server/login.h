#ifndef LOGIN_H
#define LOGIN_H

#include <QObject>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>


class login : public QObject
{
    Q_OBJECT

public:
    explicit login(QObject *parent = nullptr);
    QString currentPass;

    ~login();
//signals:
    qint32 checklog(const QString &username, const QString &password);
private:


};

#endif // LOGIN_H
