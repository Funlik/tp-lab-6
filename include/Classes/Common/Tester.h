//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_TESTER_H
#define TASK1_TESTER_H

#include "Classes/Abstract/Engineer.h"
#include "Interfaces/WorkTime.h"
#include "Interfaces/Projects.h"

class Tester: public Engineer {

public:
    Tester(int id, const string &name, const string &position);

public:

    double calcSalaryWorktime() override;
    double calcSalary() override;

};


#endif //TASK1_TESTER_H
