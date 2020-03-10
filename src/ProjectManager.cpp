#include "ProjectManager.h"

ProjectManager::ProjectManager(int id, std::string name, double worktime, double payment) : Manager(id, name, worktime, payment) { }

void ProjectManager::addManager(Manager* person)
{
	this->managerList.push_back(person);
}

void ProjectManager::managerOnDelete(Manager* person)
{
	for (int i = 0; i < this->managerList.size(); i++)
	{
		if (this->managerList[i] == person)
		{
			this->managerList.erase(this->managerList.begin() + i);
			return;
		}
	}
}

void ProjectManager::deleteAll()
{
	this->managerList.clear();
}

std::vector<Manager*> ProjectManager::getManager()
{
	std::vector<Manager*> v(this->managerList.size());
	for (int i = 0; i < this->managerList.size(); i++)
	{
		v[i] = this->managerList[i];
	}
	return v;
}

double ProjectManager::calculateChiefPayment(double payment) 
{
	return payment * this->managerList.size();
}

void ProjectManager::calc(double percent, double budjet, double chiefPayment)
{
	this->payment = calculateProjectPayment(percent, budjet) + calculateChiefPayment(chiefPayment);
}