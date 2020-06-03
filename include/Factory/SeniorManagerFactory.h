//
// Created by fiskirton on 09.03.2020.
//

#ifndef STUFF_SENIORMANAGERFACTORY_H
#define STUFF_SENIORMANAGERFACTORY_H

#include "Factory.h"
#include "Classes/Common/SeniorManager.h"

class SeniorManagerFactory: Factory {
public:
    SeniorManager * create_employee(int id, const string & name, const string & position, int base, Project * project) override;
};


#endif //STUFF_SENIORMANAGERFACTORY_H
