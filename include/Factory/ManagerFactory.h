//
// Created by fiskirton on 09.03.2020.
//

#ifndef STUFF_MANAGERFACTORY_H
#define STUFF_MANAGERFACTORY_H

#include "Factory.h"
#include "Classes/Common/Manager.h"

class ManagerFactory: Factory {
public:
    Manager * create_employee(int id, const string & name, const string & position, int base, Project * project) override;
};


#endif //STUFF_MANAGERFACTORY_H
