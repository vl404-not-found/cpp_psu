//
// Created by vlad on 29.02.2020.
//

#include <iostream>
#include "main.h"

void print_all(book * address){
    while (address != nullptr) {
        std::cout << "\nИмя: ";
        std::cin >> address->name;
        std::cout << "Автор: ";
        std::cin >> address->author;
        std::cout << "Год: ";
        std::cin >> address->year;
        address = address->next;
    }
}
