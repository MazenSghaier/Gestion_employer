#include "affichage.h"
#include "ui_affichage.h"
#include "QTextStream"



Affichage::Affichage(QWidget *parent,Institution*institution) :
    QMainWindow(parent),
    ui(new Ui::Affichage)
{
    ui->setupUi(this);
    this->institution=institution;

    model=new QStandardItemModel(20,5,this);
    model1=new QStandardItemModel(20,5,this);
    model2=new QStandardItemModel(20,5,this);
    model3=new QStandardItemModel(20,5,this);
    model4=new QStandardItemModel(20,5,this);
    model5=new QStandardItemModel(20,5,this);


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

    QModelIndex index10=model1->index(0,0,QModelIndex());
    model1->setData(index10,"Nom");
    QModelIndex index20=model1->index(0,1,QModelIndex());
    model1->setData(index20,"Prenom");
    QModelIndex index30=model1->index(0,2,QModelIndex());
    model1->setData(index30,"CIN");
    QModelIndex index40=model1->index(0,3,QModelIndex());
    model1->setData(index40,"Age");
    QModelIndex index50=model1->index(0,4,QModelIndex());
    model1->setData(index50,"Salaire");

    QModelIndex index11=model2->index(0,0,QModelIndex());
    model2->setData(index11,"Nom");
    QModelIndex index21=model2->index(0,1,QModelIndex());
    model2->setData(index21,"Prenom");
    QModelIndex index31=model2->index(0,2,QModelIndex());
    model2->setData(index31,"CIN");
    QModelIndex index41=model2->index(0,3,QModelIndex());
    model2->setData(index41,"Age");
    QModelIndex index51=model2->index(0,4,QModelIndex());
    model2->setData(index51,"Salaire");

    QModelIndex index12=model3->index(0,0,QModelIndex());
    model3->setData(index12,"Nom");
    QModelIndex index22=model3->index(0,1,QModelIndex());
    model3->setData(index22,"Prenom");
    QModelIndex index32=model3->index(0,2,QModelIndex());
    model3->setData(index32,"CIN");
    QModelIndex index42=model3->index(0,3,QModelIndex());
    model3->setData(index42,"Age");
    QModelIndex index52=model3->index(0,4,QModelIndex());
    model3->setData(index52,"Salaire");

    QModelIndex index13=model4->index(0,0,QModelIndex());
    model4->setData(index13,"Nom");
    QModelIndex index23=model4->index(0,1,QModelIndex());
    model4->setData(index23,"Prenom");
    QModelIndex index33=model4->index(0,2,QModelIndex());
    model4->setData(index33,"CIN");
    QModelIndex index43=model4->index(0,3,QModelIndex());
    model4->setData(index43,"Age");
    QModelIndex index53=model4->index(0,4,QModelIndex());
    model4->setData(index53,"Salaire");

    QModelIndex index14=model5->index(0,0,QModelIndex());
    model5->setData(index14,"Nom");
    QModelIndex index24=model5->index(0,1,QModelIndex());
    model5->setData(index24,"Prenom");
    QModelIndex index34=model5->index(0,2,QModelIndex());
    model5->setData(index34,"CIN");
    QModelIndex index44=model5->index(0,3,QModelIndex());
    model5->setData(index44,"Age");
    QModelIndex index54=model5->index(0,4,QModelIndex());
    model5->setData(index54,"Salaire");

    for(int i=1;i<=institution->get_nb();i++)
    {

            QString s = QString::fromStdString(institution->lista(i-1).get_nom());
            QModelIndex index0=model->index(i,0,QModelIndex());
            model->setData(index0,s);

            QString a = QString::fromStdString(institution->lista(i-1).get_prenom());
            QModelIndex index01=model->index(i,1,QModelIndex());
            model->setData(index01,a);

            QString cin = QString::fromStdString(institution->lista(i-1).get_CIN());
            QModelIndex index02=model->index(i,2,QModelIndex());
            model->setData(index02,cin);

            QString age = QString::number(institution->lista(i-1).get_age());
            QModelIndex index03=model->index(i,3,QModelIndex());
            model->setData(index03,age);

            QString salaire = QString::number(institution->lista(i-1).get_salaire());
            QModelIndex index04=model->index(i,4,QModelIndex());
            model->setData(index04,salaire);

      }



    for(int i=0;i<=institution->get_nb();i++)
    {

            QString s = QString::fromStdString(institution->lista(0).get_nom());
            QModelIndex index0=model1->index(1,0,QModelIndex());
            model1->setData(index0,s);

            QString a = QString::fromStdString(institution->lista(0).get_prenom());
            QModelIndex index01=model1->index(1,1,QModelIndex());
            model1->setData(index01,a);

            QString cin = QString::fromStdString(institution->lista(0).get_CIN());
            QModelIndex index02=model1->index(1,2,QModelIndex());
            model1->setData(index02,cin);

            QString age = QString::number(institution->lista(0).get_age());
            QModelIndex index03=model1->index(1,3,QModelIndex());
            model1->setData(index03,age);

            QString salaire = QString::number(institution->lista(0).get_salaire());
            QModelIndex index04=model1->index(1,4,QModelIndex());
            model1->setData(index04,salaire);


    }
    int j=1;
    for(int i=1;i<=institution->get_nb();i++)
    {

        if(institution->lista(i).get_rang()==2){
            QString s = QString::fromStdString(institution->lista(i).get_nom());
            QModelIndex index0=model2->index(j,0,QModelIndex());
            model2->setData(index0,s);

            QString a = QString::fromStdString(institution->lista(i).get_prenom());
            QModelIndex index01=model2->index(j,1,QModelIndex());
            model2->setData(index01,a);

            QString cin = QString::fromStdString(institution->lista(i).get_CIN());
            QModelIndex index02=model2->index(j,2,QModelIndex());
            model2->setData(index02,cin);

            QString age = QString::number(institution->lista(i).get_age());
            QModelIndex index03=model2->index(j,3,QModelIndex());
            model2->setData(index03,age);

            QString salaire = QString::number(institution->lista(i).get_salaire());
            QModelIndex index04=model2->index(j,4,QModelIndex());
            model2->setData(index04,salaire);
            j++;

        }
    }

    int k=1;
    for(int i=1;i<=institution->get_nb();i++)
    {

        if(institution->lista(i).get_rang()==3){
            QString s = QString::fromStdString(institution->lista(i).get_nom());
            QModelIndex index0=model3->index(k,0,QModelIndex());
            model3->setData(index0,s);

            QString a = QString::fromStdString(institution->lista(i).get_prenom());
            QModelIndex index01=model3->index(k,1,QModelIndex());
            model3->setData(index01,a);

            QString cin = QString::fromStdString(institution->lista(i).get_CIN());
            QModelIndex index02=model3->index(k,2,QModelIndex());
            model3->setData(index02,cin);

            QString age = QString::number(institution->lista(i).get_age());
            QModelIndex index03=model3->index(k,3,QModelIndex());
            model3->setData(index03,age);

            QString salaire = QString::number(institution->lista(i).get_salaire());
            QModelIndex index04=model3->index(k,4,QModelIndex());
            model3->setData(index04,salaire);
            k++;

        }
    }

    int l=1;
    for(int i=1;i<=institution->get_nb();i++)
    {

        if(institution->lista(i).get_rang()==4){
            QString s = QString::fromStdString(institution->lista(i).get_nom());
            QModelIndex index0=model4->index(l,0,QModelIndex());
            model4->setData(index0,s);

            QString a = QString::fromStdString(institution->lista(i).get_prenom());
            QModelIndex index01=model4->index(l,1,QModelIndex());
            model4->setData(index01,a);

            QString cin = QString::fromStdString(institution->lista(i).get_CIN());
            QModelIndex index02=model4->index(l,2,QModelIndex());
            model4->setData(index02,cin);

            QString age = QString::number(institution->lista(i).get_age());
            QModelIndex index03=model4->index(l,3,QModelIndex());
            model4->setData(index03,age);

            QString salaire = QString::number(institution->lista(i).get_salaire());
            QModelIndex index04=model4->index(l,4,QModelIndex());
            model4->setData(index04,salaire);
            l++;

        }
    }

    int m=1;
    for(int i=1;i<=institution->get_nb();i++)
    {

        if(institution->lista(i).get_rang()==5){
            QString s = QString::fromStdString(institution->lista(i).get_nom());
            QModelIndex index0=model5->index(m,0,QModelIndex());
            model5->setData(index0,s);

            QString a = QString::fromStdString(institution->lista(i).get_prenom());
            QModelIndex index01=model5->index(m,1,QModelIndex());
            model5->setData(index01,a);

            QString cin = QString::fromStdString(institution->lista(i).get_CIN());
            QModelIndex index02=model5->index(m,2,QModelIndex());
            model5->setData(index02,cin);

            QString age = QString::number(institution->lista(i).get_age());
            QModelIndex index03=model5->index(m,3,QModelIndex());
            model5->setData(index03,age);

            QString salaire = QString::number(institution->lista(i).get_salaire());
            QModelIndex index04=model5->index(m,4,QModelIndex());
            model5->setData(index04,salaire);
            m++;

        }
    }

        ui->tableView->setModel(model);
        ui->tableView_2->setModel(model1);
        ui->tableView_3->setModel(model2);
        ui->tableView_4->setModel(model3);
        ui->tableView_5->setModel(model4);
        ui->tableView_6->setModel(model5);

}

  QTextStream out(stdout);
Affichage::~Affichage()
{
    delete ui;
}

void Affichage::on_Employer_activated(const QModelIndex &index)
{

}


void Affichage::on_pushButton_clicked()
{

    ui->tabWidget->addTab(new QWidget(),QString ("Responsable").arg(ui->tabWidget->count()+1));
     ui->tabWidget->setCurrentIndex( ui->tabWidget->count()-1);



}


void Affichage::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

