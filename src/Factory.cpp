#include "Factory.h"
#include<iostream>

Employee* Factory::NewEmployee(string ValuePosition, int ValueId, string ValueName, int ValueWorktime, int ValueRate,int ValueFare, int ValueProject,int ValuePeople) {
	if (ValuePosition == "Cleaner") {
		return NewCleaner(ValueId, ValueName, ValueWorktime, ValueRate);
	}
	else if (ValuePosition == "Driver") {
		return NewDriver(ValueId, ValueName, ValueWorktime, ValueRate);
	}
	else if (ValuePosition == "Tester") {
		return NewTester(ValueId, ValueName, ValueWorktime, ValueRate, ValueFare, ValueProject);
	}
	else if (ValuePosition == "Programmer") {
		return NewProgrammer(ValueId, ValueName, ValueWorktime, ValueRate, ValueFare, ValueProject);
	}
	else if (ValuePosition == "TeamLeader") {
		return NewTeamLeader(ValueId, ValueName, ValueWorktime, ValueRate, ValueFare, ValueProject, ValuePeople);
	}
	else if (ValuePosition == "Manager") {
		return NewManager(ValueId, ValueName, ValueWorktime, ValueProject);
	}
	else if (ValuePosition == "ProjectManager") {
		return NewProjManager(ValueId, ValueName, ValueWorktime, ValueProject, ValuePeople);
	}
	else if (ValuePosition == "SeniorManager") {
		return NewSenManager(ValueId, ValueName, ValueWorktime, ValueProject, ValuePeople);
	}
}

Cleaner* Factory::NewCleaner(int ValueId,string ValueName,int ValueWorktime,int ValueRate) {
	Cleaner* N_Cleaner = new Cleaner(ValueId, ValueName, ValueWorktime, ValueRate);
	return N_Cleaner;
}

Driver* Factory::NewDriver(int ValueId,string ValueName,int ValueWorktime,int ValueRate) {
	Driver* N_Driverv = new Driver(ValueId, ValueName, ValueWorktime, ValueRate);
	return N_Driverv;
}

Tester* Factory::NewTester(int ValueId,string ValueName,int ValueWorktime,int ValueRate,int ValueFare,int ValueProject) {
	Tester* N_Tester = new Tester(ValueId, ValueName, ValueWorktime, ValueRate, ValueFare, ValueProject);
	return N_Tester;
}

Programmer* Factory::NewProgrammer(int ValueId, string ValueName, int ValueWorktime, int ValueRate, int ValueFare, int ValueProject) {
	Programmer* N_Programmer = new Programmer(ValueId, ValueName, ValueWorktime, ValueRate, ValueFare, ValueProject);
	return N_Programmer;
}

TeamLeader* Factory::NewTeamLeader(int ValueId,string ValueName,int ValueWorktime,int ValueRate,int ValueFare,int ValueProject,int ValuePeople) {
	TeamLeader* N_TLeader = new TeamLeader(ValueId, ValueName, ValueWorktime, ValueRate, ValueFare, ValueProject, ValuePeople);
	return N_TLeader;
}

Manager* Factory::NewManager(int ValueId,string ValueName,int ValueWorktime,int ValueProject) {
	Manager* N_Manager = new Manager(ValueId, ValueName, ValueWorktime, ValueProject);
	return N_Manager;
}

ProjectManager* Factory::NewProjManager(int ValueId,string ValueName,int ValueWorktime,int ValueProject,int ValuePeople) {
	ProjectManager* N_PManager = new ProjectManager(ValueId, ValueName, ValueWorktime, ValueProject, ValuePeople);
	return N_PManager;
}

SeniorManager* Factory::NewSenManager(int ValueId, string ValueName, int ValueWorktime, int ValueProject, int ValuePeople) {
	SeniorManager* N_SManager = new SeniorManager(ValueId, ValueName, ValueWorktime, ValueProject, ValuePeople);
	return N_SManager;
}