//
// Created by fiskirton on 08.03.2020.
//

#ifndef STUFF_CLEANERFACTORY_H
#define STUFF_CLEANERFACTORY_H

#include "Factory/Factory.h"
#include "Classes/Common/Cleaner.h"

class CleanerFactory: public Factory{
public:
    Cleaner * create_employee(int id, const string & name, const string & position, int base, Project * project) override;

};


#endif //STUFF_CLEANERFACTORY_H
