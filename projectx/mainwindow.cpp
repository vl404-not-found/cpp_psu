//
// Created by vlad on 10.05.2020.
//

#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMainWindow>
#include <QGraphicsScene>
#include <QFileDialog>
#include <iostream>

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
    Graph->setSceneRect(0, 0, ui->graphicsView->width() - 2, ui->graphicsView->height() - 2);

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_addBtn_clicked() {
    auto *item_pos = new QPointF(randomBetween(30, Graph->width() - 30), randomBetween(30, Graph->height() - 30));
    auto *temp = new CustomList<int>();
    this->Flist->push_end(*temp);
    auto *rect = new Vertex();
    rect->setPos(*item_pos);
//    rect->addText();
    rect->data(this->Flist->size());
    list_points.append(rect);
    QVariant s = list_points.size();
    auto *txt = new QGraphicsSimpleTextItem(s.toString(), rect);
    Graph->addItem(rect);
}

void MainWindow::on_deleteBtn_clicked() {
    int j = 0;
    for (int i = 0; i < Flist->size(); ++i)
        if (Flist->get(j)->src->size() > Flist->get(i)->src->size())
            j = i;
    for (int i = 0; i < Flist->size(); ++i)
        for (int k = 0; k < Flist->get(i)->src->size(); ++k)
            if (j == *Flist->get(i)->src->get(k)->src)
                Flist->get(i)->src->delete_item(k);
    Flist->delete_item(j);
    this->updateLines();
}

void MainWindow::on_update_clicked() {
    int i = ui->head->toPlainText().toInt()-1, j = ui->toHead->toPlainText().toInt()-1;
    auto t1 = list_points.at(i);
    auto t2 = list_points.at(j);
    Graph->addLine(t1->x(),
                   t1->y(),
                   t2->x(),
                   t2->y(),
                   Qt::DashLine);
    this->Flist->get(i)->src->push_end(j);
}

void MainWindow::on_upload_clicked() {

}

void MainWindow::on_download_clicked() {

}

void MainWindow::updateLines() {
    int i = 0;
    Graph->clear();
    list_points.clear();
    while (i < Flist->size()) {
        auto *rect = new Vertex();
        auto *item_pos = new QPointF(randomBetween(30, Graph->width() - 30), randomBetween(30, Graph->height() - 30));
        rect->setPos(*item_pos);
        list_points.append(rect);
        QVariant s = list_points.size();
        auto *txt = new QGraphicsSimpleTextItem(s.toString(), rect);
        Graph->addItem(rect);
        i++;
    }
    for (int k = 0; k < Flist->size(); ++k) {
        auto p1 = list_points.at(k);
        for (int j = 0; j < Flist->get(k)->src->size(); ++j) {
            auto p2 = list_points.at(*Flist->get(k)->src->get(j)->src);
            Graph->addLine(p1->x(),
                           p1->y(),
                           p2->x(),
                           p2->y(),
                           Qt::DashLine);
        }
    }
}

void MainWindow::on_upAllBtn_clicked() {
    this->updateLines();
}
