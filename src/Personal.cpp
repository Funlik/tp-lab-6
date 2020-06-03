#include "Personal.h"

// class Personal
Personal::Personal(int id, std::string name, std::string position) : Employee(id, name, position) {}
int Personal::calcBaseSalary() {
	return paymentPerHour * worktime;
}

// class Cleaner
Cleaner::Cleaner(int id, std::string name, std::string position, int paymentPerHour) : Personal(id, name, position)
{
	this->paymentPerHour = paymentPerHour;
}
int Cleaner::calcSalary() {
	payment = calcBaseSalary();
	return payment;
}

// class Driver
Driver::Driver(int id, std::string name, std::string position, int paymentPerHour, int extraPayment) : Personal(id, name, position)
{
	this->paymentPerHour = paymentPerHour;
	this->extraPayment = extraPayment;
}
int Driver::calcSalary() {
	payment = calcBaseSalary() + extraPayment;
	return payment;
}
