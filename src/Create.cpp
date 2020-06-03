#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include "Employee.h"
#include "Engineers.h"
#include "Interfaces.h"
#include "Managers.h"
#include "Personal.h"
#include "Task.h"
#include <time.h>
#include <cassert>

using namespace std;	
#include "Create.h"

vector<string> split(string s, char delimiter) {
	vector <string> tokens;
	string token;
	stringstream tokenStream;
	tokenStream << s;
	while (getline(tokenStream, token, delimiter)) {
		tokens.push_back(token);
	}
	return tokens;
}

Employee* create(const vector<string>& info, map<string, Task*>& projects) {

	try {
		if (info.size() < 3)
			throw string("Not enough arguments to parse");

		int id = stoi(info[0]);
		string name = info[1];
		string position = info[2];

		if (position == "Cleaner") {
			if (info.size() < 4) {
				throw string("Not enough arguments for " + name);
			}
			int paymentPerHour = stoi(info[3]);
			return	new Cleaner(id, name, position, paymentPerHour);

		}
		else if (position == "Driver") {
			if (info.size() < 5) {
				throw string("Not enough arguments for " + name);
			}
			int paymentPerHour = stoi(info[3]);
			int extraPayment = stoi(info[4]);
			return new Driver(id, name, position, paymentPerHour, extraPayment);
		}
		else if (position == "Programmer") {
			if (info.size() < 6) {
				throw string("Not enough arguments for " + name);
			}
			int paymentPerHour = stoi(info[3]);
			Task* project = projects.at(info[4]);
			int projectContribution = stoi(info[5]);
			return new Programmer(id, name, position, paymentPerHour, project, projectContribution);

		}
		else if (position == "Tester") {
			if (info.size() < 6) {
				throw string("Not enough arguments for " + name);
			}
			int paymentPerHour = stoi(info[3]);
			int extraPayment = stoi(info[4]);
			Task* project = projects.at(info[5]);
			int projectContribution = stoi(info[6]);
			return new Tester(id, name, position, paymentPerHour, extraPayment, project, projectContribution);
		}
		else if (position == "TeamLeader") {
			if (info.size() < 8) {
				throw string("Not enough arguments for " + name);
			}
			int paymentPerHour = stoi(info[3]);
			Task* project = projects.at(info[4]);
			int projectContribution = stoi(info[5]);
			int headingPayment = stoi(info[6]);
			int staffNumber = stoi(info[7]);
			return new TeamLeader(id, name, position, paymentPerHour, project, projectContribution, headingPayment, staffNumber);
		}
		else if (position == "Manager") {
			if (info.size() < 5) {
				throw string("Not enough arguments for " + name);
			}
			Task* project = projects.at(info[3]);
			int projectContribution = stoi(info[4]);
			return new Manager(id, name, position, project, projectContribution);
		}
		else if (position == "ProjectManager") {
			if (info.size() < 7) {
				throw string("Not enough arguments for " + name);
			}
			Task* project = projects.at(info[3]);
			int projectContribution = stoi(info[4]);
			int headingPayment = stoi(info[5]);
			int staffNumber = stoi(info[6]);

			return new ProjectManager(id, name, position, project, projectContribution, headingPayment, staffNumber);
		}
		else if (position == "SeniorManager") {
			if (info.size() < 6) {
				throw string("Not enough arguments for " + name);
			}
			int projectContribution = stoi(info[3]);
			int headingPayment = stoi(info[4]);
			int staffNumber = stoi(info[5]);
			vector<Task*> projs;
			for (auto project : projects) {
				projs.push_back(project.second);
			}

			return new SeniorManager(id, name, position, projs, projectContribution, headingPayment, staffNumber);
		}
		else {
			throw string("Incorrect position: " + name);
		}
	}
	catch (string error) {
		cout << "Caught exception: " << error << endl;
	}
	return nullptr;
}
void parse(ifstream& company, vector<Employee*>& staff, ifstream& projectsFile, map<string, Task*>& projects) {

	string info;
	while (getline(projectsFile, info)) {
		vector<string> project = split(info, ' ');
		string projectName = project[0];
		int cost = stoi(project[1]);

		Task* proj = new Task(projectName, cost);
		projects[projectName] = proj;
	}

	
	while (getline(company, info)) {
		vector<string> employee = split(info, '\t');
		staff.push_back(create(employee, projects));
		assert(staff.back() != nullptr);
	}

}

void print(const vector<Employee*>& staff) {
	cout << setfill(' ') << setw(20) << left << "Occupation" << "|";
	cout << setfill(' ') << setw(25) << left << "Name" << "|";
	cout << "Salary\n";
	cout << setfill('=') << setw(55) << "" << endl;
	for (size_t i = 0; i < staff.size(); i++) {
		cout << setfill(' ') << setw(20) << left << staff[i]->getOccupation() << "|";
		cout << setfill(' ') << setw(25) << left << staff[i]->getName() << "|";
		cout << staff[i]->calcSalary() << '\n';
	}
}
