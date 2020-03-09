#pragma once
#include "Employee.h"
#include <vector>
#include <string>

std::vector<std::string> split(const std::string & s, char delimiter);
std::vector<Employee *> parseEmployeeList(std::string fileName);

class Factory
{
private:
	enum speciality {CLEANER, DRIVER, PROGRAMMER, TESTER, TEAM_LEADER, PROJECT_MANAGER, SENIOR_MANAGER};
public:
	static Employee * CreateEmployee(std::vector<std::string> info);
};