//
// Created by lacos on 10.03.2020.
//

#ifndef TASK1_DRIVER_H
#define TASK1_DRIVER_H

#include "personal.h"

class Driver : Personal
{
public:
    Driver(string id, string name, string position, int rate, int worktime) : Personal(id, name, position, rate, worktime) { }
    int Calculate() override;
};

#endif //TASK1_DRIVER_H
