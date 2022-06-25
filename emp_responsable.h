#ifndef EMP_RESPONSABLE_H
#define EMP_RESPONSABLE_H


#include "employer.h"



 using namespace std;
class Emp_responsable : public employer
{
    public:
        Emp_responsable(){};
        Emp_responsable(employer &,int ,int );
        int restant(int );
        void ajoute_Res();
        int verif_conge_A();
        void set_con(int);
    protected:

    private:
    Emp_responsable *liste_res;
    int r=0;
};
#endif // EMP_RESPONSABLE_H
