#ifndef AJOUT_AGENT_DE_LABO_H
#define AJOUT_AGENT_DE_LABO_H
#include "employer.h"
#include <QMainWindow>
#include "institution.h"
#include "agent_de_labo.h"

namespace Ui {
class Ajout_agent_de_labo;
}

class Ajout_agent_de_labo : public QMainWindow
{
    Q_OBJECT

public:

       explicit Ajout_agent_de_labo(QWidget *parent = nullptr,Institution *institution=nullptr);
    ~Ajout_agent_de_labo();

private slots:
    void on_pushButton_clicked();

private:
    Institution* institution;
    Ui::Ajout_agent_de_labo *ui;

};

#endif // AJOUT_AGENT_DE_LABO_H
