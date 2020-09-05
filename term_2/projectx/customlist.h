//
// Created by vlad on 27.05.2020.
//

#ifndef CPP_PSU_CUSTOMLIST_H
#define CPP_PSU_CUSTOMLIST_H


// TOV -- Type Of Vars.
template<typename TOV>
class Node {
public:
    Node(TOV, Node *, Node *);

    ~Node() {
        if (this->prev != nullptr && this->next != nullptr){
            auto *temp= this->prev;
            this->prev->next = this->next;
            this->next->prev = temp;
        } else if (this->prev == nullptr)
            this->next->prev = nullptr;
        else if (this->next == nullptr)
            this->prev->next = nullptr;
    };
    TOV *src;
    Node *prev = nullptr;
    Node *next = nullptr;
};

template<typename TOV>
class CustomList {
private:
    Node<TOV> *first = nullptr;
public:
    CustomList() : first(nullptr) {};

    ~CustomList() {
        Node<TOV> *temp = first, *t2;
        if (first != nullptr)
            while (temp->next != nullptr) {
                t2 = temp->next;
                delete temp;
                temp = t2;
            }
    }
    Node<TOV> *get_first();

    Node<TOV> *get_last();

    Node<TOV> *get(int);

    void push_end(TOV);

    int size();

    void delete_item(int);
};

template<typename TOV>
Node<TOV>::Node(TOV data, Node *prev, Node *next) {
    auto *temp = new TOV(data);
    this->src = temp;
    this->prev = prev;
    this->next = next;
    if (this->prev != nullptr)
        this->prev->next = this;
    if (this->next != nullptr)
        this->next->prev = this;
}

template<typename TOV>
Node<TOV> *CustomList<TOV>::get_last() {
    Node<TOV> *temp = first;
    if (temp == nullptr)
        return nullptr;
    else
        while (temp->next != nullptr)
            temp = temp->next;
    return temp;
}

template<typename TOV>
Node<TOV> *CustomList<TOV>::get_first() {
    return first;
}

template<typename TOV>
Node<TOV> *CustomList<TOV>::get(int counter) {
    int i = 0;
    if (counter == 0)
        return first;
    Node<TOV> *temp = first;
    if (counter >= this->size())
        return this->get_last();
    while (i < counter) {
        temp = temp->next;
        i++;
    }
    return temp;
}

template<typename TOV>
void CustomList<TOV>::push_end(TOV data) {
    Node<TOV> *temp;
    if (this->first == nullptr)
        temp = new Node<TOV>(data, nullptr, nullptr);
    else
        temp = new Node<TOV>(data, this->get_last(), nullptr);
    if (this->first == nullptr)
        this->first = temp;
}

template<typename TOV>
int CustomList<TOV>::size() {
    int i = 0;
    Node<TOV> *temp = this->first;
    if (temp != nullptr) {
        i++;
        while (temp->next != nullptr) {
            temp = temp->next;
            i++;
        }
    }
    return i;
}

template<typename TOV>
void CustomList<TOV>::delete_item(int num) {
    if (num == 0){
        auto *temp = this->first;
        this->first = this->first->next;
        delete temp;
    } else{
        delete this->get(num);
    }
}

#endif //CPP_PSU_CUSTOMLIST_H
