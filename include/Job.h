#pragma once
#include <string>
#include <map>
#include "Programmer.h"
#include "TeamLeader.h"
#include "SeniorManager.h"
#include "Driver.h"
#include "Cleaner.h"

struct jobContainer
{
	int id;
	int workerID;
	std::string name;
	double worktime;
	double salary;
	double percent;
};

class Job
{
public:
	std::map<std::string, int> pairID;
	Programmer* makeProgrammer(int id, std::string name, double worktime, double payment);
	TeamLeader* makeTeamLeader(int id, std::string name, double worktime, double payment);
	SeniorManager* makeSeniorManager(int id, std::string name, double worktime, double payment);
	Tester* makeTester(int id, std::string name, double worktime, double payment);
	ProjectManager* makeProjectManager(int id, std::string name, double worktime, double payment);
	Driver* makeDriver(int id, std::string name, double worktime, double payment);
	Cleaner* makeCleaner(int id, std::string name, double worktime, double payment);
	Manager* makeManager(int id, std::string name, double worktime, double payment);

	Job();
	std::map<std::string, int> idMap();
	Employee* makeEmployee(jobContainer container);	
};

