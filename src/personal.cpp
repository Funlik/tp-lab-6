
#include "personal.h"

Personal::Personal(int id, string fio, int worktime, float base) : Employee(id, fio, worktime)
{
	this->base = base;
}

float Personal::calcwtpayment()
{
	return base * worktime;
}

void Personal::solary()
{
	payment = calcwtpayment();
}