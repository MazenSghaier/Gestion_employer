#ifndef RECHERCHE_PAR_NOM_H
#define RECHERCHE_PAR_NOM_H

#include <QMainWindow>
#include "institution.h"
#include <QStandardItemModel>

namespace Ui {
class Recherche_par_nom;
}

class Recherche_par_nom : public QMainWindow
{
    Q_OBJECT

public:
    explicit Recherche_par_nom(QWidget *parent = nullptr,Institution*institution=nullptr);
    int recherche_CIN(std::string);
    ~Recherche_par_nom();
    int recherche_nom(std::string );
    int recherche_prenom(std::string );
    int recherche(int );
    int recherche(int,int);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Recherche_par_nom *ui;
    Institution* institution;
    QStandardItemModel *model;
};

#endif // RECHERCHE_PAR_NOM_H
