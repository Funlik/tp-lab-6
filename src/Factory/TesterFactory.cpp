//
// Created by fiskirton on 09.03.2020.
//

#include "Factory/TesterFactory.h"
#include "Classes/Common/Tester.h"

Tester *TesterFactory::create_employee(int id, const string &name, const string &position, int base, Project * project) {
    auto * tester = new Tester(id, name, position);
    tester->setBaseRate(base);
    tester->setBaseSalaryCoef(getRandom(1.1, 1.3));
    tester->setWorktime(getRandom(100, 160));
    tester->setContrib(getRandom(0.001, 0.005));
    tester->setProject(project);
    // tester->setPayment(tester->calcSalary());
    return tester;
}
