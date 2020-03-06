#include "Engineer.h"

Engineer::Engineer(unsigned int id, string name, unsigned int base, string project, float budget, float share) : Employee(id, name) {
	this->base = base;
	this->budget = budget;
	this->project = project;
	this->share = share;
}
float Engineer::worktime_payment() {
	return this->worktime * this->base;
}
float Engineer::project_payment() {
	return this->budget * (this->share / 100);
}
void Engineer::calc() {
	this->payment = worktime_payment() + project_payment();
}
float Engineer::getBudget() {
	return this->budget;
}

Programmer::Programmer(unsigned int id, string name, unsigned int base, string project, float budget, float share)
	: Engineer(id, name, base, project, budget, share) {}

Tester::Tester(unsigned int id, string name, unsigned int base, string project, float budget, float share) 
	: Engineer(id, name, base, project, budget, share) {}

TeamLeader::TeamLeader(unsigned int id, string name, unsigned int base, string project, float budget, float share, unsigned int staffCount) 
	: Programmer(id, name, base, project, budget, share) {
	this->staffCount = staffCount;
}
float TeamLeader::heading_payment() {
	return this->staffCount * 400; // 400$ - за руководство одним сотрудником
}
void TeamLeader::calc() {
	this->payment = worktime_payment() + project_payment() + heading_payment();
}