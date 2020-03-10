//
// Created by fiskirton on 09.03.2020.
//

#include "Factory/ProjectManagerFactory.h"
#include "Classes/Common/ProjectManager.h"

ProjectManager *ProjectManagerFactory::create_employee(int id, const string & name, const string & position, int base, Project * project) {
    auto * project_manager = new ProjectManager(id, name, position);
    project_manager->setProject(project);
    project_manager->setContrib(getRandom(0.05, 0.1));
    project_manager->setWorktime((int)getRandom(100, 160));
    return project_manager;
}
