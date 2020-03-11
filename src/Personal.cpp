#include "Personal.h"

Personal::Personal(int id, string name, int worktime, float rate): Employee(id, name, worktime)
{
	ratePerHour = rate;
}

float Personal::countByWorktime()
{
	return ratePerHour * worktime;
}

void Personal::calculatePayment()
{
	payment = countByWorktime();
}