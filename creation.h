#ifndef CREATION_H
#define CREATION_H
#include "institution.h"
#include <QMainWindow>
#include <directeur.h>

namespace Ui {
class Creation;
}

class Creation : public QMainWindow
{
    Q_OBJECT

public:
    explicit Creation(QWidget *parent = nullptr,Institution *institution=nullptr);
    ~Creation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Creation *ui;
    Institution *institution;
};

#endif // CREATION_H
