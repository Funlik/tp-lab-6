
#include "engineer.h"

Engineer::Engineer(int id, string fio, int worktime, float base, float pay_in_hour, float project_participation, int project_budget) : Employee(id, fio, worktime)
{
	this->base = base;
	this->pay_in_hour = pay_in_hour;
	this->project_participation = project_participation;
	this->project_budget = project_budget;
}

float Engineer::calcwtpayment()
{
	return pay_in_hour * worktime;
}

//float Engineer::calcprpayment(float percent, int budget)
float Engineer::calcprpayment()
{
	return project_participation * project_budget;
}

void Engineer::solary()
{
	//float solary = calcwtpayment(pay_in_hour) + calcprpayment(project_participation, project_budget) + base;
	payment = calcwtpayment() + calcprpayment() + base;
}