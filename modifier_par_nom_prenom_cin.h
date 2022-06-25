#ifndef MODIFIER_PAR_NOM_PRENOM_CIN_H
#define MODIFIER_PAR_NOM_PRENOM_CIN_H

#include <QMainWindow>
#include "institution.h"
#include "employer.h"

namespace Ui {
class Modifier_par_Nom_Prenom_CIN;
}

class Modifier_par_Nom_Prenom_CIN : public QMainWindow
{
    Q_OBJECT

public:
    explicit Modifier_par_Nom_Prenom_CIN(QWidget *parent = nullptr,Institution *institution=nullptr);
    ~Modifier_par_Nom_Prenom_CIN();
    int recherche_nom(std::string  );
    int recherche_prenom(std::string  );
    int recherche_CIN(std::string  );
    int recherche_age(int );
    int recherche_salaire(int );

private slots:
    void on_pushButton_clicked();

private:
    Ui::Modifier_par_Nom_Prenom_CIN *ui;
    Institution* institution;
};

#endif // MODIFIER_PAR_NOM_PRENOM_CIN_H
