//
// Created by fiskirton on 19.02.2020.
//

#include "Classes/Abstract/Personal.h"

Personal::Personal(int id, const string &name, const string &position) : Employee(id, name, position) {}

double Personal::getBaseSalaryCoef() const {
    return base_salary_coef;
}

void Personal::setBaseRate(int baseRate) {
    base_rate = baseRate;
}

int Personal::getBaseRate() const {
    return base_rate;
}

void Personal::setBaseSalaryCoef(double baseSalaryCoef) {
    base_salary_coef = baseSalaryCoef;
}
