//
// Created by vlad on 20.02.2020.
//

#include <iostream>
#include "main.h"
#include "../lib/lib.h"

std::string lab2() {
    std::cout << "Введите кол-во символов: ";
    int n = 0;
    std::cin >> n;
    int *main_array = new int[n];
    int *slave_array = new int[n];


    array_fill(main_array, n);

    form(main_array, n, slave_array);
    array_print(slave_array, n);
    int first_result = mean(main_array, n);
    int second_result = mean(slave_array, n);
    std::cout << first_result << "\n" << second_result;
    return "Ok";
}
