#include "Tester.h"

Tester::Tester(int id, string name, int worktime, float rate, float perHour, float participation,
	int budget) :
	Engineer(id, name, worktime, rate, perHour, participation, budget)
{

}

void Tester::calculatePayment()
{
	payment = countByProject() + countByWorktime() * 1.1 + rate;
}