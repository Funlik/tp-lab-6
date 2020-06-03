#ifndef FACTORY_H
#define FACTOTY_H

#include <map>
#include <vector>
#include <string>

#include "Stuff.h"
#include "Cleaner.h"
#include "Driver.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "SeniorManager.h"

struct Factory
{
	Employee* createEmployee(Stuff token);

	Employee* createEmployee(Stuff token, std::string& valueType);
};

class Company {
public:
	SeniorManager* senior;
	std::vector<Cleaner*>cleaners;
	std::vector<Driver*>drivers;
	std::map<std::string, std::vector<Programmer*>>programmers;
	std::map<std::string, std::vector<Tester*>>testers;
	std::map<std::string, std::vector<Manager*>>managers;
	std::map<std::string, TeamLeander*>teamLeaders;
	std::map<std::string, ProjectManager*>projectManagers;
	void addEmployee(Employee* employee, std::string type);
	void addEmployee(std::string& baseString);
};

#endif // !FACTORY_H
