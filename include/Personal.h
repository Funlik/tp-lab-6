#ifndef LAB_6_PERSONAL_H
#define LAB_6_PERSONAL_H

#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public WorkTime {
public:
    int wage;

    Personal(int id, string name, int worktime, string spec, int wage) : Employee(id, name, worktime, spec) {
        this->wage = wage;
    }

    int worktimePay(int worktime, int wage) override {
        return worktime * wage;
    }

};

#endif //LAB_6_PERSONAL_H
