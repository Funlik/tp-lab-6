#include "ProjectBudget.h"

ProjectBudget::ProjectBudget(string name, int budget) {
	this->name = name;
	this->budget = budget;
	data = new ProjectDataControl(this);
}

void ProjectBudget::setName(string name) {
	this->name = name;
}

string ProjectBudget::getName() {
	return name;
}

void ProjectBudget::setBudget(int budget) {
	this->budget = budget;
}

int ProjectBudget::getBudget() {
	return budget;
}

int ProjectBudget::getManHours() {
	return manHours;
}

int ProjectBudget::getProgrammers() {
	return programmers;
}

int ProjectBudget::getManagers() {
	return managers;
}


int ProjectBudget::getProjectManagers() {
	return projectManagers;
}


ProjectDataControl::ProjectDataControl(ProjectBudget* project) {
	this->project = project;
}

void ProjectDataControl::addManHours(int hours) {
	project->manHours += hours;
}

void ProjectDataControl::subtractManHours(int hours) {
	project->manHours -= hours;
}

void ProjectDataControl::incProgrammers() {
	project->programmers++;
}

void ProjectDataControl::decProgrammers() {
	project->programmers--;
}

void ProjectDataControl::incManagers() {
	project->managers++;
}

void ProjectDataControl::decManagers() {
	project->managers--;
}

void ProjectDataControl::incProjectManagers() {
	project->projectManagers++;
}

void ProjectDataControl::decProjectManagers() {
	project->projectManagers--;
}