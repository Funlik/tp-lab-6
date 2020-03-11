//
// Created by artem on 10.03.2020.
//

#include "Employee.h"

Employee::Employee(int id, std::string name, int worktime, int payment) {
    Employee::id = id;
    Employee::name = name;
    Employee::worktime = worktime;
    Employee::payment = payment;
}

Employee::~Employee() {

}

int Employee::getId() {
    return id;
}

void Employee::setId(int id) {
    Employee::id = id;
}

std::string Employee::getName() {
    return name;
}

void Employee::setName(const std::string &name) {
    Employee::name = name;
}

int Employee::getWorktime() {
    return worktime;
}

void Employee::setWorktime(int worktime) {
    Employee::worktime = worktime;
}

int Employee::getPayment() {
    return payment;
}

void Employee::setPayment(int payment) {
    Employee::payment = payment;
}
