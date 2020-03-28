//
// Created by vlad on 27.02.2020.
//

#include "lab3.h"

int mean_price(communicate *item, int N){
    int result = 0;
    for (int n = 0; n < N; n++)
        result += item[n].price;
    return result/N*60;
}
