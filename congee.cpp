#include "congee.h"
#include "ui_congee.h"
#include <exception>
#include <QMessageBox>

Congee::Congee(QWidget *parent,Institution*institution) :
    QMainWindow(parent),
    ui(new Ui::Congee)
{
    ui->setupUi(this);
    this->institution=institution;
}

Congee::~Congee()
{
    delete ui;
}
int Congee::recherche_CIN(std::string c)
{
    int x=0;
    int k=1;
     while( x <= institution->get_nb())//Institution
     {
       if(institution->lista(x).get_CIN()!=c)
          {
            x++;
          }
          else
          {
              k=0;
              break;
          }
        }
     if(k==0) return x;
     else return -1;
}
void Congee::on_pushButton_clicked()
{
    int x=1;
    employer e;
    QString s1,s2;

    s1=ui->lineEdit->text();
    s2=ui->lineEdit_2->text();
    if(recherche_CIN(s1.toStdString())!=-1)
    {

        if(!e.congee()) {
        try{
            e.set_con(s2.toInt());
            } catch(const char* msg){    QMessageBox::information(this,"failed",msg); return ; x=0;     }
                         }
        else {  QMessageBox::information(this,"failed","Vous êtes déja en congé !"); return ; x=0; }
    }
    else {  QMessageBox::information(this,"failed","Verifié le CIN"); return ; x=0;}
    if(x)
    {
        QMessageBox::information(this,"succés","l'operation a effectué avec succés");
    }

}

