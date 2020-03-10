//
// Created by fiskirton on 19.02.2020.
//

#include "Classes/Common/Driver.h"

Driver::Driver(int id, const string &name, const string &position) : Personal(id, name, position){}

double Driver::calcSalaryWorktime() {
    return this->getWorktime() * (this->getBaseRate() * this->getExtraSalaryCoef());
}

double Driver::getExtraSalaryCoef() const {
    return this->extra_salary_coef;
}

void Driver::setExtraSalaryCoef(double extraSalaryCoef) {
    this->extra_salary_coef = extraSalaryCoef;
}

double Driver::calcSalary() {
    return this->calcSalaryWorktime();
}
