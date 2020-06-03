//
// Created by lacos on 11.03.2020.
//

#ifndef TASK1_SENIOR_MANAGER_H
#define TASK1_SENIOR_MANAGER_H

#include <vector>
#include "project_manager.h"

class SeniorManager : public ProjectManager
{
public:
    int Calculate() override;

    SeniorManager(string id, string name, string position, string project, double percent, int personalCount, int personalRate) :
        ProjectManager(id, name, position, project, percent, personalCount, personalRate)
    {
        _projects.push_back("CapMonster2");
        _projects.push_back("ZennoPosterPro");
        _projects.push_back("ZennoDroid");
    }
protected:
    std::vector<std::string> _projects;
};

#endif //TASK1_SENIOR_MANAGER_H
