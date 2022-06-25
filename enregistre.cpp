#include "enregistre.h"
#include "ui_enregistre.h"
#include <QMessageBox>

Enregistre::Enregistre(QWidget *parent,Institution*institution) :
    QMainWindow(parent),
    ui(new Ui::Enregistre)
{
    ui->setupUi(this);
    this->institution=institution;
}

Enregistre::~Enregistre()
{
    delete ui;
}

void Enregistre::on_pushButton_clicked()
{
    ui->label_2->setVisible(false);

    QString s1;

    s1=ui->lineEdit->text();

    if(institution->get_mot()==s1.toStdString())
    {
        institution->saveInstitution();
        QMessageBox::information(this,"succés","l'enregistrement a effectué avec succée");  }
    else  {
    QMessageBox::information(this,"failed","verifie le mot de passe"); ui->label_2->setVisible(true); ui->label_2->setText("Erreur !");
        return ; }
}

