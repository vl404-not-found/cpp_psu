//
// Created by vlad on 28.05.2020.
//

#include "Vertex.h"
#include "mainwindow.h"

Vertex::Vertex(QObject *parent) : QObject(parent), QGraphicsItem() {}

QRectF Vertex::boundingRect() const {
    return QRectF(-30, -30, 60, 60);
}

void Vertex::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void Vertex::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    this->setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);
}

void Vertex::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    this->setPos(mapToScene(event->pos()));
}

void Vertex::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
//    painter->drawText();
    painter->setPen(Qt::black);
    painter->setBrush(Qt::green);
    painter->drawRect(-30, -30, 60, 60);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

Vertex::~Vertex() = default;