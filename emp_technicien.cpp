#include "emp_technicien.h"

Emp_Technicien::Emp_Technicien(employer &a,int c,int r)
{
    nom=a.get_nom();
    prenom=a.get_prenom();
    CIN=a.get_CIN();
    age=a.get_age();
    salaire=a.get_salaire();
    nb_con=c;
    rang=r;

}
/*-----------------------------------------------------------------------------*/
int Emp_Technicien :: restant(int j)
{
    if(nb_con-j>=0)
    {
         return 0;
    }
    else return -1;

}
/*-----------------------------------------------------------------------------*/
int Emp_Technicien ::verif_conge_A()
{
        if(nb_con==0)    return 0;
        else    return 1;


}
/*-----------------------------------------------------------------------------*/
void Emp_Technicien ::set_con(int c)
{
    int r =restant(c);
    int a =verif_conge_A();
    if(r!=-1&&a!=0)
    {
        nb_con=nb_con-c;
        conge=true;
    }

}
/*-----------------------------------------------------------------------------*/
