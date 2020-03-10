#pragma once

#include "Engineer.h"

class Programmer : public Engineer {
private:
	int paymentWorkTime() override;
public:
	Programmer(int id, string name, int worktime, ProjectBudget* project);
	~Programmer();
};