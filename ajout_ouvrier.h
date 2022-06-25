#ifndef AJOUT_OUVRIER_H
#define AJOUT_OUVRIER_H
#include "employer.h"
#include <QMainWindow>
#include "institution.h"

namespace Ui {
class Ajout_ouvrier;
}

class Ajout_ouvrier : public QMainWindow ,public employer
{
    Q_OBJECT

public:
    explicit Ajout_ouvrier(QWidget *parent = nullptr,Institution *institution=nullptr);
    ~Ajout_ouvrier();
private :  Institution* institution;
    Ui::Ajout_ouvrier *ui;

private slots:
    void on_pushButton_clicked();

};

#endif // AJOUT_OUVRIER_H
