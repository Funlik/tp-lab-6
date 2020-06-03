#pragma once

#include <Interfaces/ProjectSalary.h>
#include "Employee.h"

class Manager : public Employee, public ProjectSalary {
public:
    ~Manager();

    int getPartOfProject();
    void setPartOfProject(int partOfProject);
    int getProjectImportance();
    void setProjectImportance(int projectImportance);

protected:
    Manager(std::string name, int id, int payment, int partOfProject, int projectImportance);
    int partOfProject;
    int projectImportance;
};