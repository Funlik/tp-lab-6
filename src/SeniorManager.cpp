#include "SeniorManager.h"

SeniorManager::SeniorManager(int id, string name, string occupation, int project_contribution, Project* current_project, int number_of_subjects, vector<Project *> projects) :
        ProjectManager(id, name, occupation, project_contribution, current_project, number_of_subjects)
{
    /*
    this->id = id;
    this->name = name;
    this->occupation = occupation;
    this->project_contribution = 0;
    this->current_project = nullptr;
     */
    this->projects = projects;
}

int SeniorManager::calc_payment_by_heading()
{
    return ProjectManager::calc_payment_by_heading();
}

void SeniorManager::calc_payment()
{
    ProjectManager::calc_payment();
}

