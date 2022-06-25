#ifndef AJOUT_AGENT_LABO_H
#define AJOUT_AGENT_LABO_H

#include <QMainWindow>

namespace Ui {
class Ajout_institution;
}

class Ajout_institution : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ajout_institution(QWidget *parent = nullptr);
    ~Ajout_institution();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Ajout_institution *ui;
};

#endif // AJOUT_AGENT_LABO_H
