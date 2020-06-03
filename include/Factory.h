#pragma once

#include "Cleaner.h"
#include "Driver.h"

#include "Tester.h"
#include "Programmer.h"
#include "Teamleader.h"

#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"

#include "Project.h"

#include <vector>
#include <string>

class Factory
{
private:
    vector<Project*> projects;
public:
    explicit Factory(vector<Project*>);
    Employee* create(vector<string>);

    void addProject(Project*);
    void deleteProject(Project*);
};
