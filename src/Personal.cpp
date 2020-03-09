#include "Personal.h"


Personal::Personal(std::string id, std::string name, int workTime, int base): 
	Employee(id, name, workTime)
{
	base_ = base;
}


Personal::~Personal()
{
}


int Personal::calcPaymentForWorkTime() {
	return workTime_ * base_;
}

//-------------------------BASE--------------------------
void Personal::setBase(int base) {
	base_ = base;
}

int Personal::getBase() {
	return base_;
}
//-------------------------------------------------------

void Personal::calcPayment() {
	payment_ = calcPaymentForWorkTime();
}