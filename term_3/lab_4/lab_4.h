//
// Created by vlad on 06.09.2020.
//

#ifndef CPP_PSU_LAB_4_H
#define CPP_PSU_LAB_4_H

#include <vector>
#include "string"

using namespace std;

class Persona{
private:
protected:
    string firstName, lastName;
    int monthRate = 12000, missingHour = 0, rewardFactor = 1, monthFine = 0;
public:
    virtual void getInfo() = 0;
    virtual void missingHourToFine() = 0;
};

class Employee: Persona{
    void getInfo() override;
    string corpTransport = "_none";
    int costMovements = 0;
};

class Worker: Persona{
private:
    string currentFacility = "_none";
    vector<string> listFacilities = {currentFacility};
};

class Engineer: Persona{
private:
    string workFolder = "/home/";
    bool is$rate = false, remoteWork = false;
};

#endif //CPP_PSU_LAB_4_H
