//
// Created by vlad on 27.02.2020.
//

#include <iostream>
#include "lab3.h"

void print_struct(communicate *item, int N){
    for (int n = 0; n < N; n++) {
        std::cout << "\nType: " << item[n].type_of_com << std::endl;
        std::cout << "Radius: " << item[n].radius << std::endl;
        std::cout << "Price: " << item[n].price << std::endl;
    }
};