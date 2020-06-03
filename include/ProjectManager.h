#pragma once

#include <Interfaces/Heading.h>
#include "Manager.h"

class ProjectManager : public Manager, public Heading {
public:
    ProjectManager(std::string name, int id, int payment, int partOfProject, int projectImportance, int numberOfSubordinates);
    ~ProjectManager();
    int calcSalary();
protected:
    int calcProjectSalary();
    int calcHeadingSalary();
    int numberOfSubordinates;
};
