#include "ProjectManager.h"
#include <iostream>


ProjectManager::ProjectManager(std::string id, std::string name, int workTime, int percent, int baseLeaser):
	Manager(id, name, workTime, percent)
{
	baseLeader_ = baseLeaser;
}


ProjectManager::~ProjectManager()
{
}


int ProjectManager::calcPaymentForHeading() {
	return baseLeader_ * subordinates_.size();
}

//------------------------BASE LEADER----------------------
void ProjectManager::setBaseLeader(int baseLeader) {
	baseLeader_ = baseLeader;
}


int ProjectManager::getBaseLeader() {
	return baseLeader_;
}
//---------------------------------------------------------

//--------------------SUBORDINATES-------------------------
void ProjectManager::addSubordinate(Manager* manager) {
	subordinates_.push_back(manager);
}


void ProjectManager::removeSubordinates() {
	subordinates_.clear();
}


std::vector<Manager*> ProjectManager::getSubordinates() {
	return subordinates_;
}


void ProjectManager::printSubordinates() {
	for (auto i : subordinates_) {
		std::cout << i->getID() << " " << i->getName() << " " << i->getPayment() << std::endl;
	}
}
//---------------------------------------------------------


void ProjectManager::calcPayment() {
	payment_ = calcPaymentForHeading() + calcPaymentForProject();
}