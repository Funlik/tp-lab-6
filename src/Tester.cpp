#include "Tester.h"

Tester::Tester(int id, string name, int worktime, ProjectBudget* project) : Engineer(id, name, worktime, project) {}

int Tester::paymentWorkTime() {
	return worktime * 300;
}