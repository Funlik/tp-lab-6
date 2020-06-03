#pragma once
#include <string>
#include <vector>
#include "ProjectManager.h"
#include "Project.h"


class SeniorManager : public ProjectManager
{
protected:
    vector<Project*> projects;
public:
    SeniorManager(int, string, string, int, Project*, int, vector<Project*>);
    int calc_payment_by_heading() override;
    void calc_payment() override;
};