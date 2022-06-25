#include "ajout_agent_labo.h"
#include "ui_ajout_agent_labo.h"

Ajout_institution::Ajout_institution(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ajout_institution)
{
    ui->setupUi(this);
}

Ajout_institution::~Ajout_institution()
{
    delete ui;
}

void Ajout_institution::on_pushButton_clicked()
{
   QString s1,s2,s3,s4,s5;
   s1=ui->line
}

