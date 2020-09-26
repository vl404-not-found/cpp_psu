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
    const string &getFirstName() const;

    void setFirstName(const string &firstName);

    const string &getLastName() const;

    void setLastName(const string &lastName);

    int getMonthRate() const;

    void setMonthRate(int monthRate);

    int getMissingHour() const;

    void setMissingHour(int missingHour);

    int getRewardFactor() const;

    void setRewardFactor(int rewardFactor);

    int getMonthFine() const;

    void setMonthFine(int monthFine);

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
public:
    const string &getCurrentFacility() const;

    void setCurrentFacility(const string &currentFacility);

    const vector<string> &getListFacilities() const;

    void setListFacilities(const vector<string> &listFacilities);

private:
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
    void setWorkFolder(const string &workFolder);

    void setIsRate(bool isRate);

    void setRemoteWork(bool remoteWork);

public:
    const string &getWorkFolder() const;

    bool isRate() const;

    bool isRemoteWork() const;

public:

    void getInfo() override;

    void missingHourToFine() override;
};

#endif //CPP_PSU_LAB_4_H
