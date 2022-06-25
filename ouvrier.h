#ifndef OUVRIER_H
#define OUVRIER_H
#include <employer.h>
#include "ouvrier.h"

class Ouvrier : public employer
{
    public:
        Ouvrier(employer &,int ,int );
        int restant(int );
        void ajoute_ouv();
        int verif_conge_A();
        void set_con(int);
    protected:

    private:
    int o=0;
    Ouvrier *liste_ouv;
};


#endif // OUVRIER_H
