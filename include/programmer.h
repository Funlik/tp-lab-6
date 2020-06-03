//
// Created by lacos on 10.03.2020.
//

#ifndef TASK1_PROGRAMMER_H
#define TASK1_PROGRAMMER_H

#include "engineer.h"

class Programmer : public Engineer
{
public:
    int Calculate() override;

    Programmer(string id, string name, string position, string project, int rate, int worktime, double percent) :
        Engineer(id, name, position, project, rate, worktime, percent) { }
};

#endif //TASK1_PROGRAMMER_H
