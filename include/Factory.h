#pragma once
#include "Employee.h"
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

extern map<string, int> projects;

vector<string> split(const string& s, char delimiter);

class Factory {
protected:
	vector<Employee*> employees;
public:
	Factory();
	void create_employees(string file_name);
	void create_projects(string file_name);
	void print_information();
};
