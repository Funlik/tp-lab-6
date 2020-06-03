#pragma once

#include "ProjectManager.h"

class SeniorManager : public ProjectManager {
public:
    SeniorManager(std::string name, int id, int payment, int partOfProject, int projectImportance, int numberOfSubordinates);
    ~SeniorManager();
    int calcSalary();
private:
    int calcProjectSalary();
    int calcHeadingSalary();
};