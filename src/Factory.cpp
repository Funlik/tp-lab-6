#include "Factory.h"



Factory::Factory()
{
}


Factory::~Factory()
{
}


Employee* Factory::createEmployee(std::string& str) {
	std::vector<std::string> data = split(str, ';');
	if (data[2] == "cleaner") {
		Cleaner* cleaner = new Cleaner(data[0], data[1], stoi(data[3]), stoi(data[4]));
		workers_[data[0]] = cleaner;
		return cleaner;
	}
	else if (data[2] == "driver") {
		Driver* driver = new Driver(data[0], data[1], stoi(data[3]), stoi(data[4]));
		workers_[data[0]] = driver;
		return driver;
	}
	else if (data[2] == "programmer") {
		Programmer* programmer = new Programmer(data[0], data[1], stoi(data[3]), stoi(data[4]), stoi(data[5]));
		workers_[data[0]] = programmer;
		return programmer;
	}
	else if (data[2] == "team leader") {
		TeamLeader* teamLeader = new TeamLeader(data[0], data[1], stoi(data[3]), stoi(data[4]), stoi(data[5]), stoi(data[6]));
		workers_[data[0]] = teamLeader;
		return teamLeader;
	}
	else if (data[2] == "manager") {
		Manager* manager = new Manager(data[0], data[1], stoi(data[3]), stoi(data[5]));
		workers_[data[0]] = manager;
		return manager;
	}
	else if (data[2] == "project manager") {
		ProjectManager* projectManager = new ProjectManager(data[0], data[1], stoi(data[3]), stoi(data[5]), stoi(data[6]));
		workers_[data[0]] = projectManager;
		return projectManager;
	}
	else { return nullptr; }
}


std::vector<std::string> Factory::split(std::string& str, char delimeter) {
	std::vector<std::string> result;
	std::string newStr = "";
	for (char i : str) {
		if (i == delimeter) {
			result.push_back(newStr);
			newStr = "";
		}
		else {
			newStr += i;
		}
	}
	result.push_back(newStr);
	return result;
}


void Factory::createProject(std::string& str) {
	std::vector<std::string> data = split(str, ';');

	//create project
	Project* project = new Project(data[0], stoi(data[1]));

	//create team leader
	TeamLeader* teamLeader = (TeamLeader*)workers_[data[2]];
	teamLeader->setProject(project);

	//create programmers
	std::vector<std::string> subordinates = split(data[3], ',');
	for (std::string i : subordinates) {
		Programmer* prog = (Programmer*)workers_[i];
		prog->setProject(project);
		workers_[i] = prog;
		teamLeader->addSubordinate(prog);
	}

	//create project manager
	ProjectManager* projectManager = (ProjectManager*)workers_[data[4]];
	projectManager->setProject(project);

	//create managers
	subordinates = split(data[5], ',');
	for (std::string i : subordinates) {
		Manager* manager = (Manager*)workers_[i];
		manager->setProject(project);
		workers_[i] = manager;
		projectManager->addSubordinate(manager);
	}

	workers_[data[4]] = projectManager;	
}


void Factory::countPaymentForStaff() {
	std::map <std::string, Employee*>::iterator it;
	for (auto it = workers_.begin(); it != workers_.end(); it++) {
		(it->second)->calcPayment();
	}
}


void Factory::printWorkers() {
	std::cout << "ID\tNAME\tPAYMENT" << std::endl;
	for (auto it = workers_.begin(); it != workers_.end(); it++) {
		std::cout << (it->second)->getID() << " " << (it->second)->getName() << " " << (it->second)->getPayment()<<std::endl;
	}
}


Employee* Factory::getEmployeeByID(std::string id) {
	return workers_[id];
}