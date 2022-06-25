#ifndef LISTE_CONGE_H
#define LISTE_CONGE_H

#include "institution.h"
#include <QStandardItemModel>
#include <QMainWindow>

namespace Ui {
class liste_conge;
}

class liste_conge : public QMainWindow
{
    Q_OBJECT

public:
    explicit liste_conge(QWidget *parent = nullptr,Institution*institution= nullptr);
    ~liste_conge();

private:
    Ui::liste_conge *ui;
    Institution*institution;

    QStandardItemModel *model;
};

#endif // LISTE_CONGE_H
