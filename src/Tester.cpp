#include "Tester.h"

Tester::Tester(int id, std::string fio, int worktime, int payment_base,
	double contribution, std::string project_name, int budget) : Engineer(id, fio, worktime, payment_base, contribution, project_name, budget) {};

void Tester::calcpayment() {
	this->payment = WorkTimePayment() +
		ProjectPayment();
}

int Tester::WorkTimePayment() {
	return worktime * payment_base;
}

int Tester::ProjectPayment() {
	return budget * contribution;
}