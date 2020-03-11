#include "Engineer.h"

Engineer::Engineer(int id, string name, int worktime, float mRate, float perHour, float participation,
	int budget) :
	Employee(id, name, worktime)
{
	rate = mRate;
	payHour = perHour;
	mParticipation = participation;
	mBudget = budget;
}

float Engineer::countByWorktime()
{
	return worktime * payHour;
}

float Engineer::countByProject()
{
	return mBudget * mParticipation;
}

void Engineer::calculatePayment()
{
	payment = countByProject() + countByWorktime() + rate;
}