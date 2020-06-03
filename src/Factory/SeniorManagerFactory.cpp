//
// Created by fiskirton on 09.03.2020.
//

#include "Factory/SeniorManagerFactory.h"
#include "Classes/Common/SeniorManager.h"

SeniorManager *SeniorManagerFactory::create_employee(int id, const string & name, const string & position, int base, Project * project) {
    auto * senior_manager = SeniorManager::getInstance(id, name, position);
    senior_manager->setProject(project);
    senior_manager->setContrib(getRandom(0.1, 0.2));
    senior_manager->setWorktime((int)getRandom(100, 160));
    return senior_manager;
}
