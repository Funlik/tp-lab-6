
#include "engineer.h"

TeamLeader::TeamLeader(int id, string fio, int worktime, float base, float pay_in_hour, float project_participation, int project_budget, int subordinates) : Programmer(id, fio, worktime, base, pay_in_hour, project_participation, project_budget)
{
	this->subordinates;
}

float TeamLeader::calchepayment()
{
	return subordinates * 500;
}

void TeamLeader::solary()
{
	//float solary = calcwtpayment(pay_in_hour) + calcprpayment(project_participation, project_budget) + calchepayment(subordinates) + base;
	float solary = calcwtpayment() + calcprpayment() + calchepayment() + base;
}