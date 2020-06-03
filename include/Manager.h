#pragma once
#include "Employee.h"
#include "IProject.h"
#include "Project.h"

class Manager :
	public Employee, protected IProject
{
protected:
	Project* project_ = nullptr;
	int percent_;
	int calcPaymentForProject();

public:
	Manager(std::string id, std::string name, int workTime, int percent);
	~Manager();

	void setPercent(int percent);
	int getPercent();

	void setProject(Project* project);
	Project* getProject();
	
	void calcPayment();
};

