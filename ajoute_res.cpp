#include "ajoute_res.h"

Ajoute_res::Ajoute_res(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant Ajoute_res::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex Ajoute_res::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex Ajoute_res::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int Ajoute_res::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int Ajoute_res::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant Ajoute_res::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
