//
// Created by vlad on 10.05.2020.
//
#ifndef PROJECTX_VERTEXGUI_H
#define PROJECTX_VERTEXGUI_H


#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>

class VertexGui : public QObject, public QGraphicsItem{
    Q_OBJECT
public:
    explicit VertexGui(QObject *parent = nullptr);
    ~VertexGui() override;

private:
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;

};


#endif //PROJECTX_VERTEXGUI_H
