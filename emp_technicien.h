#ifndef EMP_TECHNICIEN_H
#define EMP_TECHNICIEN_H



#include "employer.h"


using namespace std;
class Emp_Technicien: public employer
{
  public:
      Emp_Technicien(){};
      Emp_Technicien(employer &,int ,int );
      int restant(int );
      void ajoute_Tech();
      int verif_conge_A();
      void set_con(int);
  protected:

  private:
      int t=0;
      Emp_Technicien *liste_tech;

};

#endif // EMP_TECHNICIEN_H
