#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <QDialog>

namespace Ui {
class userinterface;
}

class userinterface : public QDialog
{
    Q_OBJECT

public:
    explicit userinterface(QWidget *parent = nullptr);
    ~userinterface();

private:
    Ui::userinterface *ui;
};

#endif // USERINTERFACE_H
