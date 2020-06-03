#pragma once

#include "Project.h"
#include "Engineer.h"

class Programmer :
        public Engineer {
public:
    Programmer(std::string name, int id, int workTime, int payment, int partOfProject, int projectImportance);
    ~Programmer();
    int calcSalary();

protected:
    int calcWorkTimeSalary();
    int calcProjectSalary();
};