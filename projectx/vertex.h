//
// Created by vlad on 10.05.2020.
//

#ifndef PROJECTX_VERTEX_H
#define PROJECTX_VERTEX_H


#include "vertexgui.h"
#include "edgelist.h"

#pragma once
class EdgeList;

class Vertex {

public:
    explicit Vertex(VertexGui*, Vertex *);
    ~Vertex();
    void deleteAll();
    int size();
    Vertex *get(int );
    Vertex *first();
    Vertex *last();
    VertexGui *ui_element = nullptr;
    static void matrixIncidenceToSpecificState(Vertex *, int **,int);
private:
    EdgeList *list = nullptr;
    Vertex *prev = nullptr;
    Vertex *next = nullptr;
};


#endif //PROJECTX_VERTEX_H
