//
// Created by vlad on 27.02.2020.
//

#include <string>
#include <iostream>
#include "main.h"

std::string lab3() {

    communicate *item;
    int N;
    std::cout << "Полей будет: ";
    std::cin >> N;
    item = new communicate[N];

    fill_struct(item, N);
    print_struct(item, N);
    std::cout << "Здесь будет ответ: ";
    std::cout << "Средняя стоимость одного часа связи: " << mean_price(item, N);
    std::cout << "Средство связи с максимальным радиусом действия: " << max_radius(item, N);
    delete[]item;
    return "Ok";
}
