#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <fstream>
#include <iostream>
#include <locale>

 using namespace std;

 class employer{
 protected :
 std::string nom ;
 std::string prenom;
 std::string CIN;
 int age;
 int salaire;
 int nb_con=0;
 bool conge=false;
 int rang;

 public :
 employer(){};
 employer(std::string , std::string ,std::string,int,int,int );
 int verifier_nom(std::string );
 int verifier_prenom(std::string );
 int verifier_CIN(std::string );
 int verifier_age(int );
 int verifier_salaire(int );
 int verifier_congee(int);
 void affiche();
 void ajoute();
 std::string get_nom();
 std::string get_prenom();
 std::string get_CIN();
 int get_age();
 int get_salaire();
 int get_nb_con();
 int get_rang();
 void set_nom(std::string);
 void set_prenom(std::string);
 void set_age(int);
 void set_salaire(int);
 void set_CIN(std::string);
 void set_nb_con(int);
 int congee();
 virtual void set_con(int c);
 virtual int restant(int c);
 virtual int verif_conge_A();

};



#endif // EMPLOYER_H
