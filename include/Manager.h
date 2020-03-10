#pragma once
#include "Employee.h"
#include "Project.h"
#include <vector>

class Manager : public Employee, public IProject
{
protected:
    int project_contribution;
    Project* current_project;
public:
    Manager(int, string, string, int, Project*);
    int calc_payment_by_project() override;
    void calc_payment() override;

    void addProject(Project*);
};
