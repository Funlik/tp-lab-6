//
// Created by lacos on 26.02.2020.
//

#ifndef TASK1_ENGINEER_H
#define TASK1_ENGINEER_H
#include "employee.h"
#include "work_time.h"
#include "iproject.h"

class Engineer : public Employee, IProject, IWorkTime
{
public:
    int WorkTimePay(int hours, int rate) override;
    int ProjectPay(int budget, double percent) override;

    Engineer(string id, string name, string position, string project, int rate, int worktime, double percent) : Employee(id, name, position)
    {
        _rate = rate;
        _project = project;
        _worktime = worktime;
        _projectPercent = percent;
    }
protected:
    int _worktime;
    int _rate;
    double _projectPercent;
    std::string _project;
};

#endif //TASK1_ENGINEER_H
