//
// Created by fiskirton on 09.03.2020.
//

#ifndef STUFF_TESTERFACTORY_H
#define STUFF_TESTERFACTORY_H

#include "Factory.h"
#include "Classes/Common/Tester.h"

class TesterFactory: Factory {
public:
    Tester * create_employee(int id, const string &name, const string &position, int base, Project * project) override;
};


#endif //STUFF_TESTERFACTORY_H
