#include "deleteuserwindow.h"

deleteuserwindow::deleteuserwindow(QObject *parent)
    : QObject(parent),dbPath("C:\\Users\\go\\Desktop\\Server\\build\\db.json")

{

}

deleteuserwindow::~deleteuserwindow()
{

}
void deleteuserwindow::init_db()
{
    dataBase.clear();
    QFile file(dbPath);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QByteArray byteArrray = file.readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(byteArrray);
        QJsonArray jsonArray = jsonDoc.array();
        for(int i=0 ; i<jsonArray.size();i++)
        {
            QJsonObject jsonObject = jsonArray[i].toObject();
            dataBase<<jsonObject;
        }
        file.close();
    }
}
void deleteuserwindow::DeleteUser(qint32 accNumber)
{
    init_db();
    QJsonArray jsonArray;
    for(auto& vv : dataBase)
    {   if(vv["Accountnumber"].toInt() != accNumber)
        {
            jsonArray.append(vv);
        }
    }
    QFile file(dbPath);
    if(file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate))
    {
        file.resize(0);
        file.write(QJsonDocument(jsonArray).toJson());
        file.close();
    }

}
