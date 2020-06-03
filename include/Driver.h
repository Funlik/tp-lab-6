//
// Created by Илья on 026 26.02.20.
//

#ifndef TASK1_DRIVER_H
#define TASK1_DRIVER_H

#include "Personal.h"

class Driver : public Personal{
public:
    Driver(int id, string fio, int worktime, double base, string spec) : Personal(id, fio, worktime, base, spec){}
    void calc() override {
        payment = worktime_payment(worktime, base) * 1.1;
    }
};


#endif //TASK1_DRIVER_H
