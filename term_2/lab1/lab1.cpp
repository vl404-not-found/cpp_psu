//
// Created by vlad on 28.03.2020.
//

#include <iostream>

using namespace std;

std::string lab1() {
    string str_w_p;
    cout << "Insert string" << std::endl;
    cin >> str_w_p;
    while(str_w_p.find('+') > 0 && str_w_p.find('+') < str_w_p.length())
        str_w_p.replace(str_w_p.find('+'), 1, "");

    cout << str_w_p;

    return "\nok";
}
