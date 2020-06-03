//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_PROGRAMMER_H
#define TASK1_PROGRAMMER_H

#include "Classes/Abstract/Engineer.h"
#include "Interfaces/WorkTime.h"
#include "Interfaces/Projects.h"

class Programmer: public Engineer{

public:
    Programmer(int id, const string &name, const string &position);

public:

    double calcSalaryWorktime() override;
    double calcSalary() override;

};


#endif //TASK1_PROGRAMMER_H
