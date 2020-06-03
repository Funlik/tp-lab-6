#include "Staff.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Programmer.h"
#include "Tester.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include "ProjectBudget.h"
#include <iostream>
#include <fstream>
#include <iomanip> 

Staff::~Staff() {
	for (auto iter = projects.begin(); iter != projects.end(); iter++) {
		delete iter->second;
	}
	for (auto iter = staffMembers.begin(); iter != staffMembers.end(); iter++) {
		delete *iter;
	}
}

vector<string> Staff::split(string line, char delimiter) {
	vector<string> splitLine;
	size_t substrStart = 0;
	for (size_t curPos = 0; curPos < line.length() + 1; curPos++) {
		if (curPos > substrStart && (curPos == line.length() || line.at(curPos) == delimiter)) {
			splitLine.push_back(line.substr(substrStart, curPos - substrStart));
			substrStart = curPos + 1;
		}
	}
	return splitLine;
}

void Staff::readProjects(string filename) {
	ifstream input(filename);
	string line;
	if (input) {
		while (getline(input, line)) {
			vector<string> splitLine = split(line, '\t');
			projects.insert(pair<string, ProjectBudget*>(splitLine[0], new ProjectBudget(splitLine[0], stoi(splitLine[1]))));
		}
	}
}

void Staff::readStaffMembers(string filename) {
	ifstream input(filename);
	string line;
	if (input) {
		while (getline(input, line)) {
			vector<string> splitLine = split(line, '\t');
			string job = splitLine[2];
			Employee* newStaffMember = nullptr;
			int id = stoi(splitLine[0]);
			string name = splitLine[1];
			int worktime = stoi(splitLine[3]);
			if (job == "Personal") {
				newStaffMember = new Personal(id, name, worktime);
			}
			else if (job == "Cleaner") {
				newStaffMember = new Cleaner(id, name, worktime);
			}
			else if (job == "Driver") {
				newStaffMember = new Driver(id, name, worktime);
			}
			else {
				ProjectBudget* project = nullptr;
				try {
					project = projects.at(splitLine[4]);
				}
				catch (const out_of_range& oor) {}
				if (job == "Engineer") {
					newStaffMember = new Engineer(id, name, worktime, project);
				}
				else if (job == "Programmer") {
					newStaffMember = new Programmer(id, name, worktime, project);
				}
				else if (job == "Tester") {
					newStaffMember = new Tester(id, name, worktime, project);
				}
				else if (job == "TeamLeader") {
					newStaffMember = new TeamLeader(id, name, worktime, project);
				}
				else if (job == "Manager") {
					newStaffMember = new Manager(id, name, worktime, project);
				}
				else if (job == "ProjectManager") {
					newStaffMember = new ProjectManager(id, name, worktime, project);
				}
				else if (job == "SeniorManager") {
					newStaffMember = new SeniorManager(id, name, worktime, project);
				}
			}
			if (newStaffMember) {
				staffMembers.push_back(newStaffMember);
			}
		}
	}
}

void Staff::printSalaries() {
	for (auto iter = staffMembers.begin(); iter != staffMembers.end(); iter++) {
		cout << setw(4) << (*iter)->getId() << " | " << setw(30) << (*iter)->getName() << " | " << setw(7) << (*iter)->getPayment() << endl;
	}
}