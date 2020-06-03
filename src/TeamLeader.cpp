#include "TeamLeader.h"

TeamLeander::TeamLeander(int id, std::string name, int worktime, int base, std::string projectName, int projectBudget, double percent, int headingBase) :
Programmer(id, name, worktime, base, projectName, projectBudget, percent){
	this->headingBase = headingBase;
	calc();
}
std::vector<Programmer*>TeamLeander::getSubProgrammers() {
	return subProgrammers;
}
void TeamLeander::addSubProgrammer(Programmer* programmer) {
	subProgrammers.push_back(programmer);
	calc();
}
std::vector<Tester*>TeamLeander::getSubTesters() {
	return subTesters;
}
void TeamLeander::addSubTester(Tester* tester) {
	subTesters.push_back(tester);
	calc();
}
void TeamLeander::calc()  {
	payment = calcWorkTime(worktime, base);
	payment += calcProject(percent, projectBudget);
	payment += calcHeading(headingBase, subProgrammers.size() + subTesters.size());
}

int TeamLeander::calcHeading(int headingBase, int subordinatesNumber) {
	return headingBase * subordinatesNumber;
}

int TeamLeander::getHeadingBase() {
	return headingBase;
}
void TeamLeander::setHeadingBase(int headingBase) {
	this->headingBase = headingBase;
	calc();
}