#include "Manager.h"

Manager::Manager(int id, std::string fio, int worktime, double contribution, int budget, std::string project_name) : Employee(id, fio, worktime) {
	this->contribution = contribution;
	this->budget = budget;
	this->project_name = project_name;
}

void Manager::calcpayment() {
	this->payment = ProjectPayment();
}

int Manager::ProjectPayment() {
	return budget * contribution;
}

void Manager::setcontribution(double contribution) {
	this->contribution = contribution;
}

double Manager::getcontribution() const{
	return contribution;
}