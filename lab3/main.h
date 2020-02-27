//
// Created by vlad on 27.02.2020.
//

#ifndef CPP_PSU_MAIN_H
#define CPP_PSU_MAIN_H

#include <string>

struct communicate{
    std::string type_of_com;
    int radius;
    int price;
};

std::string lab3();
void fill_struct(communicate *, int);
void print_struct(communicate *, int);


#endif //CPP_PSU_MAIN_H
