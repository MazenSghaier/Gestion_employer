#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "institution.h"

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr,Institution*institution=nullptr);
    ~login();

private slots:
    void on_pushButton_clicked();

private:
    Ui::login *ui;
    Institution*institution;
};

#endif // LOGIN_H
