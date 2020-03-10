
#include "manager.h"

Manager::Manager(int id, string fio, float project_participation, int project_budget) : Employee(id, fio, worktime)
{
	this->project_participation = project_participation;
	this->project_budget = project_budget;
}

float Manager::calcprpayment()
{
	return project_participation * project_budget;
}

void Manager::solary()
{
	payment = calcprpayment();
}