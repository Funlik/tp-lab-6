//
// Created by Илья on 026 26.02.20.
//

#ifndef TASK1_CLEANER_H
#define TASK1_CLEANER_H

#include "Personal.h"

class Cleaner : public Personal{
public:
    Cleaner(int id, string fio, int worktime, double base, string spec) : Personal(id, fio, worktime, base, spec){}
    void calc() override {
        payment = worktime_payment(worktime, base);
    }
};


#endif //TASK1_CLEANER_H
