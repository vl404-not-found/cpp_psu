//
// Created by vlad on 28.02.2020.
//

#include <string>
#include "lab4.h"

void delete_book_author(book * address, const std::string& author){
    while (address->next != nullptr){
        if (address->author == author){
            book * conn = address->next->next;
            delete address->next;
            address->next = conn;
        }
    }
}
