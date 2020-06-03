#include "Engineer.h"



Engineer::Engineer(std::string id, std::string name, int workTime, int base, int percent):
	Employee(id, name, workTime)
{
	base_ = base;
	percent_ = percent;
}


Engineer::~Engineer()
{
}


int Engineer::calcPaymentForWorkTime() {
	return base_ * workTime_;
}


int Engineer::calcPaymentForProject() {
	return project_->getBudget() * percent_;
}

//-------------------------PERCENT-----------------------
void Engineer::setPercent(int percent) {
	percent_ = percent;
}


int Engineer::getPercent() {
	return percent_;
}
//-------------------------------------------------------

//---------------------------BASE------------------------
void Engineer::setBase(int base) {
	base_ = base;
}


int Engineer::getBase() {
	return base_;
}
//-------------------------------------------------------

//---------------------------PROJECT---------------------
Project* Engineer::getProject() {
	return project_;
}


void Engineer::setProject(Project* project) {
	project_ = project;
}
//-------------------------------------------------------

void Engineer::calcPayment() {
	payment_ = calcPaymentForProject() + calcPaymentForWorkTime();
}