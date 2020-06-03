#include "Engineer.h"

Engineer::Engineer(int id, std::string fio, int worktime, int payment_base, double contribution, std::string project_name, int budget) : Employee(id, fio, worktime){
	this->payment_base = payment_base;
	this->contribution = contribution;
	this->project_name = project_name;
	this->budget = budget;
}

int Engineer::WorkTimePayment() {
	return worktime * payment_base;
}

int Engineer::ProjectPayment() {
	return contribution * budget;
}