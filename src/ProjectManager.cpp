#include "ProjectManager.h"

ProjectManager::ProjectManager(int id, std::string name, double leaderBase, double budget, double percent)
    : Manager(id,name, budget, percent)
{
    this->leaderBase = leaderBase;
}

ProjectManager::~ProjectManager()
{
}

double ProjectManager::getLeaderBase()
{
    return this->leaderBase;
}

std::vector<Manager*> ProjectManager::getManagers()
{
    return this->managers;
}

void ProjectManager::setLeaderBase(double leaderBase)
{
    this->leaderBase = leaderBase;
}

void ProjectManager::addManager(Manager* manager)
{
    this->managers.push_back(manager);
}

void ProjectManager::cleanManager(Manager* manager)
{
    std::vector<Manager*>::iterator i = this->managers.begin();
    while (i != this->managers.end())
    {
        if (*i == manager)
        {
            this->managers.erase(i);
            return;
        }
        i++;
    }
}

void ProjectManager::cleanAllManagers()
{
    this->managers.clear();
}

double ProjectManager::calculateHeadingPayment()
{
    return this->leaderBase * this->managers.size();
}

void ProjectManager::calculatePayment()
{
    this->payment = this->calculateProjectPayment() + this->calculateHeadingPayment();
}
