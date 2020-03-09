#include "SeniorManager.h"

SeniorManager::SeniorManager(int id, std::string fio, int worktime, double contribution, int budget, int num_of_employees) :
	ProjectManager(id, fio, worktime, contribution, budget, "", num_of_employees) {};

void SeniorManager::calcpayment() {
	this->payment = ProjectPayment() + HeadingPayment();
}

int SeniorManager::HeadingPayment() {
	return num_of_employees * 2000;
}