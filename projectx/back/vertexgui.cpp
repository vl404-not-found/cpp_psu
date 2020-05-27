//
// Created by vlad on 10.05.2020.
//

#include "vertexgui.h"

VertexGui::VertexGui(QObject *parent) : QObject(parent) , QGraphicsItem(){}

QRectF VertexGui::boundingRect() const {
    return QRectF(-30, -30, 60, 60);
}

void VertexGui::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void VertexGui::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    this->setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);
}

void VertexGui::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    this->setPos(mapToScene(event->pos()));
}

void VertexGui::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->setPen(Qt::black);
    painter->setBrush(Qt::green);
    painter->drawRect(-30,-30,60,60);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

VertexGui::~VertexGui() = default;
