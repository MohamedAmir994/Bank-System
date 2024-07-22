#include "getaccountnumwindow.h"

getAccountnumwindow::getAccountnumwindow(QObject *parent)
    : QObject(parent),dbPath("C:\\Users\\go\\Desktop\\Server\\build\\db.json")

{

}

getAccountnumwindow::~getAccountnumwindow()
{

}

void getAccountnumwindow::init_db()
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

QString getAccountnumwindow::getAccNum(QString user)
{
    QString acc;
    init_db();
    for(auto& vv : dataBase)
    {

        if(vv["UserName"].toString() == user)
        {
            qint32 num = vv["Accountnumber"].toInt();
            acc = QString::number(num);
        }
    }

    return acc;
}


