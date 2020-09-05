//
// Created by vlad on 27.02.2020.
//

#include <iostream>
#include "lab3.h"

void fill_struct(communicate *item, int N){
    for (int n = 0; n < N; n++) {
        std::cout << "\nType: ";
        std::cin >> item[n].type_of_com;
        std::cout << "Radius: ";
        std::cin >> item[n].radius;
        std::cout << "Price: ";
        std::cin >> item[n].price;
    }
}

