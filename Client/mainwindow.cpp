#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),client(new MyClient)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(client,&MyClient::ReadyRead,this,&MainWindow::onReadyReadDevice);

    client->ConnectToDevice();
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::viewdb(QTableWidget *tableWidget, const QString &jsonString)
{
    qDebug() << "Database JSON String:" << jsonString;

    // Parse the JSON string
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonString.toUtf8());
    if (jsonDoc.isNull())
    {
        qDebug() << "Failed to parse JSON: Invalid JSON format";
        return;
    }

    if (!jsonDoc.isArray())
    {
        qDebug() << "JSON is not an array";
        return;
    }

    QJsonArray jsonArray = jsonDoc.array();

    // Set up the table widget
    tableWidget->setRowCount(jsonArray.size());
    tableWidget->setColumnCount(5); // Number of columns: Full Name, Age, Accountnumber, UserName, Balance
    tableWidget->setHorizontalHeaderLabels({"Full Name", "Age", "Accountnumber", "UserName", "Balance"});

    // Populate the table
    for (int i = 0; i < jsonArray.size(); ++i)
    {
        QJsonObject jsonObject = jsonArray[i].toObject();

        QTableWidgetItem *fullNameItem = new QTableWidgetItem(jsonObject["fullname"].toString());
        QTableWidgetItem *ageItem = new QTableWidgetItem(QString::number(jsonObject["Age"].toInt()));
        QTableWidgetItem *accountNumberItem = new QTableWidgetItem(QString::number(jsonObject["Accountnumber"].toInt()));
        QTableWidgetItem *userNameItem = new QTableWidgetItem(jsonObject["UserName"].toString());
        QTableWidgetItem *balanceItem = new QTableWidgetItem(QString::number(jsonObject["balance"].toInt()));

        tableWidget->setItem(i, 0, fullNameItem);
        tableWidget->setItem(i, 1, ageItem);
        tableWidget->setItem(i, 2, accountNumberItem);
        tableWidget->setItem(i, 3, userNameItem);
        tableWidget->setItem(i, 4, balanceItem);

        qDebug() << "Added row:" << i
                 << "Full Name:" << jsonObject["fullname"].toString()
                 << "Age:" << jsonObject["Age"].toInt()
                 << "Accountnumber:" << jsonObject["Accountnumber"].toInt()
                 << "UserName:" << jsonObject["UserName"].toString()
                 << "Balance:" << jsonObject["balance"].toInt();
    }

}


void MainWindow::onReadyReadDevice(QString data)
{qint32 req = data.split("@")[0].toInt();
    if(req==1)
    {   qDebug()<<"1"<<Qt::endl;
        ui->tabWidget->setCurrentIndex(1);
        ui->tabWidget->setTabEnabled(0, false);
        ui->tabWidget->setTabEnabled(1, true);
        ui->tabWidget->setTabEnabled(2, false);

    }
    else if(req==0){
        qDebug()<<"1"<<Qt::endl;
        currentUser = ui->userle->text();
        ui->tabWidget->setCurrentIndex(2);
        ui->tabWidget->setTabEnabled(0, false);
        ui->tabWidget->setTabEnabled(1, false);
        ui->tabWidget->setTabEnabled(2, true);
    }
    //view data base
    else if(req==2){

        viewdb(ui->tableWidget_3,data.split("@")[1]);
    }
    else if(req==3){

        getAccountNum(data.split("@")[1]);
    }
    else if(req==4){

        getAccountBalance(data.split("@")[1]);
    }
    else if(req==5){

        getAccountNumUser(data.split("@")[1]);
    }
    else if(req==6){

        getAccountBalanceUser(data.split("@")[1]);
    }
    else if(req==7){
        QString history = data.split("@")[1];
        displayTransactionHistory(ui->tableWidget,history);
    }
    else if(req==8){
        QString history = data.split("@")[1];
        displayTransactionHistory(ui->tableWidget_2,history);
    }
    else if(req==9){
        qDebug()<<"0"<<Qt::endl;
        qDebug()<<"couldn't find the entered username"<<Qt::endl;
    }

}
void MainWindow::displayTransactionHistory(QTableWidget *tableWidget, const QString &transactionHistoryString)
{
    qDebug() << "Transaction History String:" << transactionHistoryString;

    // Parse the JSON string
    QJsonDocument jsonDoc = QJsonDocument::fromJson(transactionHistoryString.toUtf8());
    if (jsonDoc.isNull())
    {
        qDebug() << "Failed to parse JSON: Invalid JSON format";
        return;
    }

    if (!jsonDoc.isObject())
    {
        qDebug() << "JSON is not an object";
        return;
    }

    QJsonObject jsonObj = jsonDoc.object();
    QJsonArray jsonArray = jsonObj["transactions"].toArray();

    // Set up the table widget
    tableWidget->setRowCount(jsonArray.size());
    tableWidget->setColumnCount(3); // Number of columns: Transaction Type, Amount, Timestamp
    tableWidget->setHorizontalHeaderLabels({"Transaction Type", "Amount", "Timestamp"});

    // Populate the table
    for (int i = 0; i < jsonArray.size(); ++i)
    {
        QJsonObject jsonObject = jsonArray[i].toObject();

        QTableWidgetItem *typeItem = new QTableWidgetItem(jsonObject["type"].toString());
        QTableWidgetItem *amountItem = new QTableWidgetItem(QString::number(jsonObject["amount"].toDouble()));
        QTableWidgetItem *timestampItem = new QTableWidgetItem(jsonObject["timestamp"].toString());

        tableWidget->setItem(i, 0, typeItem);
        tableWidget->setItem(i, 1, amountItem);
        tableWidget->setItem(i, 2, timestampItem);

        qDebug() << "Added row:" << i
                 << "Transaction Type:" << jsonObject["type"].toString()
                 << "Amount:" << jsonObject["amount"].toDouble()
                 << "Timestamp:" << jsonObject["timestamp"].toString();
    }
}

