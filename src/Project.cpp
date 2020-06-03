#include "Project.h"

Project::Project(string title, int budget)
{
    this->title = title;
    this->budget = budget;
}

int Project::getBudget()
{
    return this->budget;
}

const string &Project::getTitle()
{
    return this->title;
}
