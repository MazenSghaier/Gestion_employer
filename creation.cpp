#include "creation.h"
#include "ui_creation.h"
#include <QMessageBox>

Directeur d;
Creation::Creation(QWidget *parent,Institution*institution) :
    QMainWindow(parent),
    ui(new Ui::Creation)
{
    ui->setupUi(this);
    this->institution=institution;
}

Creation::~Creation()
{
    delete ui;
}
void Creation::on_pushButton_clicked()
{
    ui->l1->setVisible(false);
    ui->l2->setVisible(false);
    ui->l3->setVisible(false);
    ui->l4->setVisible(false);
    ui->l5->setVisible(false);
    ui->l6->setVisible(false);
    ui->l7->setVisible(false);
    ui->l8->setVisible(false);

    employer e;
    QString s1,s2,s3,s4,s5,s0,s10,s100;

    s0=ui->ll->text();
    s10=ui->lineEdit_mot->text();
    s100=ui->lineEdit_employer->text();

    institution->set_user(s0.toStdString());ui->l1->setText("Accepté");
    institution->set_mot(s10.toStdString());ui->l2->setText("Accepté");


    s1=ui->lineEdit_nom->text();
    e.set_nom(s1.toStdString());
    if(!e.verifier_nom(s1.toStdString())) {     s1=ui->lineEdit_nom->text();
        e.set_nom(s1.toStdString());  ui->l3->setVisible(true);    ui->l3->setText("Erreur !");
        QMessageBox::information(this,"failed","Verifier que c'est un nom");
    return ;}
      else {    ui->l3->setVisible(true); ui->l3->setText("Accepté"); }

    s2=ui->lineEdit_prenom->text();
    e.set_prenom(s2.toStdString());
    if(!e.verifier_prenom(s2.toStdString())) {       s2=ui->lineEdit_prenom->text();
        e.set_prenom(s2.toStdString()); ui->l4->setVisible(true);  ui->l4->setText("Erreur !");
        QMessageBox::information(this,"failed","Verifier que c'est un prenom"); return ;}
   else {    ui->l4->setVisible(true); ui->l4->setText("Accepté"); }

    s3=ui->lineEdit_cin->text();
    e.set_CIN(s3.toStdString());
    if(!e.verifier_CIN(s3.toStdString())) {       s3=ui->lineEdit_cin->text();
        e.set_CIN(s3.toStdString()); ui->l5->setVisible(true); ui->l5->setText("Erreur !");
    QMessageBox::information(this,"failed","Verifier que c'est un CIN"); return ;}
    else {    ui->l5->setVisible(true); ui->l5->setText("Accepté"); }

    s4=ui->lineEdit_age->text();
    e.set_age(s4.toInt());
    if(!e.verifier_age(s4.toInt())) {       s4=ui->lineEdit_age->text();
        e.set_age(s4.toInt()); ui->l6->setVisible(true);  ui->l6->setText("Erreur !");
    QMessageBox::information(this,"failed","Verifier que c'est un age"); return ;}
    else {    ui->l6->setVisible(true); ui->l6->setText("Accepté"); }

    s5=ui->lineEdit_sal->text();
    e.set_salaire(s5.toInt());
    if(!e.verifier_salaire(s5.toInt())) {  s4=ui->lineEdit_sal->text();
        e.set_age(s5.toInt()); ui->l7->setVisible(true);  ui->l7->setText("Erreur !");
    QMessageBox::information(this,"failed","Verifier que c'est un salaire"); return ;}
    ui->l7->setVisible(true); ui->l7->setText("Accepté");

    if(!institution->verif_taille(s100.toInt())) {   ui->l8->setVisible(true);  ui->l8->setText("Erreur !");
    QMessageBox::information(this,"failed","Verifier la nombre des employer"); return ;}

    ui->l8->setVisible(true); ui->l8->setText("Accepté");


    Directeur d(e,45,1);
    institution->ajoute(e);

    QMessageBox::information(this,"succées","Creation a effectué avec succé");


}
