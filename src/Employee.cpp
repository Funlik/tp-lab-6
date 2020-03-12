#include "Employee.h"

Employee::Employee(int id, string name, int worktime, string spec) {
    this->id = id;
    this->name = name;
    this->worktime = worktime;
    this->payment = 0;
    this->spec = spec;
}

int Employee::getId() {
    return id;
}

string Employee::getName() {
    return name;
}

int Employee::getPayment() {
    return payment;
}

int Employee::getWorktime() {
    return worktime;
}

string Employee::getSpec() {
    return spec;
}