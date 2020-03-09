#include "Manager.h"

Manager::Manager(int id, std::string name, std::string projectName, int projectBudget, double percent):Employee(id, name, 0){
	this->projectName = projectName;
	this->percent = percent;
	this->projectBudget = projectBudget;
	calc();
}
std::string Manager::getProjectName() {
	return projectName;
}
void Manager::setProjectName(std::string projectName) {
	this->projectName = projectName;
}
double Manager::getPercent() {
	return percent;
}
void Manager::setPercent(double percent) {
	this->percent = percent;
	calc();
}
int Manager::getProjectBudget() {
	return projectBudget;
}
void Manager::setProjectBudget(int projectBudget) {
	this->projectBudget = projectBudget;
	calc();
}
void Manager::calc() {
	payment = calcProject(percent, projectBudget);
}
int Manager::calcProject(double percent, int budget) {
	return percent * budget;
}