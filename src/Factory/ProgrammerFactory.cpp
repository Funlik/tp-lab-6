//
// Created by fiskirton on 09.03.2020.
//

#include "Factory/ProgrammerFactory.h"
#include "Classes/Common/Programmer.h"

Programmer *ProgrammerFactory::create_employee(int id, const string &name, const string &position, int base, Project * project) {
    auto * programmer = new Programmer(id, name, position);
    programmer->setBaseRate(base);
    programmer->setBaseSalaryCoef(getRandom(1.1, 1.3));
    programmer->setWorktime((int)getRandom(100, 160));
    programmer->setContrib(getRandom(0.002, 0.005));
    programmer->setProject(project);
    // programmer->setPayment(programmer->calcSalary());
    return programmer;
}
