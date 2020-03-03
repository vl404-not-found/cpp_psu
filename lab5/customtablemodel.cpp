#include "customtablemodel.h"

//const int ROWS = 100;
const int COLS = 3;

CustomTableModel::CustomTableModel(QObject *parent)
    : QAbstractTableModel(parent)
{
//    dataset.push_back({QString(""),QString(""),QString("")});
        for (auto i = 0; i < 1000; i++) {
//            QString pref = QString("%1").arg(i);
//            int suff = 1;
            dataset.push_back({"", "", ""});
        }
}

QVariant CustomTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (orientation == Qt::Vertical) return QVariant(section);

    static QList<QString> headers = {"name","author","year"};

    if (role == Qt::DisplayRole && section < COLS){
        return headers[section];
    }

    return QVariant();
}

int CustomTableModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return dataset.length();
//    return ROWS;
}

int CustomTableModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return COLS;
}

QVariant CustomTableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (role == Qt::DisplayRole) {
      auto row = index.row();
      auto col = index.column();

      return dataset[row][col];
    }
    return QVariant();
}
