//
// Created by fiskirton on 09.03.2020.
//

#ifndef STUFF_PROJECTMANAGERFACTORY_H
#define STUFF_PROJECTMANAGERFACTORY_H

#include "Factory.h"
#include "Classes/Common/ProjectManager.h"

class ProjectManagerFactory: Factory {
public:
    ProjectManager * create_employee(int id, const string & name, const string & position, int base, Project * project) override;
};


#endif //STUFF_PROJECTMANAGERFACTORY_H
