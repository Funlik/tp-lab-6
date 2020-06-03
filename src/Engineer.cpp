#include "Engineer.h"

#include <utility>

Engineer::Engineer(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_base, unsigned int new_bonus):
        Employee(new_id, std::move(new_name), new_worktime)
{
    this->base = new_base;
    this->bonus = new_bonus;
}

unsigned int Engineer::calculateWorkTimePayment()
{
    return this->base * this->worktime;
}


unsigned int Engineer::calculateProjectPayment()
{
    return project->getBudget() * this->bonus;
}

void Engineer::calculatePayment()
{
    this->payment = calculateProjectPayment() + calculateWorkTimePayment();
}

void Engineer::setBonus(unsigned int new_bonus)
{
    this->bonus = new_bonus;
}

unsigned int Engineer::getBonus()
{
    return this->bonus;
}

void Engineer::setBase(unsigned int new_base)
{
    this->base = new_base;
}

unsigned int Engineer::getBase()
{
    return this->base;
}

void Engineer::setProject(Projects* new_project)
{
    this->project = new_project;
}

Projects* Engineer::getProject()
{
    return this->project;
}

