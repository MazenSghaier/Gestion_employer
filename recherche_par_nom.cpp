#include "recherche_par_nom.h"
#include "ui_recherche_par_nom.h"
#include "QMessageBox"
Recherche_par_nom::Recherche_par_nom(QWidget *parent,Institution*institution) :
    QMainWindow(parent),
    ui(new Ui::Recherche_par_nom)
{
    ui->setupUi(this);
    this->institution=institution;
    model=new QStandardItemModel(20,5,this);

    QModelIndex index1=model->index(0,0,QModelIndex());
    model->setData(index1,"Nom");
    QModelIndex index2=model->index(0,1,QModelIndex());
    model->setData(index2,"Prenom");
    QModelIndex index3=model->index(0,2,QModelIndex());
    model->setData(index3,"CIN");
    QModelIndex index4=model->index(0,3,QModelIndex());
    model->setData(index4,"Age");
    QModelIndex index5=model->index(0,4,QModelIndex());
    model->setData(index5,"Salaire");
}

Recherche_par_nom::~Recherche_par_nom()
{
    delete ui;
}

int Recherche_par_nom::recherche_nom(std::string c)
{
    int x=0;
    int k=1;
     while( x <=institution->get_nb())//Institution
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
int Recherche_par_nom::recherche_prenom(std::string c)
{
    int x=0;
    int k=1;
     while( x <=institution->get_nb())//Institution
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
int Recherche_par_nom::recherche_CIN(std::string c)
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
int Recherche_par_nom::recherche(int c)
{
    int x=0;
    int k=1;
     while( x <=institution->get_nb())//Institution
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
int Recherche_par_nom::recherche(int c,int a)
{
    int x=0;
    int k=1;
     while( x <=institution->get_nb())//Institution
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
void Recherche_par_nom::on_pushButton_clicked()
{
    QString s1,s2,s3,s4,s5;
    employer e;
    s1=ui->lineEdit->text();
    s2=ui->lineEdit_2->text();
    s3=ui->lineEdit_3->text();
    s4=ui->lineEdit_4->text();
    s5=ui->lineEdit_5->text();



    if(ui->checkBox->isChecked())//Nom
    {

        e.set_nom(s1.toStdString());

        if(e.verifier_nom(s1.toStdString()))
        {
            int k;

                k=recherche_nom(s1.toStdString());
            if(k!=-1)
               {
                QString s = QString::fromStdString(institution->lista(k).get_nom());
                QModelIndex index0=model->index(1,0,QModelIndex());
                model->setData(index0,s);

                QString a = QString::fromStdString(institution->lista(k).get_prenom());
                QModelIndex index01=model->index(1,1,QModelIndex());
                model->setData(index01,a);

                QString cin = QString::fromStdString(institution->lista(k).get_CIN());
                QModelIndex index02=model->index(1,2,QModelIndex());
                model->setData(index02,cin);

                QString age = QString::number(institution->lista(k).get_age());
                QModelIndex index03=model->index(1,3,QModelIndex());
                model->setData(index03,age);

                QString salaire = QString::number(institution->lista(k).get_salaire());
                QModelIndex index04=model->index(1,4,QModelIndex());
                model->setData(index04,salaire);
                ui->tableView->setModel(model);


            QMessageBox::information(this,"succés","Recherche a effectué avec succée");  }

            else
             QMessageBox::information(this,"failed","l'employer n'existe pas");
        }
            else  QMessageBox::information(this,"failed","Verifier que c'est un nom");
    }


   if(ui->checkBox_2->isChecked())
    {

        e.set_prenom(s2.toStdString());
        if(e.verifier_prenom(s2.toStdString()))
        {
            int k=recherche_prenom(s2.toStdString());
            if(k!=-1)
               {
                QString s = QString::fromStdString(institution->lista(k).get_nom());
                QModelIndex index00=model->index(1,0,QModelIndex());
                model->setData(index00,s);

                QString a = QString::fromStdString(institution->lista(k).get_prenom());
                QModelIndex index010=model->index(1,1,QModelIndex());
                model->setData(index010,a);

                QString cin = QString::fromStdString(institution->lista(k).get_CIN());
                QModelIndex index020=model->index(1,2,QModelIndex());
                model->setData(index020,cin);

                QString age = QString::number(institution->lista(k).get_age());
                QModelIndex index030=model->index(1,3,QModelIndex());
                model->setData(index030,age);

                QString salaire = QString::number(institution->lista(k).get_salaire());
                QModelIndex index040=model->index(1,4,QModelIndex());
                model->setData(index040,salaire);
                ui->tableView->setModel(model);

            QMessageBox::information(this,"succés","Recherche a effectué avec succée");  }

            else
                QMessageBox::information(this,"failed","l'employer n'existe pas");
        }
            else QMessageBox::information(this,"failed","Verifier que c'est un prenom");
    }

     if(ui->checkBox_3->isChecked())
    {


        e.set_CIN(s3.toStdString());
        if(e.verifier_CIN(s3.toStdString()))
        {
            int k=recherche_CIN(s3.toStdString());
            if(k!=-1)
               {
                QString s = QString::fromStdString(institution->lista(k).get_nom());
                QModelIndex index20=model->index(1,0,QModelIndex());
                model->setData(index20,s);

                QString a = QString::fromStdString(institution->lista(k).get_prenom());
                QModelIndex index201=model->index(1,1,QModelIndex());
                model->setData(index201,a);

                QString cin = QString::fromStdString(institution->lista(k).get_CIN());
                QModelIndex index202=model->index(1,2,QModelIndex());
                model->setData(index202,cin);

                QString age = QString::number(institution->lista(k).get_age());
                QModelIndex index203=model->index(1,3,QModelIndex());
                model->setData(index203,age);

                QString salaire = QString::number(institution->lista(k).get_salaire());
                QModelIndex index204=model->index(1,4,QModelIndex());
                model->setData(index204,salaire);
                ui->tableView->setModel(model);

            QMessageBox::information(this,"succés","Recherche a effectué avec succée");  }

            else
                QMessageBox::information(this,"failed","l'employer  n'existe pas");
    }
        else QMessageBox::information(this,"failed","Verifier que c'est CIN");
  }

     if(ui->checkBox_5->isChecked())
    {

        e.set_age(s4.toInt());
        if(e.verifier_age(s4.toInt()))
        {
            int k=recherche(s4.toInt());
            if(k!=-1)
               {
                QString s = QString::fromStdString(institution->lista(k).get_nom());
                QModelIndex index30=model->index(1,0,QModelIndex());
                model->setData(index30,s);

                QString a = QString::fromStdString(institution->lista(k).get_prenom());
                QModelIndex index301=model->index(1,1,QModelIndex());
                model->setData(index301,a);

                QString cin = QString::fromStdString(institution->lista(k).get_CIN());
                QModelIndex index302=model->index(1,2,QModelIndex());
                model->setData(index302,cin);

                QString age = QString::number(institution->lista(k).get_age());
                QModelIndex index303=model->index(1,3,QModelIndex());
                model->setData(index303,age);

                QString salaire = QString::number(institution->lista(k).get_salaire());
                QModelIndex index304=model->index(1,4,QModelIndex());
                model->setData(index304,salaire);
                ui->tableView->setModel(model);

            QMessageBox::information(this,"succés","Recherche a effectué avec succée");  }

            else
                QMessageBox::information(this,"failed","l'employer n'existe pas");
        }
            else QMessageBox::information(this,"failed","Verifier que c'est un age");
    }
     if(ui->checkBox_4->isChecked())
    {
                  e.set_salaire(s5.toInt());
                if(e.verifier_salaire(s5.toInt()))
                {
                    int k=recherche(s5.toInt(),4);
                    if(k!=-1)
                       {
                        QString s = QString::fromStdString(institution->lista(k).get_nom());
                        QModelIndex index40=model->index(1,0,QModelIndex());
                        model->setData(index40,s);

                        QString a = QString::fromStdString(institution->lista(k).get_prenom());
                        QModelIndex index401=model->index(1,1,QModelIndex());
                        model->setData(index401,a);

                        QString cin = QString::fromStdString(institution->lista(k).get_CIN());
                        QModelIndex index402=model->index(1,2,QModelIndex());
                        model->setData(index402,cin);

                        QString age = QString::number(institution->lista(k).get_age());
                        QModelIndex index403=model->index(1,3,QModelIndex());
                        model->setData(index403,age);

                        QString salaire = QString::number(institution->lista(k).get_salaire());
                        QModelIndex index404=model->index(1,4,QModelIndex());
                        model->setData(index404,salaire);
                        ui->tableView->setModel(model);

                    QMessageBox::information(this,"succés","Recherche a effectué avec succée");  }

                    else
                        QMessageBox::information(this,"failed","l'employer n'existe pas");
                }
                    else QMessageBox::information(this,"failed","Verifier que c'est un salaire");
    }
}



