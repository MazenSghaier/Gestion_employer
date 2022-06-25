#include "ajout_agent_de_labo.h"
#include "ui_ajout_agent_de_labo.h"
#include <QMessageBox>

Ajout_agent_de_labo::Ajout_agent_de_labo(QWidget *parent,Institution*institution) :
    QMainWindow(parent),
    ui(new Ui::Ajout_agent_de_labo)
{
    ui->setupUi(this);
    this->institution=institution;

}

Ajout_agent_de_labo::~Ajout_agent_de_labo()
{
    delete ui;
}
void Ajout_agent_de_labo::on_pushButton_clicked()
{
    ui->label_6->setVisible(false);
    ui->label_8->setVisible(false);
    ui->label_9->setVisible(false);
    ui->label_10->setVisible(false);
    ui->label_11->setVisible(false);

    employer e;
    QString s1,s2,s3,s4,s5;
    s1=ui->lineEdit_2->text();
    e.set_nom(s1.toStdString());
    if(!e.verifier_nom(s1.toStdString())) {     s1=ui->lineEdit_2->text();
        e.set_nom(s1.toStdString());  ui->label_6->setVisible(true);    ui->label_6->setText("Erreur !");
        QMessageBox::information(this,"failed","Verifier que c'est un nom");
    return ;}
      else {    ui->label_6->setVisible(true); ui->label_6->setText("Accepté"); }

    s2=ui->lineEdit_3->text();
    e.set_prenom(s2.toStdString());
    if(!e.verifier_prenom(s2.toStdString())) {       s2=ui->lineEdit_3->text();
        e.set_prenom(s2.toStdString()); ui->label_8->setVisible(true);  ui->label_8->setText("Erreur !");
        QMessageBox::information(this,"failed","Verifier que c'est un prenom"); return ;}
   else {    ui->label_8->setVisible(true); ui->label_8->setText("Accepté"); }

    s3=ui->lineEdit_4->text();
    e.set_CIN(s3.toStdString());
    if(!e.verifier_CIN(s3.toStdString())) {       s3=ui->lineEdit_4->text();
        e.set_CIN(s3.toStdString()); ui->label_9->setVisible(true); ui->label_9->setText("Erreur !");
    QMessageBox::information(this,"failed","Verifier que c'est un CIN"); return ;}
    else {    ui->label_9->setVisible(true); ui->label_9->setText("Accepté"); }

    s4=ui->lineEdit_5->text();
    e.set_age(s4.toInt());
    if(!e.verifier_age(s4.toInt())) {       s4=ui->lineEdit_5->text();
        e.set_age(s4.toInt()); ui->label_10->setVisible(true);  ui->label_10->setText("Erreur !");
    QMessageBox::information(this,"failed","Verifier que c'est un age"); return ;}
    else {    ui->label_10->setVisible(true); ui->label_10->setText("Accepté"); }

    s5=ui->lineEdit_6->text();
    e.set_salaire(s5.toInt());
    if(!e.verifier_salaire(s5.toInt())) {  s4=ui->lineEdit_6->text();
        e.set_age(s5.toInt()); ui->label_11->setVisible(true);  ui->label_11->setText("Erreur !");
    QMessageBox::information(this,"failed","Verifier que c'est un salaire"); return ;}
    ui->label_11->setVisible(true); ui->label_11->setText("Accepté");

    QMessageBox::information(this,"succées","L'employer a ajouté avec succé");

    Agent_de_labo a(e,30,4);
    institution->ajoute(a);

}
