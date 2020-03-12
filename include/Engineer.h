#ifndef LAB_6_ENGINEER_H
#define LAB_6_ENGINEER_H

#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"

class Engineer : public Employee, public WorkTime, public Project {
public:
    int wage;
    int share;
    int projectBudget;

    Engineer(int id, string name, int worktime, string spec, int wage, int share, int projectBudget) : Employee(id, name, worktime,
                                                                                              spec) {
        this->wage = wage;
        this->share = share;
        this->projectBudget = projectBudget;
    }

    int worktimePay(int worktime, int wage) override {
        return worktime * wage;
    }

    int projectPay(int projectBudget, int share) override {
        return (projectBudget * share) / 100;
    }

    void calc() override{
        payment = worktimePay(worktime, wage) + projectPay(projectBudget, share);
    }
};

#endif //LAB_6_ENGINEER_H
