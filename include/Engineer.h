#pragma once
#include <string>
#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"

class Engineer : public Employee, public WorkTime, public IProject
{
protected:
    int hourly_payment;
    int project_contribution;
    Project* current_project;
public:
    Engineer(int id, string name, string occupation, int hourly_payment , int project_contribution, Project* current_project);
    int calc_payment_by_worktime() override;
    int calc_payment_by_project() override;
    void calc_payment() override;

    void addProject(Project*);
};

