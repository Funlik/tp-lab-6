#ifndef LAB_6_DRIVER_H
#define LAB_6_DRIVER_H

#include "Personal.h"

class Driver : public Personal {
public:
    Driver(int id, string name, int worktime, string spec, int wage) : Personal(id, name, worktime, spec, wage) {}

    void calc() override {
        payment = worktimePay(worktime, wage) * 3;
    }
};

#endif //LAB_6_DRIVER_H
