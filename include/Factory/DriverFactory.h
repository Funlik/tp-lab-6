//
// Created by fiskirton on 08.03.2020.
//

#ifndef STUFF_DRIVERFACTORY_H
#define STUFF_DRIVERFACTORY_H

#include "Factory.h"
#include "Classes/Common/Driver.h"

class DriverFactory: public Factory {
public:
    Driver * create_employee(int id, const string & name, const string & position, int base, Project * project) override;
};


#endif //STUFF_DRIVERFACTORY_H
