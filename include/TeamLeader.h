#ifndef LAB_6_TEAMLEADER_H
#define LAB_6_TEAMLEADER_H

#include "Programmer.h"
#include "Heading.h"

class TeamLeader: public Programmer, public  Heading{
    int numWorkers;
    int payForWorker;
public:
    TeamLeader(int id, string name, int worktime, int share, int wage, int projectBudget, int numWorkers, int payForWorker, string spec) :
    Programmer(id, name, worktime, spec, wage, share, projectBudget){
        this->numWorkers = numWorkers;
        this->payForWorker = payForWorker;
    }

    int headingPay(int numWorkers) override {
        return numWorkers * payForWorker;
    }

    void calc() override {
        payment = worktimePay(worktime, wage) + headingPay(numWorkers) + projectPay(projectBudget, share);
    }
};
#endif //LAB_6_TEAMLEADER_H
