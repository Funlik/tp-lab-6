#ifndef LAB_6_CLEANER_H
#define LAB_6_CLEANER_H

#include "Personal.h"

class Cleaner : public Personal {
public:
    Cleaner(int id, string name, int worktime, string spec, int wage) : Personal(id, name, worktime, spec, wage) {}

    void calc() override {
        payment = worktimePay(worktime, wage);
    }
};

#endif //LAB_6_CLEANER_H
