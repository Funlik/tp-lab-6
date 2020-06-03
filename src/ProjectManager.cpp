#include "ProjectManager.h"

ProjectManager::ProjectManager(int id, std::string fio, int worktime, double contribution, int budget, std::string project_name, int num_of_employees) :
	Manager(id, fio, worktime, contribution, budget, project_name) {
	this->num_of_employees = num_of_employees;
};

void ProjectManager::calcpayment() {
	this->payment = ProjectPayment() + HeadingPayment();
}

int ProjectManager::ProjectPayment() {
	return budget * contribution;
}

int ProjectManager::HeadingPayment() {
	return num_of_employees * 1500;
}