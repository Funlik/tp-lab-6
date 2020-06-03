#include "Employee.h"

Employee::Employee(std::string id, std::string name, int workTime)
{
	id_ = id;
	name_ = name;
	workTime_ = workTime;
	payment_ = 0;
}


Employee::~Employee()
{
}

//-------------------------ID----------------------------
void Employee::setID(std::string id) {
	id_ = id;
}


std::string Employee::getID() {
	return id_;
}
//-------------------------------------------------------

//-------------------------NAME--------------------------
void Employee::setName(std::string name) {
	name_ = name;
}


std::string Employee::getName()
{ 
	return name_;
}
//-------------------------------------------------------

//-------------------------WORK TIME---------------------
void Employee::setWorkTime(int workTime) 
{
	workTime_ = workTime;
};


unsigned int Employee::getWorkTime() {
	return workTime_;
};
//-------------------------------------------------------

//-------------------------PAYMENT-----------------------
void Employee::setPayment(int payment) {
	payment_ = payment;
};


unsigned int Employee::getPayment() {
	return payment_;
};
//-------------------------------------------------------
