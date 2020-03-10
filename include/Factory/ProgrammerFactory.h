//
// Created by fiskirton on 09.03.2020.
//

#ifndef STUFF_PROGRAMMERFACTORY_H
#define STUFF_PROGRAMMERFACTORY_H

#include "Factory.h"
#include "Classes/Common/Programmer.h"

class ProgrammerFactory: Factory {
public:
    Programmer * create_employee(int id, const string &name, const string &position, int base, Project * project) override;
};


#endif //STUFF_PROGRAMMERFACTORY_H
