//
// Created by vlad on 28.02.2020.
//

#include <iostream>
#include "main.h"

void fill_link_struct(book *address){
    bool continue_var = true;
    while (continue_var) {
        std::cout << "\nИмя: ";
        std::cin >> address->name;
        std::cout << "Автор: ";
        std::cin >> address->author;
        std::cout << "Год: ";
        std::cin >> address->year;

        std::cout << "Продолжить вводить книги(0/1)? \n";
        std::cin >> continue_var;
        if (continue_var){
            book *new_item = new book;
            address->next = new_item;
            address = new_item;
        } else
            address->next = nullptr;
    }
}