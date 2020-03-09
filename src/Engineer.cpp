#include "Engineer.h"

Engineer::Engineer(int id, std::string name, int worktime, int base, std::string projectName, int projectBudget, double percent) :
	Employee(id, name, worktime) {
	this->base = base;
	this->projectName = projectName;
	this->percent = percent;
	this->projectBudget = projectBudget;
	calc();
}

int Engineer::calcWorkTime(int worktime, int base, double overtimeCorfficient) {
	return worktime * base * overtimeCorfficient;
}

int Engineer::calcProject(double percent, int budget) {
	return percent * budget;
}

void Engineer::calc() {
	payment = calcWorkTime(worktime, base);
	payment += calcProject(percent, projectBudget);
}

int Engineer::getBase() {
	return base;
}
void Engineer::setBase(int base) {
	this->base = base;
	calc();
}
std::string Engineer::getProjectName() {
	return projectName;
}
void Engineer::setProjectName(std::string projectName) {
	this->projectName = projectName;
}
double Engineer::getPercent() {
	return percent;
}
void Engineer::setPercent(double percent) {
	this->percent = percent;
	calc();
}
int Engineer::getProjectBudget() {
	return projectBudget;
}
void Engineer::setProjectBudget(int projectBudget) {
	this->projectBudget = projectBudget;
	calc();
}