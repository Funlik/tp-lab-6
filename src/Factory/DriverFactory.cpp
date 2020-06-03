//
// Created by fiskirton on 08.03.2020.
//

#include <Factory/DriverFactory.h>

Driver *DriverFactory::create_employee(int id, const string & name, const string & position, int base, Project * project) {
    auto * driver = new Driver(id, name, position);
    driver->setBaseRate(base);
    driver->setBaseSalaryCoef(getRandom(1.1, 1.3));
    driver->setWorktime(getRandom(100, 160));
    driver->setExtraSalaryCoef(getRandom(1.0, 1.2));
    // driver->setPayment(driver->calcSalary());
    return driver;
}
