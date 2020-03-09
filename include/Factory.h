#pragma once
#include <map>
#include "Driver.h"
#include "Cleaner.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "Employee.h"
#include "Project.h"
#include <vector>
#include <iostream>

class Factory
{
	std::map<std::string, Employee*> workers_;
	std::vector<std::string> split(std::string& str, char delimeter);
	
public:
	Employee* createEmployee(std::string& str);

	void createProject(std::string& str);

	void countPaymentForStaff();

	void printWorkers();

	Factory();
	~Factory();
};

