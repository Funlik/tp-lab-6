#pragma once

#include "Engineer.h"

class Tester : public Engineer {
private:
	int paymentWorkTime() override;
public:
	Tester(int id, string name, int worktime, ProjectBudget* project);
};