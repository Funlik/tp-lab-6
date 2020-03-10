//
// Created by fiskirton on 19.02.2020.
//

#include "Classes/Common/Tester.h"

Tester::Tester(int id, const string &name, const string &position) : Engineer(id, name, position) {}

double Tester::calcSalaryWorktime() {
    return this->getWorktime() * this->getBaseRate();
}

double Tester::calcSalary() {
    return this->calcSalaryWorktime() + this->calcSalaryProject();
}
