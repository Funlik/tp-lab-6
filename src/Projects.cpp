#include "Projects.h"

Projects::Projects(std::string project_name, int budget) {
	this->project_name = project_name;
	this->budget = budget;
}

std::string Projects::get_project_name() const {
	return project_name;
}

int Projects::get_budget() const {
	return budget;
}