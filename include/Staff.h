#pragma once

#include <map>
#include <string>
#include <vector>

using namespace std;

class ProjectBudget;
class Employee;
class Staff {
private:
	map<string, ProjectBudget*> projects;
	vector<Employee*> staffMembers;
	vector<string> split(string line, char delimiter);
public:
	~Staff();
	void readProjects(string filename);
	void readStaffMembers(string filename);
	void printSalaries();
};