#include "Manager.h"

Manager::Manager(int id, string name, string occupation, int project_contribution, Project* current_project) :
        Employee(id, name, occupation)
{
    this->id = id;
    this->name = name;
    this->occupation = occupation;
    this->project_contribution = project_contribution;
    this->current_project = current_project;
}

int Manager::calc_payment_by_project()
{
    return int(current_project->getBudget() /100 * project_contribution);
}

void Manager::calc_payment()
{
    this->payment = this->calc_payment_by_project();
}

void Manager::addProject(Project * newProject)
{
    this->current_project = newProject;
}
