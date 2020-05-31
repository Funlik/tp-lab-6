#include "Personal.h"


double Personal::PaymentWorkTime()
{
	double payment = base * work_time;
	return payment;
}

double Personal::CalcPayment()
{
	double payment = PaymentWorkTime();
	return payment;
}

Cleaner::Cleaner(int id1, string name1, int work_time1, int base1)
{
	this->id = id1;
	this->name = name1;
	this->work_time = work_time1;
	this->base = base1;
	this->profession = "cleaner";
}

Driver::Driver(int id1, string name1, int work_time1, int base1)
{
	this->id = id1;
	this->name = name1;
	this->work_time = work_time1;
	this->base = base1;
	this->profession = "driver";
}
