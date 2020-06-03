#include "SeniorManager.h"

SeniorManager::SeniorManager(int id, std::string name, int worktime, int percent) : ProjectManager(id, name, worktime, percent){}

void SeniorManager::addProjectManager(ProjectManager* human)
{
	this->listProjectManagers.push_back(human);
}

//void SeniorManager::cleanProjectManager(ProjectManager* target)
//{
//	for (int i = 0; i < this->listProjectManagers.size(); i++)
//	{
//		if (this->projectManagerList[i] == target)
//		{
//			this->projectManagerList.erase(this->listProjectManagers.begin() + i);
//			return;
//		}
//	}
//}
//
//void SeniorManager::cleanAllProjectManagers()
//{
//	this->projectManagerList.clear();
//}

std::vector<ProjectManager*> SeniorManager::getProjectManagers()
{
	/*std::vector<ProjectManager*> ans(this->listProjectManagers.size());
	for (int i = 0; i < this->listProjectManagers.size(); i++)
	{
		ans[i] = this->listProjectManagers[i];
	}
	return ans;*/

	return this->listProjectManagers;
}

double SeniorManager::calculateHeadingPayment(int leaderBase)
{
	return leaderBase * (this->listProjectManagers.size());
}