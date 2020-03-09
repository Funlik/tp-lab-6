#include "Factory.h"

static Factory defaultFactory;

Employee* Factory::createEmployee(Stuff token) {
	if (token.type == "Cleaner") {
		return new Cleaner(token.id, token.name, token.worktime, token.base);
	}
	else if (token.type == "Driver") {
		return new Driver(token.id, token.name, token.worktime, token.base, 1.2);
	}
	else if (token.type == "Programmer") {
		return new Programmer(token.id, token.name, token.worktime, token.base, token.projectName, token.projectBudget, token.percent);
	}
	else if (token.type == "Tester") {
		return new Tester(token.id, token.name, token.worktime, token.base, token.projectName, token.projectBudget, token.percent);
	}
	else if (token.type == "TeamLeader") {
		return new TeamLeander(token.id, token.name, token.worktime, token.base, token.projectName, token.projectBudget, token.percent, token.headingBase);
	}
	else if (token.type == "Manager") {
		return new Manager(token.id, token.name, token.projectName, token.projectBudget, token.percent);
	}
	else if (token.type == "ProjectManager") {
		return new ProjectManager(token.id, token.name, token.projectName, token.projectBudget, token.percent, token.headingBase);
	}
	else if (token.type == "SeniorManager") {
		return new SeniorManager(token.id, token.name, token.projectName, token.projectBudget, token.percent, token.headingBase);
	}
	else {
		return nullptr;
	}
}

Employee* Factory::createEmployee(Stuff token, std::string& valueType) {
	if (token.type == "Cleaner") {
		valueType = "Cleaner";
		return new Cleaner(token.id, token.name, token.worktime, token.base);
	}
	else if (token.type == "Driver") {
		valueType = "Driver";
		return new Driver(token.id, token.name, token.worktime, token.base, 1.2);
	}
	else if (token.type == "Programmer") {
		valueType = "Programmer";
		return new Programmer(token.id, token.name, token.worktime, token.base, token.projectName, token.projectBudget, token.percent);
	}
	else if (token.type == "Tester") {
		valueType = "Tester";
		return new Tester(token.id, token.name, token.worktime, token.base, token.projectName, token.projectBudget, token.percent);
	}
	else if (token.type == "TeamLeader") {
		valueType = "TeamLeader";
		return new TeamLeander(token.id, token.name, token.worktime, token.base, token.projectName, token.projectBudget, token.percent, token.headingBase);
	}
	else if (token.type == "Manager") {
		valueType = "Manager";
		return new Manager(token.id, token.name, token.projectName, token.projectBudget, token.percent);
	}
	else if (token.type == "ProjectManager") {
		valueType = "ProjectManager";
		return new ProjectManager(token.id, token.name, token.projectName, token.projectBudget, token.percent, token.headingBase);
	}
	else if (token.type == "SeniorManager") {
		valueType = "SeniorManager";
		return new SeniorManager(token.id, token.name, token.projectName, token.projectBudget, token.percent, token.headingBase);
	}
	else {
		return nullptr;
	}
}

void Company::addEmployee(Employee* employee, std::string type) {
	if (type == "Cleaner") {
		cleaners.push_back((Cleaner*)employee);
	}
	else if (type == "Driver") {
		drivers.push_back((Driver*)employee);
	}
	else if (type == "Programmer") {
		Programmer* programmer = (Programmer*)employee;
		programmers[programmer->getProjectName()].push_back(programmer);
		projectManagers[programmer->getProjectName()]->addSubProgrammer(programmer);
		teamLeaders[programmer->getProjectName()]->addSubProgrammer(programmer);
		senior->addSubProgrammer(programmer);
	}
	else if (type == "Tester") {
		Tester* tester = (Tester*)employee;
		testers[tester->getProjectName()].push_back(tester);
		projectManagers[tester->getProjectName()]->addSubTester(tester);
		teamLeaders[tester->getProjectName()]->addSubTester(tester);
		senior->addSubTester(tester);
	}
	else if (type == "TeamLeader") {
		TeamLeander* teamLeader = (TeamLeander*)employee;
		teamLeaders[teamLeader->getProjectName()] = teamLeader;
		senior->addSubTeamLeaders(teamLeader);
	}
	else if (type == "Manager") {
		Manager* manager = (Manager*)employee;
		managers[manager->getProjectName()].push_back(manager);
		projectManagers[manager->getProjectName()]->addSubManager(manager);
		senior->addSubManager(manager);
	}
	else if (type == "ProjectManager") {
		ProjectManager* projectManager = (ProjectManager*)employee;
		projectManagers[projectManager->getProjectName()] = projectManager;
		senior->addSubProjectManagers(projectManager);
	}
	else if (type == "SeniorManager") {
		senior = (SeniorManager*)employee;
	}
}

void Company::addEmployee(std::string& baseString) {
	Stuff token(baseString);
	addEmployee(defaultFactory.createEmployee(token, token.type), token.type);
}