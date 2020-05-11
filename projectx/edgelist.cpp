//
// Created by vlad on 10.05.2020.
//

#include "edgelist.h"

int EdgeList::size() {
    EdgeList *temp = this->first();
    int i = 0;
    while (temp->next != nullptr){
        temp = temp->next;
        i++;
    }
    return i;
}

EdgeList *EdgeList::get(int num) {
    EdgeList *temp = this->first();
    if (this->size() < num)
        return nullptr;
    for (int i = 0; i < num; i++) {
        temp = temp->next;
    }
    return temp;
}

EdgeList *EdgeList::first() {
    EdgeList *temp = this;
    if(temp != nullptr)
        while(temp->prev != nullptr)
            temp = this->prev;
    else
        return nullptr;
    return temp;
}

EdgeList *EdgeList::last() {
    EdgeList *temp = this;
    if(temp != nullptr)
        while(temp->next != nullptr)
            temp = this->next;
    else
        return nullptr;
    return temp;
}

EdgeList::~EdgeList() {
    this->next->prev = this->prev;
    this->prev->next = this->next;
}

void EdgeList::deleteList() {
    EdgeList *temp = this->first();
    EdgeList *next_v = temp->next;
    while (next_v != nullptr){
        delete temp;
        temp = next_v;
    }
}

EdgeList *EdgeList::push(Vertex *edge) {
//    EdgeList *temp = new ()
    return nullptr;
}
