#pragma once

#include "ProjectManager.h"
#include <string>

class SeniorManager : public ProjectManager
{
private:
	int numprojects = 0;
public:
	SeniorManager();

	SeniorManager(int id, const std::string &name, int numprojects, double contribution, int salary);
    int getPayment(int whole_budget, double contribution) override;
	void setPayment() override;
};
