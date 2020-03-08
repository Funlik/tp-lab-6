//
// Created by Илья Соловьёв on 19.02.2020.
//

#ifndef TASK1_PERSONAL_H
#define TASK1_PERSONAL_H

#include "General.h"
#include "Interfaces.h"


////////////
//PERSONAL//
////////////

class Personal : public Employee, public WorkTime {
protected:
    int paymentPerDay;

public:

    Personal(int id, std::string name, int workDays, int paymentPerDay);

    double workDaysPayment() override;

    void setPayment() override;
};

////////////
//CLEANER//
////////////

class Cleaner : public Personal {

public:
    Cleaner(int id, std::string name, int workDays, int paymentPerDay);
};


//////////
//DRIVER//
//////////

class Driver : public Personal {

public:
    Driver(int id, std::string name, int workDays, int paymentPerDay);

    double workDaysPayment() override;
};

#endif //TASK1_PERSONAL_H


