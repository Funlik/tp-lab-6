//
// Created by lacos on 26.02.2020.
//

#ifndef TASK1_PERSONAL_H
#define TASK1_PERSONAL_H

#include "employee.h"
#include "work_time.h"


class Personal : public Employee, IWorkTime
{
public:
    int WorkTimePay(int hours, int rate) override;

    Personal(string id, string name, string position, int rate, int worktime) : Employee(id, name, position)
    {
        _rate = rate;
        _worktime = worktime;
    }
protected:
    int _worktime;
    int _rate;
};

#endif //TASK1_PERSONAL_H
