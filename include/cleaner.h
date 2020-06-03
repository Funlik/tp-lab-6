//
// Created by lacos on 04.03.2020.
//

#ifndef TASK1_CLEANER_H
#define TASK1_CLEANER_H

#include "personal.h"
using namespace std;

class Cleaner : public Personal
{
public:
    Cleaner(string id, string name, string position, int rate, int worktime) : Personal(id, name, position, rate, worktime) { }
    int Calculate() override;
};

#endif //TASK1_CLEANER_H
