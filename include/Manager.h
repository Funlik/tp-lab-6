//
// Created by Илья on 019 19.02.20.
//

#ifndef TASK1_MANAGER_H
#define TASK1_MANAGER_H

#include "Employee.h"
#include "Project.h"
#include "IT_project.h"

class Manager : public Employee, public Project{
protected:
    IT_project* project;
    double share;
public:
    Manager(int id, string fio, int worktime, double share, IT_project* project, string spec) :
            Employee(id, fio, worktime, spec){
        this->share = share;
        this->project = project;
    }
    int project_payment(int project_budjet, double share) override {
        return project_budjet * share;
    }
    void calc() override {
        payment = project_payment(project->getBudget(), share);
    }
};
#endif //TASK1_MANAGER_H
