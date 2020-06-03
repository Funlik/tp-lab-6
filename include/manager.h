//
// Created by lacos on 26.02.2020.
//

#ifndef TASK1_MANAGER_H
#define TASK1_MANAGER_H

#include "employee.h"
#include "iproject.h"

class Manager : public Employee, IProject
{
public:
    int ProjectPay(int budget, double percent) override;
    int Calculate() override;

    Manager(string id, string name, string position, string project, double percent) : Employee(id, name, position)
    {
        _project = project;
        _projectPercent = percent;
    }
protected:
    std::string _project;
    double _projectPercent;
};

#endif //TASK1_MANAGER_H
