#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QList<QList<QString> > Matrix;
    short int tableCols;
    short int tableRows;
    short int currIndex;

public:
    MainWindow(QWidget *parent = nullptr);

    void createDefaultTableView();
    void createTableView();
    void setDefaultMatrix();
    void errorMessage();
    ~MainWindow();

private slots:
    void on_btn_add_clicked();

    void on_btn_delete_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
