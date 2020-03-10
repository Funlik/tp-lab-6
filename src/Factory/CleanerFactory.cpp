//
// Created by fiskirton on 08.03.2020.
//

#include "Factory/CleanerFactory.h"

Cleaner *CleanerFactory::create_employee(int id, const string & name, const string & position, int base, Project * project) {
    auto * cleaner = new Cleaner(id, name, position);
    cleaner->setBaseRate(base);
    cleaner->setBaseSalaryCoef(getRandom(1.1, 1.3));
    cleaner->setWorktime(getRandom(100, 160));
    // cleaner->setPayment(cleaner->calcSalary());
    return cleaner;
}
