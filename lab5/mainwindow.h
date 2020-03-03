#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include "customtablemodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct book{
     int id;
     QString name;
     QString author;
     QString year;
     book *next;
 };
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_add_clicked();

    void on_btn_delete_clicked();

private:
    int iter_item = 0;
    Ui::MainWindow *ui;
    book *first;
    book *frst;

    CustomTableModel tmodel;
};





#endif // MAINWINDOW_H
