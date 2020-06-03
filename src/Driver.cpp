#include "../include/Driver.h"

Driver::Driver(std::string name, int id, int payment, int workTime) : Personal(name, id, payment, workTime) {}

Driver::~Driver() {}

int Driver::getNumberOfTransportedProduct() {
    return numberOfTransportedProduct;
}

void Driver::setNumberOfTransportedProduct(int numberOfTransportedProduct) {
    this->numberOfTransportedProduct = numberOfTransportedProduct;
}

int Driver::calcSalary() {
    return calcWorkTimeSalary() + numberOfTransportedProduct * 2;
}

int Driver::calcWorkTimeSalary() {
    return payment * workTime;
}