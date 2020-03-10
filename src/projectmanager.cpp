
#include "manager.h"

ProjManager::ProjManager(int id, string fio, float project_participation, int project_budget, int subordinates) : Manager(id, fio, project_participation, project_budget)
{
	this->subordinates;
}

float ProjManager::calchepayment()
{
	return subordinates * 1000;
}

void ProjManager::solary()
{
	//float solary = calcprpayment(project_participation, project_budget) + calchepayment(subordinates);
	float solary = calcprpayment() + calchepayment();
}
