#ifndef FACTORY_H
#define FACTORY_H
#include <string>
#include <map>
#include "Programmer.h"
#include "TeamLeader.h"
#include "SeniorManager.h"
#include "Driver.h"
#include "Cleaner.h"

struct FactoryKey {
	int position_id;
	int employee_id;
	std::string name;
	int worktime;
	int base;
	int percent;
};

class Factory
{
	std::map<std::string, int> idMap;
	Cleaner* makeCleaner(int id, std::string name, int worktime, int base);
	Driver* makeDriver(int id, std::string name, int worktime, int base);
	Programmer* makeProgrammer(int id, std::string name, int worktime, int base);
	Tester* makeTester(int id, std::string name, int worktime, int base);
	TeamLeader* makeTeamLeader(int id, std::string name, int worktime, int base);
	Manager* makeManager(int id, std::string name, int worktime, int percent);
	ProjectManager* makeProjectManager(int id, std::string name, int worktime, int percent);
	SeniorManager* makeSeniorManager(int id, std::string name, int worktime, int percent);
public:
	Factory();
	std::map<std::string, int> getIdMap();
	Employee* makeEmployee(FactoryKey fk);
};

#endif

