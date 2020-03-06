#include "Manager.h"

Manager::Manager(unsigned int id, string name, vector<string> projects, vector<float> ratio,vector<int> budget) :Employee(id, name)
{
	this->projects = projects;
	this->ratio = ratio;
	this->budget = budget;
}

ProjectManager::ProjectManager(unsigned int id, string name, vector<string> projects, vector<float> ratio, vector<int> budget,int workers) : Manager(id,name,projects,ratio,budget)
{
	this->workers = workers;
}

SeniorManager::SeniorManager(unsigned int id, string name, vector<string> projects, vector<float> ratio, vector<int> budget, int workers) : ProjectManager(id, name,projects, ratio,budget, workers)
{
	this->workers = workers;
}

