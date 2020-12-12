//
// Created by vlad on 06.09.2020.
//

#include <iostream>
#include "lab_4.h"


void Employee::createPersona(vector<Employee> *_list) {
    string f_name, l_name, corp_t; bool qe; int monthRate;
    cout << "\n Введите имя: "; cin >> f_name;
    cout << "\n Введите фамилию: "; cin >> f_name;
    cout << "\n Введите ставку: "; cin >> monthRate;
    cout << "\n Выделен ли  транспорт?: "; cin >> qe;
    if (qe)
        cout << "\n Какой транспорт: "; cin >> corp_t;

}

void Persona::getInfo() {
    cout << "Сотрудник: " << this->firstName << " " << this->lastName;
}

void Persona::missingHourToFine() {
    this->rewardFactor /= this->missingHour / 180;
}

const string &Persona::getFirstName() const {
    return firstName;
}

void Persona::setFirstName(const string &firstName) {
    Persona::firstName = firstName;
}

const string &Persona::getLastName() const {
    return lastName;
}

void Persona::setLastName(const string &lastName) {
    Persona::lastName = lastName;
}

int Persona::getMonthRate() const {
    return monthRate;
}

void Persona::setMonthRate(int monthRate) {
    Persona::monthRate = monthRate;
}

int Persona::getMissingHour() const {
    return missingHour;
}

void Persona::setMissingHour(int missingHour) {
    Persona::missingHour = missingHour;
}

int Persona::getRewardFactor() const {
    return rewardFactor;
}

void Persona::setRewardFactor(int rewardFactor) {
    Persona::rewardFactor = rewardFactor;
}

int Persona::getMonthFine() const {
    return monthFine;
}

void Persona::setMonthFine(int monthFine) {
    Persona::monthFine = monthFine;
}

Persona::Persona(const string &firstName, const string &lastName, int monthRate) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->monthRate = monthRate;
}

Persona::Persona(const string &firstName, const string &lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
}


void Employee::getInfo() {
    cout << "Служащий:" << this->firstName << " " << this->lastName << ". Коеффицент зп" << this->rewardFactor << ", ЗП"
         << this->monthRate << ". Транспорт " << this->corpTransport << "/ " << this->costMovements;
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
    this->rewardFactor /= this->missingHour / 130;
}

void Worker::missingHourToFine() {
    this->rewardFactor /= this->missingHour / 100;
}

void Worker::viewAllFacilities() {
    for (auto &item : this->listFacilities)
        cout << item;
}

const string &Worker::getCurrentFacility() const {
    return currentFacility;
}

void Worker::setCurrentFacility(const string &currentFacility) {
    Worker::currentFacility = currentFacility;
}

const vector<string> &Worker::getListFacilities() const {
    return listFacilities;
}

void Worker::setListFacilities(const vector<string> &listFacilities) {
    Worker::listFacilities = listFacilities;
}

void Engineer::missingHourToFine() {
    this->rewardFactor /= this->missingHour / 160;
}

const string &Engineer::getWorkFolder() const {
    return this->workFolder;
}

bool Engineer::isRate() const {
    return this->is$rate;
}

bool Engineer::isRemoteWork() const {
    return this->remoteWork;
}

void Engineer::setWorkFolder(const string &workFolder) {
    this->workFolder = workFolder;
}

void Engineer::setIsRate(bool isRate) {
    this->is$rate = isRate;
}

void Engineer::setRemoteWork(bool remoteWork) {
    this->remoteWork = remoteWork;
}
