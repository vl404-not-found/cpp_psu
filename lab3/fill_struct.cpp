//
// Created by vlad on 27.02.2020.
//

#include <iostream>
#include "main.h"

void fill_struct(communicate *item, int N){
    for (int n = 0; n < N; n++) {
        std::cout << "\nТип: ";
        std::cin >> item[n].type_of_com;
        std::cout << "Радиус действия: ";
        std::cin >> item[n].radius;
        std::cout << "Цена одной минуты связи: ";
        std::cin >> item[n].price;
    }
}
