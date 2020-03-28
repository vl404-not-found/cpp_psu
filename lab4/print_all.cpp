//
// Created by vlad on 29.02.2020.
//

#include <iostream>
#include "lab4.h"

void print_all(book * address){
    while (address != nullptr) {
        std::cout << "\nName: ";
        std::cin >> address->name;
        std::cout << "Author: ";
        std::cin >> address->author;
        std::cout << "Year: ";
        std::cin >> address->year;
        address = address->next;
    }
}
