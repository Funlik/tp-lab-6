#include "Projects.h"

#include <utility>

Projects::Projects(std::string new_name, unsigned int new_budget)
{
    this->name = std::move(new_name);
    this->budget = new_budget;
}

std::string Projects::getName()
{
    return this->name;
}

void Projects::setName(std::string new_name)
{
    this->name = std::move(new_name);
}

unsigned int Projects::getBudget()
{
    return this->budget;
}

void Projects::setBudget(unsigned int new_budget)
{
    this->budget = new_budget;
}