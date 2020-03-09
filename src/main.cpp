#include <iostream>
#include "Cleaner.h"
#include "Driver.h"
#include "Project.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "Engineer.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "Factory.h"
#include <vector>
#include <fstream>

int main() {
	//create staff
	std::vector<Employee*> workers;
	Factory* fk = new Factory();
	std::ifstream file("../file/staff.csv");
	system("chcp 1251");
	std::string line;

	if (file.is_open()) {
		getline(file, line, '\n');
		while (!file.eof()) {
			getline(file, line, '\n');
			if (line != "") {
				workers.push_back(fk->createEmployee(line));
			}
		}
		file.close();
	}
	else {
		std::cout << "Unable to open file" << std::endl;
	}

	//project file
	std::ifstream projectFile("../file/project.csv");
	if (projectFile.is_open()) {
		getline(projectFile, line, '\n');
		while (!projectFile.eof()) {
			getline(projectFile, line, '\n');
			if (line != "") {
				fk->createProject(line);
			}
		}
		projectFile.close();
	}
	else {
		std::cout << "Unable to open file" << std::endl;
	}

	fk->countPaymentForStaff();
	fk->printWorkers();
}