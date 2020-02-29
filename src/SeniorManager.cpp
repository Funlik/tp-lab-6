#include "SeniorManager.h"

SeniorManager::SeniorManager(int id, std::string name, int worktimem, int percent) : ProjectManager(id, name, worktime, percent){}

void SeniorManager::addProjectManager(ProjectManager* target)
{
	this->projectManagerList.push_back(target);
}
void SeniorManager::cleanProjectManager(ProjectManager* target)
{
	for (int i = 0; i < this->projectManagerList.size(); i++)
	{
		if (this->projectManagerList[i] == target)
		{
			this->projectManagerList.erase(this->projectManagerList.begin() + i);
			return;
		}
	}
}

void SeniorManager::cleanAllProjectManagers()
{
	this->projectManagerList.clear();
}

std::vector<ProjectManager*> SeniorManager::getProjectManagers()
{
	std::vector<ProjectManager*> ans(this->projectManagerList.size());
	for (int i = 0; i < this->projectManagerList.size(); i++)
	{
		ans[i] = this->projectManagerList[i];
	}
	return ans;
}

int SeniorManager::calculateHeadingPayment(int leaderBase)
{
	return leaderBase * (this->projectManagerList.size());
}