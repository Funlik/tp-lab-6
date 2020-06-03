#include "Engineer.h"

Engineer::Engineer(int id, string name, string occupation, int hourly_payment , int project_contribution, Project* current_project)  :
     Employee(id, name, occupation)
{
    this->hourly_payment = hourly_payment;
    this->project_contribution = project_contribution;
    this->current_project = current_project;
}

int Engineer::calc_payment_by_worktime()
{
    return worktime * hourly_payment;
}

int Engineer::calc_payment_by_project()
{
    return int(current_project->getBudget() /100 * project_contribution);
}

void Engineer::calc_payment()
{
    this->payment = this->calc_payment_by_worktime() + this->calc_payment_by_project();
}

void Engineer::addProject(Project* newProject)
{
    this->current_project = newProject;
}
