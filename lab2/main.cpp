//
// Created by vlad on 20.02.2020.
//

#include <iostream>
#include "main.h"
#include "../lib/lib.h"

std::string lab2() {
    std::cout <<"Введите кол-во символов: ";
    int n = 0;
    std::cin >> n;
    int *main_array = new int[n];


    array_fill(main_array, n);


    array_print(main_array, n);
    return "Ok";
}
