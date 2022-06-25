#ifndef SUPPRIMER_PAR_NOM_H
#define SUPPRIMER_PAR_NOM_H

#include "institution.h"
#include <QMainWindow>

namespace Ui {
class Supprimer_par_Nom;
}

class Supprimer_par_Nom : public QMainWindow
{
    Q_OBJECT

public:
    explicit Supprimer_par_Nom(QWidget *parent = nullptr,Institution*institution=nullptr);
    ~Supprimer_par_Nom();
    void supprimer(int);
    int recherche(std::string c );

private slots:

    void on_pushButton_clicked();

private:
    Ui::Supprimer_par_Nom *ui;
    Institution*institution;
};

#endif // SUPPRIMER_PAR_NOM_H
