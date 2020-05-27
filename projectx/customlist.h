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

//    ~Node() {
//        if (this->prev != nullptr && this->next != nullptr){
//            this->prev->next = this->next;
//            this->next->prev = this->prev;
//        } else if (this->prev == nullptr){
//            this->next->prev = nullptr;
//        } else
//            this->prev->next = nullptr;
//    };
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

//    ~CustomList() {
//        Node<TOV> *temp = first, *t2;
//        if (first != nullptr)
//            while (temp->next != nullptr) {
//                t2 = temp->next;
//                delete temp;
//                temp = t2;
//            }
//    }
    Node<TOV> *get_first();
    Node<TOV> *get_last();
    Node<TOV> *get(int);
    void push_end(TOV);
    int size();
};


#endif //CPP_PSU_CUSTOMLIST_H
