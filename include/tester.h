//
// Created by lacos on 10.03.2020.
//

#ifndef TASK1_TESTER_H
#define TASK1_TESTER_H
#include "engineer.h"

class Tester : public Engineer
{
public:
    int Calculate() override;

    Tester(string id, string name, string position, string project, int rate, int worktime, double percent) :
        Engineer(id, name, position, project, rate, worktime, percent) { }
};

#endif //TASK1_TESTER_H
