#ifndef LAB_6_MANAGER_H
#define LAB_6_MANAGER_H

#include "Employee.h"
#include "Project.h"

class Manager : public Employee, public Project {
protected:
    int share;
    int projectBudget;
public:
    Manager(int id, string name, int worktime, int share, int projectBudget, string spec) :
            Employee(id, name, worktime, spec) {
        this->share = share;
        this->projectBudget = projectBudget;
    }

    int projectPay(int projectBudget, int share) override {
        return (projectBudget * share) / 100;
    }
    void calc() override {
        payment = projectPay(projectBudget, share);
    }
};

#endif //LAB_6_MANAGER_H
