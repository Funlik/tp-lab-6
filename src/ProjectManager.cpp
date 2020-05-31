#include "ProjectManager.h"

ProjectManager::ProjectManager(int id, std::string name, int worktime, int percent) : Manager(id, name, worktime, percent){}

void ProjectManager::addManager(Manager* target)
{
	this->managerList.push_back(target);
}
void ProjectManager::cleanManager(Manager* target)
{
	for (int i = 0; i < this->managerList.size(); i++)
	{
		if (this->managerList[i] == target)
		{
			this->managerList.erase(this->managerList.begin() + i);
			return;
		}
	}
}

void ProjectManager::cleanAllManagers()
{
	this->managerList.clear();
}

std::vector<Manager*> ProjectManager::getManagers()
{
	std::vector<Manager*> ans(this->managerList.size());
	for (int i = 0; i < this->managerList.size(); i++)
	{
		ans[i] = this->managerList[i];
	}
	return ans;
}

int ProjectManager::calculateHeadingPayment(int leaderBase)
{
	return leaderBase * (this->managerList.size());
}

void ProjectManager::Calc(int percent, int budget, int leaderBase)
{
	this->payment = calculateProjectPayment(percent, budget) + calculateHeadingPayment(leaderBase);
}