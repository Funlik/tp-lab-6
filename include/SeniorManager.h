#ifndef LAB_6_SENIORMANAGER_H
#define LAB_6_SENIORMANAGER_H

#include "ProjectManager.h"

class SeniorManager: public ProjectManager{
public:
    SeniorManager(int id, string name, int worktime, int share, int projectBudget, int numWorkers, int payForWorker, string spec)
    : ProjectManager(id, name, worktime, share, projectBudget, spec, numWorkers, payForWorker){}
    void calc() override {
        payment = projectPay(projectBudget, share) + headingPay(numWorkers) + 1000;
    }
};
#endif //LAB_6_SENIORMANAGER_H
