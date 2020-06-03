#include "Stuff.h"

static std::vector<std::string>parse(std::string& baseString) {
	std::istringstream parsing(baseString);
	std::vector<std::string>result;
	std::string s = "";
	while (std::getline(parsing, s, ';')) {
		result.push_back(s);
	}
	return result;
}

Stuff::Stuff(std::string& baseString, std::string* valueType) {
	std::vector<std::string>parsed = parse(baseString);
	type = parsed[0];
	if (valueType) {
		*valueType = type;
	}
	id = stoi(parsed[1]);
	name = parsed[2];
	if (type == "Cleaner" || type == "Driver" || type == "Programmer" || type == "Tester" || type == "TeamLeader") {
		worktime = stoi(parsed[3]);
		base = stoi(parsed[4]);
		if (type == "Driver") {
			overtimeCorfficient = stod(parsed[5]);
		}
		if (type == "Programmer" || type == "Tester" || type == "TeamLeader") {
			projectName = parsed[5];
			projectBudget = stoi(parsed[6]);
			percent = stod(parsed[7]);
			if (type == "TeamLeader") {
				headingBase = stoi(parsed[8]);
			}
		}
	}
	else {
		projectName = parsed[3];
		projectBudget = stoi(parsed[4]);
		percent = stod(parsed[5]);
		if (type == "ProjectManager" || type == "SeniorManager") {
			headingBase = stoi(parsed[6]);
		}
	}
}

Stuff::Stuff(std::string type, int id, std::string name, int worktime, int base, std::string projectName, int projectBudget, double percent, int headingBase, double overtimeCorfficient) {
	this->type = type;
	this->id = id;
	this->name = name;
	this->worktime = worktime;
	this->base = base;
	this->projectName = projectName;
	this->projectBudget = projectBudget;
	this->percent = percent;
	this->headingBase = headingBase;
	this->overtimeCorfficient = overtimeCorfficient;
}