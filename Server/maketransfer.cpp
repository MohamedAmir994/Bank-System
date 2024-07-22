#include "maketransfer.h"

maketransfer::maketransfer(QObject *parent)
    : QObject(parent),dbPath("C:\\Users\\go\\Desktop\\Server\\build\\db.json")

{

}

maketransfer::~maketransfer()
{

}

void maketransfer::init_db()
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

qint32 maketransfer::Check(QString user, qint32 amount )
{

    init_db();
    qint32 res;
    for(auto& vv : dataBase)
    {
        if(vv.value("UserName").toString() == user && vv.value("balance").toInt() > amount && amount >= 0  )
        {
            res = 1;
            break;
        }
        else
        {
            res = 0;

        }
    }
    return res;


}

