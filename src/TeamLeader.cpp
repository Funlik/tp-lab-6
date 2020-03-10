#include "TeamLeader.h"

TeamLeader::TeamLeader(int id, string name, int worktime, ProjectBudget* project) :	Programmer(id, name, worktime, project) {}

int TeamLeader::paymentWorkTime() {
	return worktime * 420;
}

int TeamLeader::paymentHeading() {
	return project->getProgrammers() * 1337;
}

int TeamLeader::getPayment() {
	return paymentWorkTime() + paymentProject() + paymentHeading();
}