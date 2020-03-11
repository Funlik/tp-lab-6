#include "Manager.h"

Manager::Manager(int id, string name, float participation, int budgets) :
	Employee(id, name, 0)
{
	mParticipation = participation;
	mBudget = budgets;
}

float Manager::countByProject()
{
	
	return mBudget * mParticipation;
}

void Manager::calculatePayment()
{
	payment = countByProject();
}