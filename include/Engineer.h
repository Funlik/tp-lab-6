#pragma once
#include "Employee.h"
#include "IWorkTime.h"
#include <string>

using namespace std;
class Project;
class Engineer : 
	public Employee, public IWorkTime
{
public:
	Engineer(string fio, int id, int workTime, int payment, class  Project* project, int partOfProject);
	Engineer(string fio, int id, int workTime, int payment, int partOfProject);
	~Engineer();
	Project* getProject();
	void setProject(Project* project);
	int getSalaryByWorkTime();
	void serWorkTime(int workTime);
	void setPartOfProject(int partOfProject);
	int getPartOfProject();
	int getWorkTime();

	int getSalary();
protected:
	Project* project;
	int workTime;
	int partOfProject;
};

