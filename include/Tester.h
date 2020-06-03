#pragma once

#include "Engineer.h"

class Tester :
        public Engineer {
public:
    Tester(std::string name, int id, int workTime, int payment, int partOfProject, int projectImportance);
    ~Tester();
    int calcSalary();
};
