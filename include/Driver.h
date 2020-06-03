#pragma once

#include "Personal.h"

class Driver : public Personal {
public:
    Driver(std::string name, int id, int payment, int workTime);
    ~Driver();
    int getNumberOfTransportedProduct();
    void setNumberOfTransportedProduct(int numberOfTransportedProduct);
    int calcSalary();

private:
    int calcWorkTimeSalary();
    int numberOfTransportedProduct;
};