#include "createuserwindow.h"

createuserwindow::createuserwindow(QObject *parent)
    : QObject(parent),loginPath("C:\\Users\\go\\Desktop\\Server\\build\\login.json")
    ,dbPath("C:\\Users\\go\\Desktop\\Server\\build\\db.json")

{

}


createuserwindow::~createuserwindow()
{

}

void createuserwindow::init_db()
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

void createuserwindow::init_logindb()
{
    //dataBase.clear();
    QFile file(loginPath);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QByteArray byteArrray = file.readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(byteArrray);
        QJsonArray jsonArray = jsonDoc.array();
        for(int i=0 ; i<jsonArray.size();i++)
        {
            QJsonObject jsonObject = jsonArray[i].toObject();
            logindb<<jsonObject;
        }
        file.close();
    }


}

void createuserwindow::Add(QString user, int accNumber, QString fullName, int balance, int age)
{
    init_db();

    qint32 LastID = 0; // Default value if dataBase is empty

    LastID = dataBase.back()["ID"].toInt();
    QJsonObject newObject;
    newObject["fullname"] = fullName;
    newObject["Age"] = age;
    newObject["Accountnumber"] = accNumber;
    newObject["UserName"] = user;
    newObject["balance"] = balance;
    newObject["ID"] = LastID+1;

    QJsonArray jsonArray;
    for(auto &vv : dataBase)
    {
        jsonArray.append(vv);
    }
    jsonArray.append(newObject);
    QFile file(dbPath);
    if(file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        file.write(QJsonDocument(jsonArray).toJson());

    }
    file.close();


}

qint32 createuserwindow::check(QString currentUser , qint32 accountNumber)
{
    init_db();
    qint32 res;
    for(auto &vv : dataBase)
    {

        if(vv.value("UserName").toString() == currentUser && vv.value("Accountnumber").toInt() == accountNumber)
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
