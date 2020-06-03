#include "Manager.h"


Manager::Manager(std::string id, std::string name, int workTime, int percent): Employee(id, name, workTime)
{
	percent_ = percent;
}


Manager::~Manager()
{
}


int Manager::calcPaymentForProject() {
	 return percent_ * project_->getBudget()/100;
}

//-------------------------PERCENT-----------------------
void Manager::setPercent(int percent) {
	percent_ = percent;
}


int Manager::getPercent() {
	return percent_;
}
//-------------------------------------------------------

//---------------------------PROJECT---------------------
void Manager::setProject(Project* project) {
	project_ = project;
}


Project* Manager::getProject() {
	return project_;
}
//-------------------------------------------------------

void Manager::calcPayment() {
	payment_ = calcPaymentForProject();
}