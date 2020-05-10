//
// Created by vlad on 10.05.2020.
//

#include "vertex.h"

Vertex *Vertex::first() {
    Vertex *temp = this;
    if(temp != nullptr)
        while(temp->prev != nullptr)
            temp = this->prev;
    else
        return nullptr;
    return temp;
}

Vertex *Vertex::last() {
    Vertex *temp = this;
    if(temp != nullptr)
        while(temp->next != nullptr)
            temp = this->next;
    else
        return nullptr;
    return temp;
}

Vertex *Vertex::get(int num) {
    Vertex *temp = this->first();
    if (this->size() < num)
        return nullptr;
    for (int i = 0; i < num; i++) {
        temp = temp->next;
    }
    return temp;
}

Vertex::~Vertex() {
    this->list->deleteList();
    this->next->prev = this->prev;
    this->prev->next = this->next;
}

void Vertex::matrixIncidenceToSpecificState(Vertex * first, int ** array, int num) {
    //TODO: Сделать нормально перевод из матрицы.
}

int Vertex::size() {
    Vertex *temp = this->first();
    int i = 0;
    while (temp->next != nullptr){
        temp = temp->next;
        i++;
    }
    return i;
}

Vertex::Vertex(VertexGui *ui_el, Vertex *prev) {
    this->ui_element = ui_el;
    this->list = new EdgeList();
    this->prev = prev;
    this->prev->next = this;
}

void Vertex::deleteAll() {
    Vertex *temp = this->first();
    Vertex *next_v = temp->next;
    while (next_v != nullptr){
        delete temp;
        temp = next_v;
    }
}
