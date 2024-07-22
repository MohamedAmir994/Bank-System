#ifndef DELETEUSERWINDOW_H
#define DELETEUSERWINDOW_H

#include <QObject>
#include <QFile>
#include <QVector>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

class deleteuserwindow : public QObject
{
    Q_OBJECT

public:
    explicit deleteuserwindow(QObject *parent = nullptr);
    ~deleteuserwindow();
    void DeleteUser(qint32 accNumber);

private:
    QVector<QJsonObject> dataBase;
    QString dbPath;
    void init_db();

};

#endif // DELETEUSERWINDOW_H
