#include "Manager.h"
#include "Factory.h"

Manager::Manager(int id, string name, string project, float contribution) : Employee(id, name) {
	this->project = project;
	this->contribution = contribution;
	position = "Manager";
}

float Manager::project_salary() {
	return projects[project] * contribution;
}

void Manager::set_payment() {
	this->payment = project_salary();
}

ProjectManager::ProjectManager(int id, string name, string project, float contribution, int employeesNumber)
: Manager(id, name, project, contribution) {
	this->employeesNumber = employeesNumber;
	position = "ProjectManager";
}

float ProjectManager::heading_salary() {
	return employeesNumber * 100;
}

void ProjectManager::set_payment() {
	this->payment = project_salary() + heading_salary();
}

SeniorManager::SeniorManager(int id, string name, string project, float contribution, int employeesNumber)
	: ProjectManager(id, name, project, contribution, employeesNumber) {
	position = "SeniorManager";
}

void SeniorManager::set_payment() {
	float seniorSalary = 0;
	for (auto item : projects)
		seniorSalary += item.second * contribution;
	this->payment = seniorSalary + heading_salary();
}