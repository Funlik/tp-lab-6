#include "SeniorManager.h"

SeniorManager::SeniorManager(int id, std::string name, double leaderBase, double budget, double percent)
    : ProjectManager(id, name, leaderBase, budget, percent)
{
}

SeniorManager::~SeniorManager()
{
}

std::vector<ProjectManager*> SeniorManager::getProjectManagers()
{
    return this->projectManagers;
}

void SeniorManager::addProjectManager(ProjectManager* projectManager)
{
    this->projectManagers.push_back(projectManager);
}

void SeniorManager::cleanProjectManager(ProjectManager* projectManager)
{
    std::vector<ProjectManager*>::iterator i = this->projectManagers.begin();
    while (i != this->projectManagers.end())
    {
        if (*i == projectManager)
        {
            this->projectManagers.erase(i);
            return;
        }
        i++;
    }
}

void SeniorManager::cleanAllProjectManagers()
{
    this->projectManagers.clear();
}

double SeniorManager::calculateHeadingPayment()
{
    return this->leaderBase * (this->projectManagers.size());
}

