#ifndef AGENT_DE_LABO_H
#define AGENT_DE_LABO_H
#include "employer.h"

class Agent_de_labo : public employer
{
public:
    Agent_de_labo(employer &,int,int);
    int restant(int );
    void ajoute_agent();
    int verif_conge_A();
    void set_con(int);
private :
    Agent_de_labo *liste_agent;



};

#endif // AGENT_DE_LABO_H
