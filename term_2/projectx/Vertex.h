//
// Created by vlad on 28.05.2020.
//

#ifndef CPP_PSU_VERTEX_H
#define CPP_PSU_VERTEX_H


#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>
#include <QtWidgets/QMainWindow>
//#include "mainwindow.h"

class Vertex : public QObject, public QGraphicsItem {
Q_OBJECT
public:
    explicit Vertex(QObject *parent = nullptr);
    ~Vertex();
private:
    QRectF boundingRect() const override;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;

    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;

};


#endif //CPP_PSU_VERTEX_H
