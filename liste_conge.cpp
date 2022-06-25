#include "liste_conge.h"
#include "ui_liste_conge.h"
#include "QTextStream"


liste_conge::liste_conge(QWidget *parent,Institution*institution) :
    QMainWindow(parent),
    ui(new Ui::liste_conge)
{
    ui->setupUi(this);
    this->institution=institution;

    model=new QStandardItemModel(20,6,this);

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
    QModelIndex index6=model->index(0,5,QModelIndex());
    model->setData(index6,"Nombre de jours restant");

    int x=0;
    for(int i=0;i<=institution->get_nb();i++)
    {
            if(institution->lista(i).congee()==true){
            QString s = QString::fromStdString(institution->lista(i).get_nom());
            QModelIndex index0=model->index(x,0,QModelIndex());
            model->setData(index0,s);

            QString a = QString::fromStdString(institution->lista(i).get_prenom());
            QModelIndex index01=model->index(x,1,QModelIndex());
            model->setData(index01,a);

            QString cin = QString::fromStdString(institution->lista(i).get_CIN());
            QModelIndex index02=model->index(x,2,QModelIndex());
            model->setData(index02,cin);

            QString age = QString::number(institution->lista(i).get_age());
            QModelIndex index03=model->index(x,3,QModelIndex());
            model->setData(index03,age);

            QString salaire = QString::number(institution->lista(i).get_salaire());
            QModelIndex index04=model->index(x,4,QModelIndex());
            model->setData(index04,salaire);

            QString nb = QString::number(institution->lista(i).get_nb_con());
            QModelIndex index05=model->index(x,5,QModelIndex());
            model->setData(index05,nb);
            x++;
            }

      }
    ui->tableView->setModel(model);
}

liste_conge::~liste_conge()
{
    delete ui;
}
