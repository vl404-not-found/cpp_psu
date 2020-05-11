//
// Created by vlad on 10.05.2020.
//

#ifndef PROJECTX_EDGELIST_H
#define PROJECTX_EDGELIST_H


#include "vertex.h"

#pragma once
class Vertex;

class EdgeList {
public:
    Vertex *edge = nullptr;
    int size();
    EdgeList *get(int );
    EdgeList *first();
    EdgeList *push(Vertex *);
    EdgeList *last();
    void deleteList();
    ~EdgeList();
private:
    EdgeList *prev = nullptr;
    EdgeList *next = nullptr;
};


#endif //PROJECTX_EDGELIST_H
