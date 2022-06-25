#ifndef TECHNICIEN_H
#define TECHNICIEN_H
#include "employer.h"
#include <QMainWindow>
#include "institution.h"
#include "emp_technicien.h"


namespace Ui {
class Technicien;
}

class Technicien : public QMainWindow
{
    Q_OBJECT

public:

    void restant_t(int );
    void ajoute_Tech();

    explicit Technicien(QWidget *parent = nullptr,Institution *institution=nullptr);
    ~Technicien();

private slots:
    void on_pushButton_clicked();

private:

    Ui::Technicien *ui;
    Institution* institution;
};

#endif // TECHNICIEN_H
