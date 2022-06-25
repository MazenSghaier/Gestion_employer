#ifndef CONGEE_H
#define CONGEE_H

#include <QMainWindow>
#include "institution.h"

namespace Ui {
class Congee;
}

class Congee : public QMainWindow
{
    Q_OBJECT

public:
    explicit Congee(QWidget *parent = nullptr,Institution*institution= nullptr);
    ~Congee();
    int recherche_CIN(std::string );

private slots:
    void on_pushButton_clicked();

private:
    Ui::Congee *ui;
    Institution*institution;
};

#endif // CONGEE_H
