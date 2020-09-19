//
// Created by vlad on 06.09.2020.
//

#include <iostream>
#include "lab_4.h"


void Employee::getInfo() {
    cout << "Служащий:" << this->firstName << " " << this->lastName << ". Коеффицент зп" << this->rewardFactor << ", ЗП"
         << this->monthRate<< ". Транспорт " << this->corpTransport << "/ " << this->costMovements;
}

void Worker::getInfo() {
    cout << "Рабочий: " << this->firstName << " " << this->lastName << ". Коеффицент зп" << this->rewardFactor << ", ЗП"
         << this->monthRate << ".Текущий объект" << this->currentFacility;
}

void Engineer::getInfo() {
    cout << "Инженер: " << this->firstName << " " << this->lastName << ". Коеффицент зп" << this->rewardFactor << ", ЗП"
         << this->monthRate << ". Рабочая папка" << this->workFolder;
}


void Employee::missingHourToFine() {

}

void Worker::missingHourToFine() {

}

void Worker::viewAllFacilities() {
    for(auto & item : this->listFacilities)
        cout << item;
}

void Engineer::missingHourToFine() {

}