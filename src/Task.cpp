#include "Task.h"
Task::Task(std::string projectName, int cost) {
	this->name = projectName;
	this->cost = cost;
}
void Task::addMember(std::string name, int contribution) {
	this->members[name] = contribution;
}
int Task::countContribution(std::string name) {
	return members[name];
}
int Task::getCost() {
	return cost;
}
int Task::getSize() {
	return members.size();
}