#pragma once
#include <iostream>

class Projects {
private:
	std::string project_name;
	int budget;
public:
	Projects(std::string project_name, int budget);
	std::string get_project_name() const;
	int get_budget() const;
};