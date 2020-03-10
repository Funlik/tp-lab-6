
#include "manager.h"

ProjManager::ProjManager(int id, string fio, float project_participation, int project_budget, int subordinates) : Manager(id, fio, project_participation, project_budget)
{
	this->subordinates = subordinates;
}

float ProjManager::calchepayment()
{
	return subordinates * 1000;
}

void ProjManager::solary()
{
	payment = calcprpayment() + calchepayment();
}
