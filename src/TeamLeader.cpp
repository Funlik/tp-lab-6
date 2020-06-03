#include "TeamLeader.h"
#include <iostream>


TeamLeader::TeamLeader(std::string id, std::string name, int workTime, int base, int percent, int baseLeader) :
	Engineer(id, name, workTime, base, percent)
{
	baseLeader_ = baseLeader;
}


TeamLeader::~TeamLeader()
{
}


int TeamLeader::calcPaymentForHeading() {
	return baseLeader_ * subordinates_.size();
}

//------------------------BASE---------------------------
void TeamLeader::setBaseLeader(int baseLeader) {
	baseLeader_ = baseLeader;
}


int TeamLeader::getBaseLeader() {
	return baseLeader_;
}
//-------------------------------------------------------

//--------------------SUBORDINATES-------------------------
void TeamLeader::addSubordinate(Programmer* programmer) {
	subordinates_.push_back(programmer);
}


void TeamLeader::removeAllSubordinates() {
	subordinates_.clear();
}


void TeamLeader::printSubordinates() {
	for (auto i : subordinates_) {
		std::cout << i->getID() << " " << i->getName() << " " << i->getPayment() << std::endl;
	}
}
//-------------------------------------------------------

void TeamLeader::calcPayment() {
	payment_ = calcPaymentForWorkTime() + calcPaymentForProject() + calcPaymentForHeading();
}