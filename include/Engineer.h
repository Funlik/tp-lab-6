#pragma once

#include "Employee.h"
#include "IWorkTime.h"
#include "IProject.h"

class Engineer : public Employee, public IWorkTime, public IProject {
protected:
	ProjectBudget* project = nullptr;
	int paymentWorkTime() override;
	int paymentProject() override;
public:
	Engineer(int id, string name, int worktime, ProjectBudget* project);
	void setWorktime(int worktime);
	void setProject(ProjectBudget* project) override;
	ProjectBudget* getProject() override;
	int getPayment() override;
};
