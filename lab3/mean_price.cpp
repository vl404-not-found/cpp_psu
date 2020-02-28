//
// Created by vlad on 27.02.2020.
//

#include "main.h"

int mean_price(communicate *item, int N){
    int result = 0;
    for (int n = 0; n < N; n++)
        result += item[n].price;
    return result/N*60;
}
