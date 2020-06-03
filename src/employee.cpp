
#include "employee.h"

Employee::Employee(int id, string fio, int worktime)
{
	this->id = id;
	this->fio = fio;
	this->worktime = worktime;
}

string Employee::getfio()
{
	return fio;
}

float Employee::getpayment()
{
	return payment;
}
