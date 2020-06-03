#pragma once

#include "Programmer.h"
#include "IHeading.h"

class TeamLeader : public Programmer, public IHeading {
private:
	int paymentWorkTime() override;
	int paymentHeading() override;
public:
	TeamLeader(int id, string name, int worktime, ProjectBudget* project);
	int getPayment() override;
};