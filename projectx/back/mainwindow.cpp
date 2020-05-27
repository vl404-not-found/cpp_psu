//
// Created by vlad on 10.05.2020.
//

#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMainWindow>
#include <QGraphicsScene>
#include <QFileDialog>
#include <iostream>
#include "vertexgui.h"

static int randomBetween(int low, int high) {
    return (qrand() % ((high + 1) - low) + low);
}


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    this->resize(800, 800);
    this->setFixedSize(800, 800);

    Graph = new QGraphicsScene(this);
    Graph->setItemIndexMethod(QGraphicsScene::NoIndex);

    ui->graphicsView->setScene(Graph);  // Устанавливаем графическую сцену в graphicsView
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground); // Кэш фона
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);

    Graph->setSceneRect(0,0, ui->graphicsView->width()-2, ui->graphicsView->height()-2);

}

MainWindow::~MainWindow() {
    delete ui;

}

void MainWindow::on_addBtn_clicked() {
    std::cout<<"\nfirst point\n";
    auto *item = new Vertex(new VertexGui, initial->last());
    std::cout<<"second point\n";
    item->ui_element->setPos(randomBetween(30, Graph->width()-30),randomBetween(30, Graph->height()-30));
    std::cout<< item->ui_element->x();
    Graph->addItem(item->ui_element);
}

void MainWindow::on_deleteBtn_clicked() {

}

void MainWindow::on_update_clicked() {

}

void MainWindow::on_upload_clicked() {

}

void MainWindow::on_download_clicked() {

}
