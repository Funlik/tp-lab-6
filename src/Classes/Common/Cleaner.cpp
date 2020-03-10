//
// Created by fiskirton on 19.02.2020.
//

#include "Classes/Common/Cleaner.h"

Cleaner::Cleaner(int id, const string &name, const string &position) : Personal(id, name, position){}

double Cleaner::calcSalaryWorktime() {
    return this->getWorktime() * this->getBaseRate();
}

double Cleaner::calcSalary() {
    return this->calcSalaryWorktime();
}
