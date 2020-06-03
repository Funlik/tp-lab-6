//
// Created by lacos on 10.03.2020.
//

#ifndef TASK1_PROJECT_MANAGER_H
#define TASK1_PROJECT_MANAGER_H

#include "manager.h"
#include "iheading.h"

class ProjectManager : public Manager, IHeading
{
public:
    int Calculate() override;
    int HeadingPay(int personalCount, int rate) override;

    ProjectManager(string id, string name, string position, string project, double percent, int personalCount, int personalRate) :
        Manager(id, name, position, project, percent)
    {
        _personalRate = personalRate;
        _personalCount = personalCount;
    }
protected:
    int _personalCount;
    int _personalRate;
};

#endif //TASK1_PROJECT_MANAGER_H
