#include "ProjectManager.h"

#include <utility>

ProjectManager::ProjectManager(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_bonus, unsigned int new_baselead):
        Manager(new_id, std::move(new_name), new_worktime, new_bonus)
{
    this->baselead = new_baselead;
}

unsigned int ProjectManager::calculateHeadingPayment()
{
    return this->baselead * managers.size();
}

void ProjectManager::calcPayment()
{
    this->payment = calculateHeadingPayment() + calculateProjectPayment();
}

void ProjectManager::setBaseLeader(unsigned int new_baselead)
{
    this->baselead = new_baselead;
}

unsigned int ProjectManager::getBaseLeader()
{
    return this->baselead;
}

void ProjectManager::addManagers(Manager* new_manager)
{
    this->managers.push_back(new_manager);
}


void ProjectManager::removeManagers()
{
    this->managers.clear();
}


std::vector<Manager*> ProjectManager::getManagers()
{
    return this->managers;
}

