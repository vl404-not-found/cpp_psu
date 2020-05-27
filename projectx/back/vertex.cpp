//
// Created by vlad on 10.05.2020.
//

#include <iostream>


void Vertex::matrixIncidenceToSpecificState(Vertex * first, int ** array, int size) {
    //TODO: Сделать нормально перевод из матрицы.

    first->deleteAll();
    Vertex *temp = nullptr;

    for (int i = 0; i < size; i++)
        temp = new Vertex(new VertexGui, temp);


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i][j] > 0)
                temp->list->add_link(temp->get(j));
        }
    }
}

int Vertex::size() {
    Vertex *temp = this->first();
    int i = 0;
    if (temp == nullptr)
        return i;
    while (temp->next != nullptr){
        temp = temp->next;
        i++;
    }
    return i;
}

Vertex::Vertex(Vertex *prev) {
    std::cout << "\ncout здесь 1\n";
    this->ui_element = new VertexGui();
    std::cout << "cout здесь 2\n";
    this->list = new EdgeList(this, nullptr);
    std::cout << "cout здесь 3\n";
    this->prev = prev;
    if (prev != nullptr)
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
