#include "Manager.h"

#include <utility>

Manager::Manager(unsigned int id, std::string name, unsigned int worktime, unsigned int new_bonus):
Employee(id, std::move(name), worktime)
{
    this->bonus = new_bonus;
}

unsigned int Manager::calculateProjectPayment()
{
    return this->bonus * this->project->getBudget();
}

void Manager::calculatePayment()
{
    this->payment = calculateProjectPayment();
}

void Manager::setBonus(unsigned int new_bonus)
{
    this->bonus = new_bonus;
}

unsigned int Manager::getBonus()
{
    return this->bonus;
}

void Manager::setProject(Projects* new_project)
{
    this->project = new_project;
}

Projects* Manager::getProject()
{
    return this->project;
}

