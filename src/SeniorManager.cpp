#include "SeniorManager.h"

SeniorManager::SeniorManager(int id, std::string name, double worktime, double payment) : ProjectManager(id, name, worktime, payment) {}

void SeniorManager::addProjectManager(ProjectManager* person)
{
	this->projectManagerList.push_back(person);
}

void SeniorManager::onDeleteProjectManager(ProjectManager* person)
{
	for (int i = 0; i < this->projectManagerList.size(); i++)
	{
		if (this->projectManagerList[i] == person)
		{
			this->projectManagerList.erase(this->projectManagerList.begin() + i);
			return;
		}
	}
}

void SeniorManager::deleteProjectManagers()
{
	this->projectManagerList.clear();
}

std::vector<ProjectManager*> SeniorManager::getProjectManager()
{
	std::vector<ProjectManager*> v(this->projectManagerList.size());
	for (int i = 0; i < this->projectManagerList.size(); i++)
	{
		v[i] = this->projectManagerList[i];
	}
	return v;
}


double SeniorManager::calculateChiefPayment(double chiefPayment)
{
	return this->projectManagerList.size() * chiefPayment;
}