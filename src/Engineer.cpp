#include "Engineer.h"

Engineer::Engineer(int id, string name, int worktime, ProjectBudget* project) : Employee(id, name, worktime) {
	this->project = project;
	if (project) {
		project->data->addManHours(worktime);
	}
}

int Engineer::paymentWorkTime() {
	return worktime * 250;
}

int Engineer::paymentProject() {
	return (double)project->getBudget() / project->getManHours() * worktime;
}

void Engineer::setProject(ProjectBudget* project) {
	if (this->project) {
		this->project->data->subtractManHours(worktime);
	}
	this->project = project;
	if (project) {
		project->data->addManHours(worktime);
	}
}
ProjectBudget* Engineer::getProject() {
	return project;
}

void Engineer::setWorktime(int worktime) {
	if (project) {
		project->data->subtractManHours(this->worktime);
		project->data->addManHours(worktime);
	}
	Employee::setWorktime(worktime);
}

int Engineer::getPayment() {
	return paymentProject() + paymentWorkTime();
}