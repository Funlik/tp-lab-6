#pragma once
#include "Projects.h"
#include "Employee.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Programmer.h"
#include "Tester.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include <vector>

class Company
{
private:
	std::vector <Employee*> AllPersonal;
	std::vector <Projects*> projects;
	std::vector <std::string> split(const std::string&, char);
public:
	Company();
	void ReadFile();
	void ShowAllInformation();
};

