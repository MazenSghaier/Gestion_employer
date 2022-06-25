#include "supprimer_par_nom.h"
#include "ui_supprimer_par_nom.h"
#include <QMessageBox>

Supprimer_par_Nom::Supprimer_par_Nom(QWidget *parent,Institution*institution) :
    QMainWindow(parent),
    ui(new Ui::Supprimer_par_Nom)
{
    ui->setupUi(this);
    this->institution=institution;
}

Supprimer_par_Nom::~Supprimer_par_Nom()
{
    delete ui;
}

int Supprimer_par_Nom::recherche(std::string c)
{
    int x=0;
    int k=1;
     while( x <=institution->get_nb())//Institution
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

void Supprimer_par_Nom :: supprimer(int x)
{

     if(x!=-1)
   {
     institution->supprimer(x);
     int c=institution->get_nb()-1;
     institution->set_nb(c);
   }
}
void Supprimer_par_Nom::on_pushButton_clicked()
{
    QString s1;
    employer e;
    s1=ui->lineEdit->text();
    e.get_CIN()=s1.toStdString();
    if(institution->vide_tab()!=0)
    {

     if (!e.verifier_CIN(s1.toStdString()))
     {
         QMessageBox::information(this,"failure","Supprimer n' a pas effectué : Veuillez verifier le CIN ");
     }
     else {
         if(recherche(s1.toStdString())==-1) QMessageBox::information(this,"failure","l'employer n'existe pas");

         else   {

                    supprimer(recherche(s1.toStdString()));
                    QMessageBox::information(this,"succées","Supprimer a  effectué ");
         }

     }
    }
    else
    QMessageBox::information(this,"failure","Supprimer n' a pas effectué : tableau vide ");

}

