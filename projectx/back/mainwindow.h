//
// Created by vlad on 10.05.2020.
//
#ifndef PROJECTX_MAINWINDOW_H
#define PROJECTX_MAINWINDOW_H

#include <QMainWindow>

#include <QWidget>
#include <QGraphicsScene>
#include "vertex.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addBtn_clicked();

    void on_deleteBtn_clicked();

    void on_update_clicked();

    void on_upload_clicked();

    void on_download_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *Graph = nullptr;
    Vertex *initial = new Vertex(new VertexGui, nullptr);
};


#endif //PROJECTX_MAINWINDOW_H
