
#include "personal.h"

Personal::Personal(int id, string fio, int worktime, float base) : Employee(id, fio, worktime)
{
	this->base;
}

float Personal::calcwtpayment()
{
	return base * worktime;
}

void Personal::solary()
{
	//float solary = calcwtpayment(base);
	float solary = calcwtpayment();
}