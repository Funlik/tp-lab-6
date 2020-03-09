#include "Employee.h"



Employee::Employee(string fio, int id, int payment)
{
	this->fio = fio;
	this->id = id;
	this->payment = payment;
}

Employee::~Employee()
{
}


int Employee::getId()
{
	return id;
}

string Employee::getFio()
{
	return fio;
}


void Employee::setId(int id)
{
	this->id = id;
}

void Employee::setFio(string fio)
{
	this->fio = fio;
}

int Employee::getPayment()
{
	return payment;
}

void Employee::setPayment(int moneyPerTime)
{
	this->payment = moneyPerTime;
}