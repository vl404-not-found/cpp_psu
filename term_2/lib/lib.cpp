//
// Created by vlad on 20.02.2020.
//

#include "lib.h"
#include <iostream>
using namespace std;

void array_fill(int* M, int n) {
    for(int i = 0; i < n; i++) {
        cout << "M[" << i << "] : ";
        cin >> M[i];
    }
}

void array_print(int* M, int n) {
    for(int i = 0; i < n; i++) {
        cout << M[i]<< " ";
    }
    cout << endl;
}