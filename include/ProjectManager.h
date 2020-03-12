#ifndef LAB_6_PROJECTMANAGER_H
#define LAB_6_PROJECTMANAGER_H

#include "Heading.h"
#include "Manager.h"

class ProjectManager: public Heading, public Manager{
protected:
    int numWorkers;
    int payForWorker;
public:
    ProjectManager(int id, string name, int worktime, int share, int projectBudget, string spec, int numWorkers, int payForWorker) : Manager(id, name, worktime,share,projectBudget,spec){
        this->numWorkers = numWorkers;
        this->payForWorker = payForWorker;
    }

    int headingPay(int numWorkers) override {
        return numWorkers * payForWorker;
    }
    void calc() override {
        payment = projectPay(projectBudget, share) + headingPay(numWorkers);
    }
};
#endif //LAB_6_PROJECTMANAGER_H
