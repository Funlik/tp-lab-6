#pragma once

#include "ProjectManager.h"

class SeniorManager : public ProjectManager {
private:
	int paymentHeading() override;
public:
	SeniorManager(int id, string name, int worktime, ProjectBudget* project);
};