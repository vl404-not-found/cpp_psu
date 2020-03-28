//
// Created by vlad on 28.02.2020.
//

#include <iostream>
#include "lab3.h"

int max_radius(communicate *item, int N){
    int result = item[0].price;
    for (int n = 0; n < N; n++) {
        if (result < item[n].price)
            result = item[n].price;
    }
    return result;
}

