//
// Created by araxal on 03.03.2020.
//

#ifndef LAB6_SENIORMANAGER_H
#define LAB6_SENIORMANAGER_H

#include "ProjectManager.h"

class SeniorManager : public ProjectManager {
    vector<Specific_project *> projects;
public:
    using ProjectManager::ProjectManager;

    void add_project(Specific_project *p);

    vector<Specific_project *> get_projects_list();
};

#endif //LAB6_SENIORMANAGER_H
