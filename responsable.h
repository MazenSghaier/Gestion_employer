#ifndef RESPONSABLE_H
#define RESPONSABLE_H

#include <QMainWindow>
#include "employer.h"
#include "institution.h"
#include "emp_responsable.h"


namespace Ui {
class Responsable;
}

class Responsable : public QMainWindow
{
    Q_OBJECT

public:

    void restant_r(int );
    void ajoute_Res();

    explicit Responsable(QWidget *parent = nullptr,Institution *institution=nullptr);
    ~Responsable();
private :
    int res=0;
    Ui::Responsable *ui;
    Institution* institution;

private slots:
    void on_pushButton_clicked();


};

#endif // RESPONSABLE_H
