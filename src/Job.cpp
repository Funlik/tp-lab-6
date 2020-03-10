#include "Job.h"

Job::Job()
{
	
	this->pairID["Cleaner"] = 1;
	this->pairID["Driver"] = 2;
	this->pairID["Programmer"] = 3;
	this->pairID["TeamLeader"] = 4;
	this->pairID["Tester"] = 5;
	this->pairID["SeniorManager"] = 6;
	this->pairID["ProgectManager"] = 7;
	this->pairID["Manager"] = 8;
}

std::map<std::string, int> Job::idMap()
{
	return this->pairID;
}

Employee* Job::makeEmployee(jobContainer container)
{
	switch (container.id)
	{
	case 1:
		return makeCleaner(container.workerID, container.name, container.worktime, container.salary);
		break;
	case 2:
		return makeDriver(container.workerID, container.name, container.worktime, container.salary);
		break;
	case 3:
		return makeProgrammer(container.workerID, container.name, container.worktime, container.salary);
		break;
	case 4:
		return makeTeamLeader(container.workerID, container.name, container.worktime, container.salary);
		break;
	case 5:
		return makeTester(container.workerID, container.name, container.worktime, container.salary);
		break;
	case 6:
		return makeSeniorManager(container.workerID, container.name, container.worktime, container.salary);
		break;
	case 7:
		return makeProjectManager(container.workerID, container.name, container.worktime, container.salary);
		break;
	case 8:
		return makeManager(container.workerID, container.name, container.worktime, container.salary);
		break;
	default:
		break;
	}
	return nullptr;
}

Programmer* Job::makeProgrammer(int id, std::string name, double worktime, double payment)
{	
	return new Programmer(id, name, worktime, payment);
}

Cleaner* Job::makeCleaner(int id, std::string name, double worktime, double payment)
{	
	return new Cleaner(id, name, worktime, payment);
}

Driver* Job::makeDriver(int id, std::string name, double worktime, double payment)
{	
	return new Driver(id, name, worktime, payment);
}

TeamLeader* Job::makeTeamLeader(int id, std::string name, double worktime, double payment)
{	
	return new TeamLeader(id, name, worktime, payment);
}

Tester* Job::makeTester(int id, std::string name, double worktime, double payment)
{	
	return new Tester(id, name, worktime, payment);
}

SeniorManager* Job::makeSeniorManager(int id, std::string name, double worktime, double payment)
{	
	return new SeniorManager(id, name, worktime, payment);
}

ProjectManager* Job::makeProjectManager(int id, std::string name, double worktime, double payment)
{
	return new ProjectManager(id, name, worktime, payment);
}

Manager* Job::makeManager(int id, std::string name, double worktime, double payment)
{	
	return new Manager(id, name, worktime, payment);
}