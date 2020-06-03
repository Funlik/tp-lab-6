//
// Created by Илья on 019 19.02.20.
//

#ifndef TASK1_ENGINEER_H
#define TASK1_ENGINEER_H

#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"
#include "IT_project.h"

class Engineer : public Employee, public WorkTime, public Project{
public:
    IT_project* project;
    double share;
    double base;
    Engineer(int id, string fio, int worktime, double share, double base, IT_project* project, string spec) :
    Employee(id, fio, worktime, spec){
        this->share = share;
        this->base = base;
        this->project = project;
    }
    int worktime_payment(int worktime, double base) override{
        return worktime * base;
    }
    int project_payment(int project_budjet, double share) override {
        return project_budjet * share;
    }
};

#endif //TASK1_ENGINEER_H
