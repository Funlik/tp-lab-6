#pragma once
#include "Employee.h"
#include "Project.h"
#include <vector>
#include <string>

using namespace std;

class Manager :
	public Employee, public IHeading
	
	
{
public:
	Manager(string fio, int id, int payment);
	~Manager();
	vector <Project*>  getProjects();
	void addProject(Project* project);
	int getSalary();
	int getSalaryByHeading();
protected:
	vector <Project*> projects;
};

