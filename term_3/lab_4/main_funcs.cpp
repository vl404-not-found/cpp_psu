//
// Created by vlad on 06.09.2020.
//

#include <cmath>
#include <iostream>
#include "lab_4.h"
//#include "vector"

void main_lab() {
    auto listEmp = new vector<Employee>;
    int num = 0;
    while (true) {
        cout << "Команды :" << endl << "добавить пользователя -- 1" << endl << "пересчёт зп -- 2" << endl << "вывод всех сотрудников -- 3" << endl;
        cin >> num;

        switch (num) {
            case 1:
                Employee::createPersona(listEmp);
                break;
            case 2: {
                vector<Employee>::iterator it;
                for (it = listEmp->begin(); it != listEmp->end(); it++)
                    it->missingHourToFine();
                break;
            }
            case 3: {
                vector<Employee>::iterator it;
                for (it = listEmp->begin(); it != listEmp->end(); it++)
                    it->getInfo();
                break;
            }
            default:
                return;
        }
    }
}
