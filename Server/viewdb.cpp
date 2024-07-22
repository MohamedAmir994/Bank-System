#include "viewdb.h"

viewdb::viewdb(QObject *parent)
    : QObject(parent),dbPath("C:\\Users\\go\\Desktop\\Server\\build\\db.json")

{
}

viewdb::~viewdb()
{
}

QByteArray  viewdb::viewDb()
{
    QFile file(dbPath);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QByteArray Arrray = file.readAll();
        return Arrray;
    }

}


