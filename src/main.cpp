#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include "Employee.h"
#include "Engineers.h"
#include "Interfaces.h"
#include "Managers.h"
#include "Personal.h"
#include "Task.h"
#include <time.h>
#include "Create.h"
using namespace std;


int main() {
	srand(time(NULL));
	ifstream companyFile("NewCompany.txt");
	ifstream projectsFile("Projects.txt");
	map<string, Task*> projects;
	vector<Employee*> staff;
	parse(companyFile, staff, projectsFile, projects);
	for (size_t i = 0; i < staff.size(); i++) {
		staff[i]->setTime(100);
	}
	
	print(staff);
	
	return 0;
}
