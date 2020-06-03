#include "TeamLeader.h"

TeamLeader::TeamLeader(int id, string name, int worktime, float rate, float perHour, float participation,
	int budget, int mJuniors):
	Programmer(id, name, worktime, rate, perHour, participation, budget)
{
	juniors = mJuniors;
}
float TeamLeader::countByHeading()
{
	return juniors * 1000;
}

void TeamLeader::calculatePayment()
{
	payment = countByProject() + countByWorktime() + countByHeading() + rate;
}
