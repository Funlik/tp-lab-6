#pragma once
#include "Employee.h"
#include "Manager.h"
#include "Engineer.h"
#include "Personal.h"
#include "Interfaces.h"
#include <fstream>
#include <sstream>
#include <ostream>
#include <algorithm>

std::vector<std::string> split(const std::string& s, char delimiter) {
	std::stringstream ss(s);
	std::string buf;
	std::vector<std::string> rowData;
	while (std::getline(ss, buf, delimiter)) {
		rowData.push_back(buf);
	}
	return rowData;
}

static ProjectStruct findProject(std::string projectName) {
	for (auto project : PROJECTS)
		if (project.projectName == projectName) {
			return project;
		}
}

class Factory {
public:
	std::vector <Employee*> employees;
	void createFactory() {
		std::ifstream file("randomPeople.txt");
		std::string line;
		if (file.is_open()) {
			while (getline(file, line)) {
				std::vector<std::string> rowData;
				rowData = split(line, ',');
				if (std::find(rowData.begin(), rowData.end(), "Cleaner") != rowData.end()) {
					Cleaner* cleaner = new Cleaner(std::stof(rowData[0]), rowData[1], std::stoi(rowData[3]));
					employees.push_back(cleaner);
				}
				if (std::find(rowData.begin(), rowData.end(), "Driver") != rowData.end()) {
					Driver* driver = new Driver(std::stoi(rowData[0]), rowData[1], std::stoi(rowData[3]));
					employees.push_back(driver);
				}
				if (std::find(rowData.begin(), rowData.end(), "Programmer") != rowData.end()) {
					Programmer* programmer = new Programmer(std::stoi(rowData[0]), rowData[1], std::stoi(rowData[5]), std::stof(rowData[4]), &(findProject(rowData[3])));
					employees.push_back(programmer);
				}
				if (std::find(rowData.begin(), rowData.end(), "Tester") != rowData.end()) {
					Tester* tester = new Tester(std::stoi(rowData[0]), rowData[1], std::stoi(rowData[5]), std::stof(rowData[4]), &findProject(rowData[3]));
					employees.push_back(tester);
				}
				if (std::find(rowData.begin(), rowData.end(), "TeamLeader") != rowData.end()) {
					TeamLeader* team_leader = new TeamLeader(std::stoi(rowData[0]), rowData[1], std::stoi(rowData[5]), std::stof(rowData[4]), &findProject(rowData[3]), std::stoi(rowData[6]));
					employees.push_back(team_leader);
				}
				if (std::find(rowData.begin(), rowData.end(), "Manager") != rowData.end()) {
					Manager* manager = new Manager(stoi(rowData[0]), rowData[1], stof(rowData[4]), &findProject(rowData[3]));
					employees.push_back(manager);
				}
				if (std::find(rowData.begin(), rowData.end(), "ProjectManager") != rowData.end()) {
					ProjectManager* project_manager = new ProjectManager(std::stoi(rowData[0]), rowData[1], std::stof(rowData[4]), &findProject(rowData[3]), std::stoi(rowData[5]));
					employees.push_back(project_manager);
				}
				if (std::find(rowData.begin(), rowData.end(), "SeniorManager") != rowData.end()) {
					SeniorManager* senior_manager = new SeniorManager(std::stoi(rowData[0]), rowData[1], std::stof(rowData[3]), &findProject("ExpertName"), std::stoi(rowData[4]));
					employees.push_back(senior_manager);
				}
			}
		}

		for (auto employee : employees) {
			std::cout << employee->get_id() << " " << employee->get_FIO() << " " << employee->get_salary() << std::endl;
		}

		std::ofstream out;
		out.open("out.txt", std::ios::app);
		if (out.is_open())
		{
			for (auto employee : employees) {
				out << employee->get_id() << " " << employee->get_FIO() << " " << employee->get_salary() << std::endl;
			}
		}
		out.close();
	}
};