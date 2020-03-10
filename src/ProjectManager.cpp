#include "ProjectManager.h"

ProjectManager::ProjectManager(int id, string name, string occupation, int project_contribution, Project* current_project, int number_of_subjects) :
        Manager(id, name, occupation, project_contribution, current_project)
{
    /*
    this->id = id;
    this->name = name;
    this->occupation = occupation;
    this->project_contribution = project_contribution;
    this->current_project = current_project;
     */
    this->number_of_subjects = number_of_subjects;
}

int ProjectManager::calc_payment_by_heading()
{
    int money_per_person = 200;
    return money_per_person * number_of_subjects;
}

void ProjectManager::calc_payment()
{
    this->payment = this->calc_payment_by_project() + this->calc_payment_by_heading();
}

