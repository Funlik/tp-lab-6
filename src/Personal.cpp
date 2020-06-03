//
// Created by artem on 10.03.2020.
//

#include "Personal.h"

#include <utility>

Personal::Personal(int id, std::string name, int worktime, int payment) : Employee(id, std::move(name), worktime, payment) {

}

Personal::~Personal() {

}

int Personal::getSalaryByWorkTime() {
    return payment * worktime;
}

int Personal::getSalary() {
    return getSalaryByWorkTime();
}