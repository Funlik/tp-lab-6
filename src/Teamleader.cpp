#include "TeamLeader.h"

TeamLeader::TeamLeader(int id, string name, int worktime, float rate, float perHour, float participation,
	int t_project_budget, int juniors):
	Programmer(id, name, worktime, rate, perHour, participation, t_project_budget)
{
	mJuniors = juniors;
}
float TeamLeader::countByHeading()
{
	return juniors * 1000;
}

void TeamLeader::calculatePayment()
{
	payment = countByProject() + countByWorktime() + countByHeading() + rate;
}