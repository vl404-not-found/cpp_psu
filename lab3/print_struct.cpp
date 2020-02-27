//
// Created by vlad on 27.02.2020.
//

#include <iostream>
#include "main.h"

void print_struct(communicate *item, int N){
    for (int n = 0; n < N; n++) {
        std::cout << "\nТип: " << item[n].type_of_com << std::endl;
        std::cout << "Радиус действия: " << item[n].radius << std::endl;
        std::cout << "Цена одной минуты связи: " << item[n].price << std::endl;
    }
};