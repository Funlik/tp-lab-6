#include "Programmer.h"

Programmer::Programmer(int id, std::string fio, int worktime, int payment_base,
	double contribution, std::string project_name, int budget) : Engineer(id, fio, worktime, payment_base, contribution, project_name, budget) {};

void Programmer::calcpayment() {
	this->payment = WorkTimePayment() +
					ProjectPayment();
}

int Programmer::WorkTimePayment() {
	return worktime * payment_base;
}

int Programmer::ProjectPayment() {
	return budget * contribution;
}