#ifndef DIRECTEUR_H
#define DIRECTEUR_H
#include "employer.h"

class Directeur : public employer
{
    public:
        Directeur (){};
         int restant(int );
         Directeur(employer & ,int ,int );

         int verif_conge_A();
         void set_con(int);
    protected:

    private:

};


#endif // DIRECTEUR_H
