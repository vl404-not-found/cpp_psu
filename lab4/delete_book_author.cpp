//
// Created by vlad on 28.02.2020.
//

#include <string>
#include <iostream>
#include "main.h"

void delete_book_author(book * address, std::string author){

    while (address->next != nullptr){
        if (address->author == author){
            book * conn = address->next->next;
            delete address->next;
            address->next = conn;
        }
    }
}
