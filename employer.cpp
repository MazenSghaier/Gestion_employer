#include "employer.h"
#include <exception>

employer::employer(std::string n, std::string p,std::string c ,int a,int s,int e)
{
     nom = n;
     prenom =p;
     CIN=c;
     age=a;
     salaire=s;
     nb_con=e;

}
/*-----------------------------------------------------------------------------*/
 int employer::verifier_nom(std::string n)
 {
     locale loc;
     int k=1;
 for (std::string::iterator it=n.begin(); it!=n.end(); ++it)
  {
    if (!std::isalpha(*it,loc))
       {
          k=0;
       }
  }
    if(k)    return 1;
    else return 0;

 }
 /*-----------------------------------------------------------------------------*/
 int employer::verifier_prenom(std::string p)
 {
 locale loc;
     int k=1;
 for (std::string::iterator it=p.begin(); it!=p.end(); ++it)
  {
    if (!std::isalpha(*it,loc))
       {
          k=0;
       }
  }
    if(k)    return 1;
    else return 0;
 }
/*-----------------------------------------------------------------------------*/
 int employer:: verifier_CIN(std::string c)
 {
    if(c.length()!=8)
        return 0;
    else return 1;
 }
 /*-----------------------------------------------------------------------------*/
 int employer::verifier_age(int a)
 {
   if(a<=18||a>65)
   {
       return 0;
   }
   else
    return 1;
 }
 /*-----------------------------------------------------------------------------*/
 int employer:: verifier_salaire(int s)
 {
     if(s<=500||s>=5000)
     {   return 0;
     }
     else return 1;


 }
 /*-----------------------------------------------------------------------------*/
 int employer:: verifier_congee(int nb)
 { 
     if(nb>=1&&nb<=nb_con)      return 1;
     else  return 0;
 }
 /*-----------------------------------------------------------------------------*/
 void employer:: affiche(){
 cout << nom << ":" << prenom << ":" << CIN << ":" << age << ":" <<salaire << "\n"; }
 /*-----------------------------------------------------------------------------*/
 void employer :: ajoute(){
    cout<<"Donner le nom de L'emloyer : ";
    cin>>nom;
    cout<<"Donner le prenom : ";
    cin>>prenom;
    cout<<"Donner la CIN : ";
    cin>>CIN;
    try {
        cout<<"Donner le Age : ";
    cin>>age;
    } catch(const char* msg) { cerr << msg <<endl;}
    try {
        cout<<"Donner la Salaire : ";
    cin>>salaire;
    } catch(const char* msg) { cerr << msg <<endl;}
    cout<<"Donner le nombre de jours de conge : ";
    cin>>nb_con;


 }
 /*-----------------------------------------------------------------------------*/
 string employer:: get_nom(){
 return nom;
 }
 /*-----------------------------------------------------------------------------*/
 string employer:: get_prenom(){
 return prenom;
 }
 /*-----------------------------------------------------------------------------*/
 std::string employer:: get_CIN(){
 return CIN;
 }
 /*-----------------------------------------------------------------------------*/
 int employer:: get_age(){
 return age;
 }
 /*-----------------------------------------------------------------------------*/
 int employer:: get_salaire(){
 return salaire;
 }
 /*-----------------------------------------------------------------------------*/
 int employer::get_nb_con()
 {
     return nb_con;
 }
 /*-----------------------------------------------------------------------------*/
 int employer::get_rang()
 {
     return rang;
 }
  /*-----------------------------------------------------------------------------*/
 void employer:: set_nom(std::string n){
        nom =n;
 }
 /*-----------------------------------------------------------------------------*/
 void employer:: set_prenom(std::string p){
        prenom=p;
 }
 /*-----------------------------------------------------------------------------*/
 void employer:: set_CIN(std::string c){
        CIN=c;
 }
 /*-----------------------------------------------------------------------------*/
 void employer:: set_age(int a){
        age=a;
 }
 /*-----------------------------------------------------------------------------*/
 void employer:: set_salaire(int s){
        salaire=s;
 }
/*-----------------------------------------------------------------------------*/
void employer:: set_nb_con(int s)
{
    nb_con=s;
}
/*-----------------------------------------------------------------------------*/
int employer :: congee()
{
    if(conge==true) return 1;
    else return 0;

}
/*-----------------------------------------------------------------------------*/
int employer :: restant(int j)
{
    int k=nb_con-j;
    if(k>=0)
    {
         return 1;
    }
    else return -1;

}
/*-----------------------------------------------------------------------------*/
int employer ::verif_conge_A()
{
        if(nb_con==0)    return 0;
        else    return 1;


}
/*-----------------------------------------------------------------------------*/
void employer ::set_con(int c)
{
    int r =restant(c);
    int a =verif_conge_A();
    if(r!=-1&&a!=0)
    {
        nb_con=nb_con-c;
        conge=true;
    }
    else if (r!=-1 && a==0)   throw" Nombre des jours de congé = 0 ! ";
    else throw " Verifié le nombre de jours de congés !";

}
/**********************************************************************************/

