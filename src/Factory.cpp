#include "Factory.h" //fix
#include<iostream>

Employee* Factory::NewEmployee(string position_, int id_, string name_, int worktime_, int base_, int percent_){
	if (position_ == "Cleaner") {
		return NewCleaner(id_, name_, worktime_, base_);
	}
	else if (position_ == "Driver") {
		return NewDriver(id_, name_, worktime_, base_);
	}
	else if (position_ == "Tester") {
		return NewTester(id_, name_, worktime_, base_);
	}
	else if (position_ == "Programmer") {
		return NewProgrammer(id_, name_, worktime_, base_);
	}
	else if (position_ == "TeamLeader") {
		return NewTeamLeader(id_, name_, worktime_, base_);
	}
	else if (position_ == "Manager") {
		return NewManager(id_, name_, worktime_, percent_);
	}
	else if (position_ == "ProjectManager") {
		return NewProjManager(id_, name_, worktime_, percent_);
	}
	else if (position_ == "SeniorManager") {
		return NewSenManager(id_, name_, worktime_, percent_);
	}	
}

Cleaner* Factory::NewCleaner(int id_, string name_, int worktime_, int base_){
	Cleaner* Clr = new Cleaner(id_, name_, worktime_, base_);
	return Clr;
}

Driver* Factory::NewDriver(int id_, string name_, int worktime_, int base_) {
	Driver* Drv = new Driver(id_, name_, worktime_, base_);
	return Drv;
}

Tester* Factory::NewTester(int id_, string name_, int worktime_, int base_) {
	Tester* Tst = new Tester(id_, name_, worktime_, base_);
	return Tst;
}

Programmer* Factory::NewProgrammer(int id_, string name_, int worktime_, int base_) {
	Programmer* Prg = new Programmer(id_, name_, worktime_, base_);
	return Prg;
}

TeamLeader* Factory::NewTeamLeader(int id_, string name_, int worktime_, int base_) {
	TeamLeader* Tld = new TeamLeader(id_, name_, worktime_, base_);
	return Tld;
}

Manager* Factory::NewManager(int id_, string name_, int worktime_, int percent_) {
	Manager* Mng = new Manager(id_, name_, worktime_, percent_);
	return Mng;
}

ProjectManager* Factory::NewProjManager(int id_, string name_, int worktime_, int percent_) {
	ProjectManager* PMng = new ProjectManager(id_, name_, worktime_, percent_);
	return PMng;
}

SeniorManager* Factory::NewSenManager(int id_, string name_, int worktime_, int percent_) {
	SeniorManager* SMng = new SeniorManager(id_, name_, worktime_, percent_);
	return SMng;
}
