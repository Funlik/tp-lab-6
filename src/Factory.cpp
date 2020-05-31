#include "Factory.h"

Factory::Factory()
{
	this->idMap["Cleaner"] = 1;
	this->idMap["Driver"] = 2;
	this->idMap["Programmer"] = 3;
	this->idMap["Tester"] = 4;
	this->idMap["TeamLeader"] = 5;
	this->idMap["Manager"] = 6;
	this->idMap["ProjectManager"] = 7;
	this->idMap["SeniorManager"] = 8;
}

std::map<std::string, int> Factory::getIdMap()
{
	return this->idMap;
}

Employee* Factory::makeEmployee(FactoryKey fk)
{
	switch (fk.position_id)
	{
		case 1: return makeCleaner(fk.employee_id, fk.name, fk.worktime, fk.base); break;
		case 2: return makeDriver(fk.employee_id, fk.name, fk.worktime, fk.base); break;
		case 3: return makeProgrammer(fk.employee_id, fk.name, fk.worktime, fk.base); break;
		case 4: return makeTester(fk.employee_id, fk.name, fk.worktime, fk.base); break;
		case 5: return makeTeamLeader(fk.employee_id, fk.name, fk.worktime, fk.base); break;
		case 6: return makeManager(fk.employee_id, fk.name, fk.worktime, fk.percent); break;
		case 7: return makeProjectManager(fk.employee_id, fk.name, fk.worktime, fk.percent); break;
		case 8: return makeSeniorManager(fk.employee_id, fk.name, fk.worktime, fk.percent); break;
	default:
		break;
	}
	return nullptr;
}

Cleaner* Factory::makeCleaner(int id, std::string name, int worktime, int base)
{
	Cleaner* target = new Cleaner(id, name, worktime, base);
	return target;
}

Driver* Factory::makeDriver(int id, std::string name, int worktime, int base) 
{
	Driver* target = new Driver(id, name, worktime, base);
	return target;
}

Programmer* Factory::makeProgrammer(int id, std::string name, int worktime, int base) 
{
	Programmer* target = new Programmer(id, name, worktime, base);
	return target;
}

Tester* Factory::makeTester(int id, std::string name, int worktime, int base) 
{
	Tester* target = new Tester(id, name, worktime, base);
	return target;
}

TeamLeader* Factory::makeTeamLeader(int id, std::string name, int worktime, int base) 
{
	TeamLeader* target = new TeamLeader(id, name, worktime, base);
	return target;
}

Manager* Factory::makeManager(int id, std::string name, int worktime, int percent) 
{
	Manager* target = new Manager(id, name, worktime, percent);
	return target;
}

ProjectManager* Factory::makeProjectManager(int id, std::string name, int worktime, int percent) 
{
	ProjectManager* target = new ProjectManager(id, name, worktime, percent);
	return target;
}

SeniorManager* Factory::makeSeniorManager(int id, std::string name, int worktime, int percent) 
{
	SeniorManager* target = new SeniorManager(id, name, worktime, percent);
	return target;
}