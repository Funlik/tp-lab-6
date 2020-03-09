#include "Personal.h"



Personal::Personal(string fio, int id, int payment, int workTime) : Employee(fio, id, payment)
{
	this->workTime = workTime;
}


Personal::~Personal()
{
}

int Personal::getSalary()
{
	return getSalaryByWorkTime();
}

int Personal::getSalaryByWorkTime()
{
	return payment * workTime;
}

int Personal::getWorkTime()
{
	return workTime;
}

void Personal::setWorkTime(int workTime) 
{
	this->workTime = workTime;
}
