#pragma once
#include "Employee.h"
#include "Interfaces.h"
#include <fstream>
#include <sstream>
#include <ostream>

ProjectStruct find_project(std::string projectName);
std::vector<std::string> split(const std::string& s, char delimiter);

class Factory {
public:
	Factory() {}
	~Factory() {}
	std::vector <Employee*> employees;
	void createFactory();
};