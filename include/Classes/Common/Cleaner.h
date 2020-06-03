//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_CLEANER_H
#define TASK1_CLEANER_H

#include "Classes/Abstract/Personal.h"
#include "Interfaces/WorkTime.h"


class Cleaner: public Personal{
public:
    Cleaner(int id, const string &name, const string &position);

public:
    double calcSalaryWorktime() override;
    double calcSalary() override;
};


#endif //TASK1_CLEANER_H
