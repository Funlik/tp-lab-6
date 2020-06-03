#include "Manager.h"


Manager::Manager(int ID, string name, int worktime, int percent) : Employee(ID, name, worktime) 
{
	this->per = per;
}

int Manager::getPer() 
{
	return this->per;
}

int Manager::calcProjPayment(int per, int budget) 
{
	return (per * budget)/100;
}

void Manager::calcPayment(int per, int budget) 
{
	this->payment = calcProjPayment(per, budget);
}

void Manager::changePer(int newPer) {
	this->per = newPer;
}

void Manager::calcPayment()
{
}


ProjectManager::ProjectManager(int ID, string name, int worktime, int base) : Manager(ID, name, worktime, base) 
{
}

void ProjectManager::addManager(Manager* manager)
{
	this->managers.push_back(manager);
}

void ProjectManager::deleteManager(Manager* _manager) 
{
	for (int i = 0; i < this->managers.size(); i++)
	{
		if (this->managers[i] == _manager) 
		{
			this->managers.erase(this->managers.begin() + i);
			return;
		}
	}
}

int ProjectManager::calcHeadPayment(int leadbase) 
{
	return leadbase * this->managers.size();
}

void ProjectManager::calcPayment(int per, int budget, int leadbase) 
{
	this->payment = calcProjPayment(per, budget) + calcHeadPayment(leadbase);
}


SeniorManager::SeniorManager(int ID, string name, int worktime, int base) : ProjectManager(ID, name, worktime, base) 
{
}

void SeniorManager::addProjManager(ProjectManager* projManager) 
{
	this->projManagers.push_back(projManager);
}

void SeniorManager::deleteProjManager(ProjectManager* _projManager)
{
	for (int i = 0; i < this->projManagers.size(); i++)
	{
		if (this->projManagers[i] == _projManager)
		{
			this->projManagers.erase(this->projManagers.begin() + i);
			return;
		}
	}
}

int SeniorManager::calcHeadPayment(int leadbase)
{
	return leadbase * (this->projManagers.size());
}

void SeniorManager::calcPayment(int per, int budget, int leadbase)
{
	this->payment = calcProjPayment(per, budget) + calcHeadPayment(leadbase);
}