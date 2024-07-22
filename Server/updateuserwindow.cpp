#include "updateuserwindow.h"

updateuserwindow::updateuserwindow(QObject *parent)
    : QObject(parent),dbPath("C:\\Users\\go\\Desktop\\Server\\build\\db.json")

{

}

updateuserwindow::~updateuserwindow()
{

}

void updateuserwindow::init_db()
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
    else
    {
        qDebug()<<"cant open"<<Qt::endl;
    }
}

void updateuserwindow::Update(QString array)
{
    init_db();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(array.toUtf8());
    QJsonObject jsonObject = jsonDoc.object();

    for(auto& vv : dataBase)
    {
        if(jsonObject.value("Accountnumber").toInt() == vv.value("Accountnumber").toInt())
        {
            if(!(jsonObject.value("fullname").toString() == "#"))
            {
                vv["fullname"] = jsonObject["fullname"].toString();
            }

            if(!(jsonObject.value("UserName").toString() == "#"))
            {
                vv["UserName"] = jsonObject["UserName"].toString();
            }

            if(!(jsonObject.value("Age").toInt() == 0 ))
            {
                vv["Age"] = jsonObject["Age"].toInt();
            }

            if(!(jsonObject.value("balance").toInt() == 0))
            {
                vv["balance"] = jsonObject["balance"].toInt();
            }
            break;
        }
    }

    QJsonArray jsonArray;
    for(auto& vv : dataBase)
    {
        jsonArray.append(vv);
    }
    QFile file(dbPath);
    if(file.open(QIODevice::ReadWrite | QIODevice::Text ))
    {
        file.resize(0);
        file.write(QJsonDocument(jsonArray).toJson());
        file.close();
    }

}
