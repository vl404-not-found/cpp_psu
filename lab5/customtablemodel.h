#ifndef CUSTOMTABLEMODEL_H
#define CUSTOMTABLEMODEL_H

#include <QAbstractTableModel>

class CustomTableModel : public QAbstractTableModel
{

public:
    CustomTableModel(QList<QList<QString> > list, int cols, int rows);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

private:
    QList<QList<QString> > list;
    int cols;
    int rows;
};

#endif // CUSTOMTABLEMODEL_H
