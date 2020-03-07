#include "Managers.h"

// class Manager
Manager::Manager(int id, std::string name, std::string position, Task* project, int projectContribution)
: Employee(id, name, position)
{
	this->project = project;
	this->projectContribution = projectContribution;
}
int Manager::calcProjectIncome() {
	return int(double(projectContribution) / 100 * project->getCost());
}
int Manager::calcSalary() {
	payment = calcProjectIncome();
	return payment;
}

// class ProjectManager
ProjectManager::ProjectManager(int id, std::string name, std::string position, Task* project, int projectContribution, int headingPayment, int staffNumber)  :
Manager(id, name, position, project, projectContribution) 
{
	this->headingPayment = headingPayment;
	this->staffNumber = staffNumber;
}
int ProjectManager::calcHeadingIncome() {
	return headingPayment * staffNumber;
}
int ProjectManager::calcSalary() {
	payment = calcProjectIncome() + calcHeadingIncome();
	return payment;
}

// class SeniorManager

SeniorManager::SeniorManager(
	int id,
	std::string name,
	std::string position,
	std::vector<Task*> projects, int projectContribution,
	int headingPayment, int staffNumber
) : ProjectManager( id, name, position, nullptr, projectContribution, headingPayment, staffNumber)
{
	this->projects = projects;
}

int SeniorManager::calcProjectIncome() {
	int projectIncome = 0;
	for (auto project : projects) {
		projectIncome += int(double(projectContribution) / 100 * project->getCost());
	}
	return projectIncome;
}
int SeniorManager::calcSalary() {
	payment = calcProjectIncome() + calcHeadingIncome();
	return payment;
}
