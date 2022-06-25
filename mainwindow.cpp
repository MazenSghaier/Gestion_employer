#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QPixmap>

Institution *institution;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    institution=new Institution();
    //QPixmap pix("C:/Users/Mazen Sghaier/Documents/build-Sghaier-Desktop_Qt_6_2_2_MinGW_64_bit-Debug/a.png");
    //ui->label->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*void MainWindow::ON_pushButton_Clicked
{
    QMessageBox::about(this,"MY Title", "Message");

}*/

void MainWindow::on_actionAjouter_un_Ouvrier_triggered()
{
    Ajout_ouvrier *a=new Ajout_ouvrier(this,institution);
    a->show();

}


void MainWindow::on_actionAjouter_un_Responsable_triggered()
{
     Responsable *a=new Responsable(this,institution);
     a->show();
}


void MainWindow::on_actionAjouter_un_Technicien_triggered()
{
    Technicien *t=new Technicien(this,institution);
    t->show();
}


void MainWindow::on_actionCree_une_institution_triggered()
{
        Creation *a=new Creation(this,institution);
        a->show();
}


void MainWindow::on_actionRechercher_par_le_nom_triggered()
{
        Recherche_par_nom *a=new Recherche_par_nom(this,institution);
        a->show();
}


void MainWindow::on_actionAjouter_un_Agent_de_laboratoire_triggered()
{
    Ajout_agent_de_labo *a=new Ajout_agent_de_labo(this,institution);
    a->show();
}


void MainWindow::on_actionSupprimer_par_Nom_triggered()
{
       Supprimer_par_Nom *a=new Supprimer_par_Nom(this,institution);
       a->show();
}

void MainWindow::on_actionModifier_par_Nom_Prenom_CIN_triggered()
{
       Modifier_par_Nom_Prenom_CIN *a=new Modifier_par_Nom_Prenom_CIN(this,institution);
       a->show();
}


void MainWindow::on_actionLog_in_triggered()
{
    login*a=new login(this,institution);
    a->show();
}


void MainWindow::on_actionAffiche_la_liste_des_employer_triggered()
{
    Affichage *a=new Affichage(this,institution);
    a->show();
}


void MainWindow::on_actionPrendre_un_cong_e_triggered()
{
   Congee*a=new Congee(this,institution);
   a->show();
}


void MainWindow::on_actionEnregistr_e_triggered()
{
    Enregistre*a=new Enregistre(this,institution);
    a->show();
}


void MainWindow::on_actionListe_des_employes_en_cong_e_triggered()
{
    liste_conge*a=new liste_conge(this,institution);
    a->show();
}

