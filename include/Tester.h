#ifndef LAB_6_TESTER_H
#define LAB_6_TESTER_H

#include "Engineer.h"

class Tester : public Engineer {
public:
    Tester(int id, string name, int worktime, string spec, int wage, int share, int projectBudget) : Engineer(id, name, worktime, spec, wage, share, projectBudget){}
    void calc() override {
        payment = worktimePay(worktime, wage) + projectPay(projectBudget, share) + 1000;
    }

};

#endif //LAB_6_TESTER_H
