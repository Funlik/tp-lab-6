#pragma once
#include "Engineer.h"
#include "Manager.h"
#include "Personal.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Programmer.h"
#include "Tester.h"
#include "TeamLeader.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
class Factory {
	Cleaner* NewCleaner(int id, string name, int worktime, int rate);
	Driver* NewDriver(int id, string name, int worktime, int base);
	Tester* NewTester(int id, string name, int worktime, int rate,int fare,int project);
	Programmer* NewProgrammer(int id, string name, int worktime, int rate, int fare, int project);
	TeamLeader* NewTeamLeader(int id, string name, int worktime, int rate, int fare, int project,int people);
	Manager* NewManager(int id, string name, int worktime, int project);
	ProjectManager* NewProjManager(int id, string name, int worktime, int project,int people);
	SeniorManager* NewSenManager(int id, string name, int worktime, int project, int people);
public:
	Employee* NewEmployee(string position, int id, string name, int worktime, int rate,int fare, int project,int people);
};