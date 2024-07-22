#include "maketransaction.h"

maketransaction::maketransaction(QObject *parent)
    : QObject(parent),dbPath("C:\\Users\\go\\Desktop\\Server\\build\\db.json")

{

}

maketransaction::~maketransaction()
{

}

void maketransaction::init_db()
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

void maketransaction::MakeTrans(QString user, qint32 amount)
{
    qint32 newAmmount;
    init_db();
    for(auto& vv : dataBase)
    {

        if(vv["UserName"].toString() == user || vv["Accountnumber"].toInt() == user.toInt())
        {
           newAmmount = vv["balance"].toInt() ;
           newAmmount += amount;
           vv["balance"] = newAmmount;
           transactionLogger.logTransaction(vv["Accountnumber"].toInt(), "transaction", amount);
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

