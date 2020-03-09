#include "Engineer.h"
#include "Factory.h"

Engineer::Engineer(int id, string name, int worktime, int base,  string project, float contribution) : Employee(id, name, worktime) {
	this->base = base;
	this->contribution = contribution; 
	this->project = project;
}

float Engineer::worktime_salary() {
	return worktime * base;
}

float Engineer::project_salary() {
	return projects[project] * contribution;
}

void Engineer::set_payment() {
	this->payment = worktime_salary() + project_salary();
}

Programmer::Programmer(int id, string name, int worktime, int base, string project, float contribution)
	: Engineer(id, name, worktime, base, project, contribution) {
	position = "Programmer";
}

Tester::Tester(int id, string name, int worktime, int base, string project, float contribution)
	: Engineer(id, name, worktime, base, project, contribution) {
	position = "Tester";
}

TeamLeader::TeamLeader(int id, string name, int worktime, int base, string project, float contribution, int employeesNumber)
	: Programmer(id, name, worktime, base, project, contribution) {
	this->employeesNumber = employeesNumber;
	position = "TeamLeader";
}

float TeamLeader::heading_salary() {
	return employeesNumber * 100;
}

void TeamLeader::set_payment() {
	this->payment = worktime_salary() + project_salary() + heading_salary();
}