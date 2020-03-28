//
// Created by vlad on 27.02.2020.
//

#include <string>
#include <iostream>
#include "lab3.h"

std::string lab3() {

    communicate *item;
    int N;
    std::cout << "Number of fields: ";
    std::cin >> N;
    item = new communicate[N];

    fill_struct(item, N);
    print_struct(item, N);
    std::cout << "Answer: ";
    std::cout << "Average cost per hour of communication: " << mean_price(item, N);
    std::cout << "Means of communication with the maximum range: " << max_radius(item, N);
    delete[]item;
    return "\nOk";
}
