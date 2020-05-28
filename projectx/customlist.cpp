//
// Created by vlad on 27.05.2020.
//

#include "customlist.h"


//template<typename TOV>
//Node<TOV>::Node(TOV data, Node *prev, Node *next) {
//    auto *temp = new TOV(data);
//    this->src = temp;
//    this->prev = prev;
//    this->next = next;
//    if (this->prev != nullptr)
//        this->prev->next = this;
//    if (this->next != nullptr)
//        this->next->prev = this;
//}
//
//template<typename TOV>
//Node<TOV> *CustomList<TOV>::get_last() {
//    Node<TOV> *temp = first;
//    if (temp == nullptr)
//        return nullptr;
//    else
//        while (temp->next != nullptr)
//            temp = temp->next;
//    return temp;
//}
//
//template<typename TOV>
//Node<TOV> *CustomList<TOV>::get_first() {
//    return first;
//}
//
//template<typename TOV>
//Node<TOV> *CustomList<TOV>::get(int counter) {
//    int i = 0;
//    if (counter == 0)
//        return first;
//    Node<TOV> *temp = first;
//    if (counter >= this->size())
//        return this->get_last();
//    while (i < counter) {
//        temp = temp->next;
//        i++;
//    }
//    return temp;
//}
//
//template<typename TOV>
//void CustomList<TOV>::push_end(TOV data) {
//    Node<TOV> *temp;
//    if (this->first == nullptr)
//        temp = new Node<TOV>(data, nullptr, nullptr);
//    else
//        temp = new Node<TOV>(data, this->get_last(), nullptr);
//    if (this->first == nullptr)
//        this->first = temp;
//}
//
//template<typename TOV>
//int CustomList<TOV>::size() {
//    int i = 0;
//    Node<TOV> *temp = this->first;
//    if (temp != nullptr)
//        while (temp->next != nullptr) {
//            temp = temp->next;
//            i++;
//        }
//    return i;
//}