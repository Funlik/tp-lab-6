//
// Created by Илья on 019 19.02.20.
//

#ifndef TASK1_PERSONAL_H
#define TASK1_PERSONAL_H

#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public WorkTime{
public:
    int base;
    Personal(int id, string fio, int worktime, double base, string spec) : Employee(id, fio, worktime, spec){
        this -> base = base;
    }
    int worktime_payment(int worktime, double base) override {
        return worktime * base;
    }
};
#endif //TASK1_PERSONAL_H
