#pragma once
#include "Employee.h"
#include "IProject.h"
#include "IWorkTime.h"
#include "Project.h"

class Engineer : public Employee, protected IWorkTime, protected IProject
{
protected:
	int base_;
	int percent_;
	Project* project_ = nullptr;
	int calcPaymentForWorkTime();
	int calcPaymentForProject();

public:
	Engineer(std::string id, std::string name, int workTime, int base, int percent);
	~Engineer();

	void setPercent(int percent);
	int getPercent();

	void setBase(int base);
	int getBase();

	void setProject(Project* project);
	Project* getProject();

	void calcPayment();
};

