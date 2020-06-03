#include "../include/Employee.h"

Employee::Employee(std::string name, int id, int payment) {
    this->name = name;
    this->id = id;
    this->payment = payment;
}

Employee::~Employee() {}


int Employee::getId() {
    return id;
}

std::string Employee::getName() {
    return name;
}


void Employee::setId(int id) {
    this->id = id;
}

void Employee::setName(std::string name) {
    this->name = name;
}

int Employee::getPayment() {
    return payment;
}

void Employee::setPayment(int moneyPerTime) {
    this->payment = moneyPerTime;
} 