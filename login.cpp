#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

login::login(QWidget *parent,Institution*institution) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->institution=institution;
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{


    QString s1,s2;

    s1=ui->lineEdit->text();
    s2=ui->lineEdit_2->text();
            institution->loadInstitution(s1.toStdString(),s2.toStdString());
            int k= institution->loadInstitution(s1.toStdString(),s2.toStdString());
                    if(k==0){
            QMessageBox::information(this,"success","Login a effectué avec succé");
            }
            else if(k==1) {
                QMessageBox::information(this,"failed","Verifié le nom de l'utilisateur");
            return;
            }

            else if(k==2) {
                QMessageBox::information(this,"failed","Verifié le mot de passe");
            return;
            }
            else if(k==3) { ui->label_3->setVisible(true);
                QMessageBox::information(this,"failed","Verifié le nom de l'utilisateur et le mot de passe");
            return;
            }
}