void MainWindow::getAccountBalance(QString balance)
{
    ui->accBLw->addItem(balance);
}

void MainWindow::getAccountBalanceUser(QString balance)
{
    ui->viewaccBUsLw->addItem(balance);
}
void MainWindow::getAccountNum(QString num)
{
    ui->viewaccLw->addItem(num);
}

void MainWindow::getAccountNumUser(QString num)
{
    ui->viewaccNUsLw->addItem(num);
}
void MainWindow::on_loginpb_clicked()
{

    QString user =ui->userle->text();
    QString pass =ui->passle->text();
    currentUser = user;
    QString message =QString("0^%1^%2").arg(user).arg(pass);//0 for the login request
    client->WriteData(message);
}


void MainWindow::on_CreatePb_2_clicked()
{
    QString user=ui->userNameLe->text();
    int accNumber=ui->accountNmLe->text().toInt();
    QString fullName=ui->fullNameLe->text();
    int balance=ui->BalanceLe->text().toInt();
    int age=ui->ageLe->text().toInt();
    QString message = QString("1^%1^%2^%3^%4^%5").arg(user).arg(accNumber).arg(fullName).arg(balance).arg(age);
    client->WriteData(message);
}


void MainWindow::on_viewdbPb_clicked()
{
    QString message = QString("2");
    client->WriteData(message);
}


void MainWindow::on_Deletepb_clicked()
{
    qint32 accNumber=ui->DeleteLe->text().toInt();
    QString message = QString("3^%1").arg(accNumber);
    client->WriteData(message);
}


void MainWindow::on_viewaccPb_clicked()
{
    QString user=ui->viewaccLe->text();
    QString message = QString("4^%1").arg(user);
    client->WriteData(message);
}


void MainWindow::on_LogoutPb_clicked()
{
    ui->userle->clear();
    ui->passle->clear();
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
}


void MainWindow::on_LogoutPb_2_clicked()
{
    ui->userle->clear();
    ui->passle->clear();
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
}


void MainWindow::on_viewaccBAdPb_clicked()
{
    QString accNum=ui->viewaccBLe->text();
    QString message = QString("5^%1").arg(accNum);
    client->WriteData(message);
}


void MainWindow::on_updatePb_clicked()
{
    QString user=ui->updateUserNameLe->text();
    int accNumber=ui->updateaccnumLe->text().toInt();
    QString fullName=ui->updatefullnameLe->text();
    int balance=ui->updateBalanceLe->text().toInt();
    int age=ui->updateageLe->text().toInt();


    if(user.isEmpty())
    {
        user=QString("#");
    }

    if(fullName.isEmpty())
    {
        fullName=QString("#");
    }



    QJsonObject newObject;
    newObject["fullname"] = fullName;
    newObject["Age"] = age;
    newObject["Accountnumber"] = accNumber;
    newObject["UserName"] = user;
    newObject["balance"] = balance;





    QJsonDocument jsonDoc(newObject);
    QByteArray byteArray = jsonDoc.toJson();
    QString array = QString::fromUtf8(byteArray);
    QString message = QString("6^"+array);
    client->WriteData(message);
}


void MainWindow::on_viewaccNUsPb_clicked()
{
    QString message = QString("7^%1").arg(currentUser);
    client->WriteData(message);

}


void MainWindow::on_viewaccBUsPb_clicked()
{
    QString message = QString("8^%1").arg(currentUser);
    client->WriteData(message);
}


void MainWindow::on_MakeTransPb_clicked()
{
    int amount = ui->MakeTransLe->text().toInt();
    QString message = QString("9^%1^%2").arg(currentUser).arg(amount);
    client->WriteData(message);
    ui->viewaccBUsLw->clear();
}


void MainWindow::on_MakeTransPb_2_clicked()
{
    int accNumber=ui->MakeTransLe_2->text().toInt();
    int recaccNumber=ui->MakeTransLe_3->text().toInt();
    int amount=ui->MakeTransLe_4->text().toInt();
    QString message = QString("10^%1^%2^%3^%4").arg(currentUser).arg(accNumber).arg(recaccNumber).arg(amount);
    client->WriteData(message);
    ui->viewaccBUsLw->clear();
}


void MainWindow::on_viewTransPb_clicked()
{
    int accNumber=ui->accNumTransLe->text().toInt();
    int NumOfTrans =ui->NumTransLe->text().toInt();
    QString message = QString("11^%1^%2^%3").arg(accNumber).arg(NumOfTrans).arg(currentUser);
    client->WriteData(message);
}


void MainWindow::on_viewTransPb_2_clicked()
{
    int accNumber=ui->accNumTransLe_2->text().toInt();
    int NumOfTrans =ui->NumTransLe_2->text().toInt();
    QString message = QString("12^%1^%2^%3").arg(accNumber).arg(NumOfTrans);
    client->WriteData(message);
}

