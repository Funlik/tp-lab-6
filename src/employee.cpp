
#include "employee.h"

Employee::Employee(int id, string fio, int worktime)
{
	this->id = id;
	this->fio = fio;
	this->worktime = worktime;
}

/*int Employee::getid(int id)
{
	return id;
}*/

string Employee::getfio()
{
	return fio;
}

/*float getworktime(int worktime)
{
	return worktime;
}*/

float Employee::getpayment()
{
	return payment;
}
