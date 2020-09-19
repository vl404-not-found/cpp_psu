//
// Created by vlad on 06.09.2020.
//

#ifndef CPP_PSU_LAB_4_H
#define CPP_PSU_LAB_4_H

#include <vector>
#include "string"

using namespace std;

void main_lab();

class Persona {
private:
protected:
    string firstName, lastName;
    int monthRate = 12000, missingHour = 0, rewardFactor = 1, monthFine = 0;
public:
    virtual void getInfo() = 0;

    virtual void missingHourToFine() = 0;
};

class Employee : Persona {
private:
    string corpTransport = "_none";
    int costMovements = 0;
public:
    void getInfo() override;

    void missingHourToFine() override;
};

class Worker : Persona {
private:
    string currentFacility = "_none";
    vector<string> listFacilities = {currentFacility};
public:
    void viewAllFacilities();

    void getInfo() override;

    void missingHourToFine() override;
};

class Engineer : Persona {
private:
    string workFolder = "/home/";
    bool is$rate = false, remoteWork = false;
public:
    void getInfo() override;

    void missingHourToFine() override;
};

#endif //CPP_PSU_LAB_4_H
