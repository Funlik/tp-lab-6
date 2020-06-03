#include "Manager.h"

Manager::Manager(int id, string name, int worktime, ProjectBudget* project) : Employee(id, name, worktime) {
	this->project = project;
	if (project) {
		project->data->addManHours(worktime);
		project->data->incManagers();
	}
}

Manager::~Manager() {
	if (project) {
		project->data->decManagers();
	}
}

int Manager::paymentProject() {
	return (double)project->getBudget() / project->getManHours() * worktime;
}

void Manager::setProject(ProjectBudget* project) {
	if (this->project) {
		this->project->data->subtractManHours(worktime);
	}
	this->project = project;
	if (project) {
		project->data->addManHours(worktime);
	}
}
ProjectBudget* Manager::getProject() {
	return project;
}

void Manager::setWorktime(int worktime) {
	if (project) {
		project->data->subtractManHours(this->worktime);
		project->data->addManHours(worktime);
	}
	Employee::setWorktime(worktime);
}

int Manager::getPayment() {
	return paymentProject();
}