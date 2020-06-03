//
// Created by artem on 10.03.2020.
//

#include "Driver.h"

Driver::Driver(int id, std::string name, int worktime, int payment, int fuelPrice) : Personal(id, std::move(name), worktime, payment){
    Driver::fuelPrice = fuelPrice;
}

Driver::~Driver() {

}

void Driver::setFuelPrice(int fuelPrice) {

}

int Driver::getFuelPrice() {
    return 0;
}

int Driver::getSalary() {
    return Personal::getSalary() + fuelPrice * worktime;
}
