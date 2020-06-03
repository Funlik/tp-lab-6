#ifndef LAB_6_PROGRAMMER_H
#define LAB_6_PROGRAMMER_H

#include "Engineer.h"

class Programmer: public Engineer{public:
    Programmer(int id, string name, int worktime, string spec, int wage, int share, int projectBudget) : Engineer(id, name, worktime, spec, wage, share, projectBudget){}
    void calc() override {
        payment = worktimePay(worktime, wage) + projectPay(projectBudget, share) + 3000;
    }

};
#endif //LAB_6_PROGRAMMER_H
