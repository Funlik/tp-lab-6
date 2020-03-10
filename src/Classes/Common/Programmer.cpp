//
// Created by fiskirton on 19.02.2020.
//

#include "Classes/Common/Programmer.h"

Programmer::Programmer(int id, const string &name, const string &position) : Engineer(id, name, position){}

double Programmer::calcSalaryWorktime() {
    return this->getWorktime() * this->getBaseRate();
}

double Programmer::calcSalary() {
    return this->calcSalaryWorktime() + this->calcSalaryProject();
}
