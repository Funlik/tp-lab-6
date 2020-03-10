//
// Created by fiskirton on 08.03.2020.
//

#ifndef STUFF_FACTORY_H
#define STUFF_FACTORY_H

#include "Classes/Abstract/Employee.h"
#include "Classes/Common/Project.h"
#include "Extra/Helper.h"

class Factory {

public:
    virtual Employee * create_employee(int id, const string & name, const string & position, int base, Project * project) = 0;
    virtual ~Factory() = default;
};


#endif //STUFF_FACTORY_H
