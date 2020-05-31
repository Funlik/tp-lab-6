#include "Manager.h"

Manager::Manager(unsigned int id, string name, string project, float budget, float share, unsigned int staffCount) : Employee(id, name) {
	this->project = project;
	this->budget = budget;
	this->share = share;
	this->staffCount = staffCount;
}
float Manager::project_payment() {
	return this->budget * (this->share / 100);
}
void Manager::calc() {
	this->payment = heading_payment() + project_payment();
}
float Manager::getBudget() {
	return this->budget;
}

ProjectManager::ProjectManager(unsigned int id, string name, string project, float budget, float share, unsigned int staffCount)
	: Manager(id, name, project, budget, share, staffCount) {}
float ProjectManager::heading_payment() {
	return this->staffCount * 400; // 400$ - за руководство одним сотрудником
}

SeniorManager::SeniorManager(unsigned int id, string name, string project, float budget, float share, unsigned int staffCount)
	: ProjectManager(id, name, project, budget, share, staffCount) {}
float SeniorManager::heading_payment() {
	return this->staffCount * 400; // 400$ - за руководство одним сотрудником
}
