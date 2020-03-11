//
// Created by artem on 10.03.2020.
//

#pragma once


#include "Personal.h"

class Driver: public Personal {
private:
    int fuelPrice;

public:

    Driver(int id, std::string name, int worktime, int payment, int fuelPrice);

    ~Driver();

    void setFuelPrice(int fuelPrice);

    int getFuelPrice();

    int getSalary() override;
};

