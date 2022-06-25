#ifndef AFFICHAGE_H
#define AFFICHAGE_H
#include "institution.h"
#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class Affichage;
}

class Affichage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Affichage(QWidget *parent = nullptr,Institution*institution= nullptr);
    ~Affichage();

private slots:
    void on_Employer_activated(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_tabWidget_tabCloseRequested(int index);

private:
    Ui::Affichage *ui;
    Institution*institution;

    QStandardItemModel *model;
    QStandardItemModel *model1;
    QStandardItemModel *model2;
    QStandardItemModel *model3;
    QStandardItemModel *model4;
    QStandardItemModel *model5;
};

#endif // AFFICHAGE_H
