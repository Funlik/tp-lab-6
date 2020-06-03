#include "Employee.h"

Employee::Employee(int mId, string FIO, int mWorktime)
{
	id = mId;
	name = FIO;
	worktime = mWorktime;
}

float Employee::getPayment()
{
	return payment;
}

string Employee::getName()
{
	return name;
}