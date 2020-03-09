#include "ProjectManager.h"

ProjectManager::ProjectManager(int id, std::string name, std::string projectName, int projectBudget, double percent, int headingBase):
Manager(id, name, projectName, projectBudget, percent){
	this->headingBase = headingBase;
	calc();
}

std::vector<Programmer*>ProjectManager::getSubProgrammers() {
	return subProgrammers;
}
void ProjectManager::addSubProgrammer(Programmer* programmer) {
	subProgrammers.push_back(programmer);
	calc();
}
std::vector<Tester*>ProjectManager::getSubTesters() {
	return subTesters;
}
std::vector<Manager*>ProjectManager::getSubManagers() {
	return subManagers;
}
void ProjectManager::addSubManager(Manager* manager) {
	subManagers.push_back(manager);
	calc();
}
void ProjectManager::addSubTester(Tester* tester) {
	subTesters.push_back(tester);
	calc();
}
void ProjectManager::calc() {
	payment = calcHeading(headingBase, subProgrammers.size() + subTesters.size() + subManagers.size());
	payment += calcProject(percent, projectBudget);
}
int ProjectManager::calcHeading(int headingBase, int subordinatesNumber) {
	return headingBase * subordinatesNumber;
}
int ProjectManager::getHeadingBase() {
	return headingBase;
}
void ProjectManager::setHeadingBase(int headingBase) {
	this->headingBase = headingBase;
	calc();
}