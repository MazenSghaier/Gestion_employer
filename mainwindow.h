#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "liste_conge.h"
#include "congee.h"
#include "enregistre.h"
#include "login.h"
#include "affichage.h"
#include "creation.h"
#include "institution.h"
#include "ajout_agent_de_labo.h"
#include "ajout_ouvrier.h"
#include "technicien.h"
#include "responsable.h"
#include "supprimer_par_nom.h"
#include "modifier_par_nom_prenom_cin.h"
#include "recherche_par_nom.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAjouter_un_Agent_de_laboratoire_triggered();

    void on_actionAjouter_un_Ouvrier_triggered();

    void on_actionAjouter_un_Responsable_triggered();

    void on_actionAjouter_un_Technicien_triggered();

    void on_actionCree_une_institution_triggered();

    void on_actionRechercher_par_le_nom_triggered();

    void on_actionSupprimer_par_Nom_triggered();

    void on_actionModifier_par_Nom_Prenom_CIN_triggered();

    void on_actionLog_in_triggered();

    void on_actionAffiche_la_liste_des_employer_triggered();

    void on_actionPrendre_un_cong_e_triggered();

    void on_actionEnregistr_e_triggered();

    void on_actionListe_des_employes_en_cong_e_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
