#include "Tester.h"



Tester::Tester(string fio, int id, int workTime, int payment, Project* project) : Engineer(fio, id, workTime, payment, project, 0)
{
}

Tester::Tester(string fio, int id, int workTime, int payment) : Engineer(fio, id, workTime, payment, 0)
{
	project = 0;
}

Tester::~Tester()
{
}

int Tester::getSalary()
{
	return getSalaryByWorkTime();
}
