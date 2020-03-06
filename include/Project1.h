#ifndef PROJECT1_H
#define PROJECT1_H
#include <string>
#include "Employee.h"

struct Project
{
	vector<Employee> List;
	int budget;
	string projectTitle;
	Project() { budget = 0; };
	Project(string title, int budget1) {
		budget = budget1;
		projectTitle = title;
	};
	void addpeopletoproject(Employee people)
	{
		List.push_back(people);
	};
	int getsize() {
		return List.size();
	};
};
#endif