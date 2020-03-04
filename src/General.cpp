//
// Created by Илья Соловьёв on 05.03.2020.
//

#include "General.h"

Employee::Employee() {};

Employee::Employee(int id, std::string name, int workDays) {
    this->id = id;
    this->name = name;
    this->workDays = workDays;
}

double Employee::getPayment() {
    return payment;
}

int Employee::getId() {
    return id;
}

std::string Employee::getName() {
    return name;
}

std::string Employee::getWritingOut() {
    return std::to_string(id) + " " + name + " payment = " + std::to_string(getPayment());
}