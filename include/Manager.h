#pragma once

#include "Employee.h"
#include "IProject.h"

class Manager : public Employee, public IProject {
protected:
	ProjectBudget* project = nullptr;
	int paymentProject() override;
public:
	Manager(int id, string name, int worktime, ProjectBudget* project);
	~Manager();
	void setWorktime(int worktime);
	void setProject(ProjectBudget* project) override;
	ProjectBudget* getProject() override;
	int getPayment() override;
};