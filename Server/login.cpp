#include "login.h"


login::login(QObject *parent)
    : QObject(parent)

{

}

qint32 login::checklog(const QString &username, const QString &password)
{
    QFile file("C:\\Users\\go\\Desktop\\Server\\build\\login.json");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open file for reading.";

    }

    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(jsonData);
    QJsonArray users = doc.array();

    for (const QJsonValue &value : users) {
        QJsonObject user = value.toObject();
        QString storedUsername = user["UserName"].toString();
        int storedPassword = user["Password"].toInt();
        QString auth = user["Auth"].toString();

        if (storedUsername == username && QString::number(storedPassword) == password  ) {
            if(auth == "Admin")
            {

                return 1;//user exists and admin
            }

            return -1; // User exists
        }
    }

    return 0; // User doesn't exist
}

login::~login()
{

}
