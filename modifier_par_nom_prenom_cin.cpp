#include "modifier_par_nom_prenom_cin.h"
#include "ui_modifier_par_nom_prenom_cin.h"
#include <QMessageBox>
Modifier_par_Nom_Prenom_CIN::Modifier_par_Nom_Prenom_CIN(QWidget *parent,Institution*institution) :
    QMainWindow(parent),
    ui(new Ui::Modifier_par_Nom_Prenom_CIN)
{
    ui->setupUi(this);
    this->institution=institution;
}

Modifier_par_Nom_Prenom_CIN::~Modifier_par_Nom_Prenom_CIN()
{
    delete ui;
}

int Modifier_par_Nom_Prenom_CIN::recherche_nom(std::string c)
{
    int x=0;
    int k=1;
     while( x <institution->get_capacite())//Institution
     {
       if(institution->lista(x).get_nom()!=c)
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
int Modifier_par_Nom_Prenom_CIN::recherche_prenom(std::string c)
{
    int x=0;
    int k=1;
     while( x <institution->get_capacite())//Institution
     {
       if(institution->lista(x).get_prenom()!=c)
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
int Modifier_par_Nom_Prenom_CIN::recherche_CIN(std::string c)
{
    int x=0;
    int k=1;
     while( x < institution->get_capacite())//Institution
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
int Modifier_par_Nom_Prenom_CIN::recherche_age(int c)
{
    int x=0;
    int k=1;
     while( x <institution->get_capacite())//Institution
     {
       if(institution->lista(x).get_age()!=c)
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
int Modifier_par_Nom_Prenom_CIN::recherche_salaire(int c)
{
    int x=0;
    int k=1;
     while( x <institution->get_capacite())//Institution
     {
       if(institution->lista(x).get_salaire()!=c)
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

void Modifier_par_Nom_Prenom_CIN::on_pushButton_clicked()
{
    QString s1,s2,s3,s7,s5,s6;
    employer e;
    s1=ui->lineEdit_6->text();
    s2=ui->lineEdit->text();
    s3=ui->lineEdit_2->text();
    s7=ui->lineEdit_3->text();
    s5=ui->lineEdit_4->text();
    s6=ui->lineEdit_5->text();


    e.set_CIN(s1.toStdString());
    if(!e.verifier_CIN(s1.toStdString())) QMessageBox::information(this,"failed","Verifier l'employer");

    else{

    if(ui->radioButton->isChecked())//Nom
    {   ui->label_2->setVisible(false);
        ui->label_3->setVisible(false);
        ui->radioButton_3->setVisible(false);
        ui->radioButton_4->setVisible(false);
        ui->radioButton_5->setVisible(false);
        ui->radioButton_6->setVisible(false);
        ui->lineEdit_2->setVisible(false);
        ui->lineEdit_3->setVisible(false);
        ui->lineEdit_4->setVisible(false);
        ui->lineEdit_5->setVisible(false);
        ui->lineEdit_6->setVisible(false);
        ui->label->setText("Donner le nouveau nom ");

        e.set_nom(s2.toStdString());
        if(e.verifier_nom(s2.toStdString()))
        {
            int k=recherche_CIN(s1.toStdString());
            if(k!=-1)
               { institution->modif_nom(s2.toStdString(),k);
            QMessageBox::information(this,"succés","le nom a modifié avec succée");  }

            else
             QMessageBox::information(this,"failed","l'employer n'existe pas");
        }
            else  QMessageBox::information(this,"failed","Verifier que c'est un nom");

    }

    else if(ui->radioButton_3->isChecked())
    {
        ui->label_2->setVisible(false);
                ui->label_3->setVisible(false);
                ui->radioButton->setVisible(false);
                ui->radioButton_4->setVisible(false);
                ui->radioButton_5->setVisible(false);
                ui->radioButton_6->setVisible(false);
                ui->lineEdit->setVisible(false);
                ui->lineEdit_3->setVisible(false);
                ui->lineEdit_4->setVisible(false);
                ui->lineEdit_5->setVisible(false);
                ui->lineEdit_6->setVisible(false);
        ui->label->setText("Donner le nouveau prénom ");

        e.set_prenom(s3.toStdString());
        if(e.verifier_prenom(s3.toStdString()))
        {
            int k=recherche_CIN(s1.toStdString());
            if(k!=-1)
               { institution->modif_prenom(s3.toStdString(),k);
            QMessageBox::information(this,"succés","le prenom a modifié avec succée");  }

            else
                QMessageBox::information(this,"failed","l'employer n'existe pas");
        }
            else QMessageBox::information(this,"failed","Verifier que c'est un prenom");
    }

    else if(ui->radioButton_4->isChecked())
    {     ui->label_2->setVisible(false);
        ui->label_3->setVisible(false);
        ui->radioButton_3->setVisible(false);
        ui->radioButton->setVisible(false);
        ui->radioButton_5->setVisible(false);
        ui->radioButton_6->setVisible(false);
        ui->lineEdit_2->setVisible(false);
        ui->lineEdit->setVisible(false);
        ui->lineEdit_4->setVisible(false);
        ui->lineEdit_5->setVisible(false);
        ui->lineEdit_6->setVisible(false);
        ui->label->setText("Donner le nouveau CIN "); 

        e.set_CIN(s7.toStdString());
        if(e.verifier_CIN(s7.toStdString()))
        {
            int k=recherche_CIN(s1.toStdString());
            if(k!=-1)
               { institution->modif_CIN(s7.toStdString(),k);
            QMessageBox::information(this,"succés","le CIN a modifié avec succée");  }

            else
                QMessageBox::information(this,"failed","l'employer  n'existe pas");
    }
        else QMessageBox::information(this,"failed","Verifier que c'est CIN");
  }

    else if(ui->radioButton_5->isChecked())
    {   ui->label_2->setVisible(false);
        ui->label_3->setVisible(false);
        ui->radioButton_3->setVisible(false);
        ui->radioButton_4->setVisible(false);
        ui->radioButton->setVisible(false);
        ui->radioButton_6->setVisible(false);
        ui->lineEdit_2->setVisible(false);
        ui->lineEdit_3->setVisible(false);
        ui->lineEdit->setVisible(false);
        ui->lineEdit_5->setVisible(false);
        ui->lineEdit_6->setVisible(false);
        ui->label->setText("Donner le nouveau age ");
        e.set_age(s5.toInt());
        if(!e.verifier_age(s5.toInt()))
        {
            int k=recherche_CIN(s1.toStdString());
            if(k!=-1)
               { institution->modif_age(s5.toInt(),k);
            QMessageBox::information(this,"succés","l'age a modifié avec succée");  }

            else
                QMessageBox::information(this,"failed","l'employer n'existe pas");
        }
            else QMessageBox::information(this,"failed","Verifier que c'est un age");
    }
    else if(ui->radioButton_6->isChecked())
    {
        ui->label_2->setVisible(false);
                ui->label_3->setVisible(false);
                ui->radioButton_3->setVisible(false);
                ui->radioButton_4->setVisible(false);
                ui->radioButton_5->setVisible(false);
                ui->radioButton->setVisible(false);
                ui->lineEdit_2->setVisible(false);
                ui->lineEdit_3->setVisible(false);
                ui->lineEdit_4->setVisible(false);
                ui->lineEdit->setVisible(false);
                ui->lineEdit_6->setVisible(false);
                ui->label->setText("Donner le nouveau salaire ");
                e.set_salaire(s6.toInt());
                if(e.verifier_salaire(s6.toInt()))
                {
                    int k=recherche_CIN(s1.toStdString());
                    if(k!=-1)
                       { institution->modif_salaire(s6.toInt(),k);
                    QMessageBox::information(this,"succés","le salaire a modifié avec succée");  }

                    else
                        QMessageBox::information(this,"failed","l'employer n'existe pas");
                }
                    else QMessageBox::information(this,"failed","Verifier que c'est un salaire");
    }
}

}


