#ifndef INSTITUTION_H
#define INSTITUTION_H

#include "agent_de_labo.h"
#include "emp_responsable.h"
#include "emp_technicien.h"
#include "ouvrier.h"
#include "directeur.h"
#include <QTextStream>
#include <QCoreApplication>
#include <QFile>
#include <QTextStream>

 using namespace std;
 class Institution{
   protected :
   int capacite=20;
   int nb=0;
   std::string user;
   std::string mot;
   employer liste[20];
   public :
   Institution (){};
   /*Institution(int );*/
   int verif_taille(int);
   int vide_tab();
   void ajoute(employer);
   void modifier_nom();
   void modifier_prenom();
   void modifier_CIN();
   void modifier_age();
   void modifier_salaire();
   void modifier_conge();
   void supprimer(int);
   void modif_nom(std::string,int );
   void modif_prenom(std::string,int);
   void modif_CIN(std::string,int);
   void modif_age(int,int);
   void modif_salaire(int,int);
   int recherche_nom1(std::string);
   int recherche_prenom1(std::string);
   std::string get_mot();
   void set_mot(std::string);
   std::string get_user();
   void set_user(std::string);
   int get_nb();
   int get_capacite();
   void set_nb(int);
   void afficher();
   employer lista(int );
   int nb_e();
   int fich_vide();
   int loadInstitution(std::string  ,std::string );
   void saveInstitution();
   friend void parse(string Line,string *,string * ,string *,int *,int *,int *,int*);
   friend void parsepa(string Line,int*,int*,string *,string * );
};

#endif // INSTITUTION_H
