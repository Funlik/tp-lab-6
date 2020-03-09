#include "Employee.h"

Employee::Employee(int id, std::string fio, int worktime) {
	this->id = id;
	this->worktime = worktime;
	this->fio = fio;
}

std::string Employee::getfio() const {
	return fio;
}

int Employee::getid() const {
	return id;
}

int Employee::getworktime() const {
	return worktime;
}

int Employee::getpayment() const {
	return payment;
}