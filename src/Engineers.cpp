#include "Engineers.h"

// class Engineer
Engineer::Engineer(int id, std::string name, std::string position, int paymentPerHour, Task* project, int projectContribution) :
Employee(id, name, position)
{
	this->paymentPerHour = paymentPerHour;
	this->project = project;
	this->projectContribution = projectContribution;
}
int Engineer::calcBaseSalary() {
	return paymentPerHour * worktime;
}
int Engineer::calcProjectIncome() {
	return int(double(projectContribution) / 100 * project->getCost());
}

// class Programmer

Programmer::Programmer(int id, std::string name, std::string position, int paymentPerHour, Task* project, int projectContribution) :
	Engineer(id, name, position, paymentPerHour, project, projectContribution) {}
int Programmer::calcSalary() {
	payment = calcBaseSalary() + calcProjectIncome();
	return payment;
}

// class Tester
Tester::Tester(int id, std::string name, std::string position, int paymentPerHour, int extraPayment, Task* project, int projectContribution) :
	Engineer(id, name, position, paymentPerHour, project, projectContribution)
{
	this->extraPayment = extraPayment;
}

int Tester::calcSalary() {
	payment = calcBaseSalary() + calcProjectIncome() + extraPayment;
	return payment;
}

// class TeamLeader

TeamLeader::TeamLeader(int id, std::string name, std::string position, int paymentPerHour, Task* project, int projectContribution, int headingPayment, int staffNumber) :
	Programmer(id, name, position, paymentPerHour, project, projectContribution) {
	this->headingPayment = headingPayment;
	this->staffNumber = staffNumber;
}

int TeamLeader::calcHeadingIncome() {
	return headingPayment * staffNumber;
}

int TeamLeader::calcSalary() {
	payment = 
		calcBaseSalary() +
		calcProjectIncome() +
		calcHeadingIncome();
	return payment;
}