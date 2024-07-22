#ifndef UPDATEUSERWINDOW_H
#define UPDATEUSERWINDOW_H

#include <QObject>
#include <QFile>
#include <QVector>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>


class updateuserwindow : public QObject
{
    Q_OBJECT

public:
    explicit updateuserwindow(QObject *parent = nullptr);
    ~updateuserwindow();
    void Update(QString array);
private:

    QVector<QJsonObject> dataBase;
    QString dbPath;
    void init_db();

};

#endif // UPDATEUSERWINDOW_H
