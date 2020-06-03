#pragma once //fix
#include "Engineer.h"
#include "Manager.h"
#include "Personal.h"


class Factory {
	Cleaner* NewCleaner(int id, string name, int worktime, int base);
	Driver* NewDriver(int id, string name, int worktime, int base);
	Tester* NewTester(int id, string name, int worktime, int base);
	Programmer* NewProgrammer(int id, string name, int worktime, int base);
	TeamLeader* NewTeamLeader(int id, string name, int worktime, int base);
	Manager* NewManager(int id, string name, int worktime, int percent);
	ProjectManager* NewProjManager(int id, string name, int worktime, int percent);
	SeniorManager* NewSenManager(int id, string name, int worktime, int percent);
public:
	Employee* NewEmployee(string position, int id, string name, int worktime, int base, int percent);
};
