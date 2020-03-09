#pragma once
#include "Cleaner.h"
#include "Driver.h"
#include "Manager.h"
#include "Programmer.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "Projects.h"
#include <vector>
#include <string>

class Factory {
private:
	std::vector<Projects*> projects;
public:
	Factory(std::vector<Projects*> projects);
	Employee* create(std::vector<std::string> data);
};