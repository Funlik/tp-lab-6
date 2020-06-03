#include "ProjectManager.h"

ProjectManager::ProjectManager(int id, std::string name, int worktime, int percent) : Manager(id, name, worktime, percent){}

void ProjectManager::addManager(Manager* human)
{
	this->listManagers.push_back(human);
}

//void ProjectManager::cleanManager(Manager* human)
//{
//	for (int i = 0; i < this->listManagers.size(); i++)
//	{
//		if (this->listManagers[i] == human)
//		{
//			this->listManagers.erase(this->listManagers.begin() + i);
//			return;
//		}
//	}
//}

//void ProjectManager::cleanAllManagers()
//{
//	this->managerList.clear();
//}

//std::vector<Manager*> ProjectManager::getManagers()
//{
//	std::vector<Manager*> ans(this->managerList.size());
//	for (int i = 0; i < this->listManagers.size(); i++)
//	{
//		ans[i] = this->listManagers[i];
//	}
//	return ans;
//}

double ProjectManager::calculateHeadingPayment(int leaderRate)
{
	return leaderRate * (this->listManagers.size());
}

void ProjectManager::calc() {}

void ProjectManager::calc(int budget, int percent, int leaderBase)
{
	this->rate = calculateProjectPayment(percent, budget) + calculateHeadingPayment(leaderBase);
}