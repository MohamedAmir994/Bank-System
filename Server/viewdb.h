#ifndef VIEWDB_H
#define VIEWDB_H

#include <QObject>
#include <QFile>
#include <QByteArray>


class viewdb : public QObject
{
    Q_OBJECT

public:
    explicit viewdb(QObject *parent = nullptr);
    ~viewdb();
    QByteArray viewDb();
private:
    QString dbPath;

};

#endif // VIEWDB_H
