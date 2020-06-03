#include "TeamLeader.h"

TeamLeader::TeamLeader(int id, std::string fio, int worktime, int payment_base,
	double contribution, std::string project_name, int budget, int num_of_employees) : Programmer(id, fio, worktime, payment_base, contribution,
		project_name, budget) 
{
	this->num_of_employees = num_of_employees;
}

void TeamLeader::calcpayment() {
	this->payment = WorkTimePayment() +
					ProjectPayment() +
					HeadingPayment();
}

int TeamLeader::WorkTimePayment() {
	return worktime * payment_base;
}

int TeamLeader::ProjectPayment() {
	return budget * contribution;
}

int TeamLeader::HeadingPayment() {
	return num_of_employees * 1500;
}