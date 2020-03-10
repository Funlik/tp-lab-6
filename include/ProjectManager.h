#pragma once

#include "Manager.h"
#include "IHeading.h"

class ProjectManager : public Manager, public IHeading {
private:
	int paymentHeading() override;
public:
	ProjectManager(int id, string name, int worktime, ProjectBudget* project);
	~ProjectManager();
	int getPayment() override;
};