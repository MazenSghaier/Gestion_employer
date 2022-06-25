#ifndef ENREGISTRE_H
#define ENREGISTRE_H

#include "institution.h"
#include <QMainWindow>

namespace Ui {
class Enregistre;
}

class Enregistre : public QMainWindow
{
    Q_OBJECT

public:
    explicit Enregistre(QWidget *parent = nullptr,Institution*institution=nullptr);
    ~Enregistre();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Enregistre *ui;
    Institution*institution;
};

#endif // ENREGISTRE_H
