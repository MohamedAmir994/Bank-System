#include "getaccbalance.h"

getaccbalance::getaccbalance(QObject *parent)
    : QObject(parent),dbPath("C:\\Users\\go\\Desktop\\Server\\build\\db.json")


{

}

getaccbalance::~getaccbalance()
{

}

void getaccbalance::init_db()
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
QString getaccbalance::getAccBala(QString accNum)
{
    QString balance;
    qint32 Num;
    init_db();
    for(auto& vv : dataBase)
    {
        Num = vv["Accountnumber"].toInt();
        if(QString::number(Num) == accNum | vv.value("UserName").toString() == accNum)
        {
            qint32 num = vv["balance"].toInt();
            balance = QString::number(num);
        }
    }

    return balance;
}


