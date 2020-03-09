#pragma once
#include "Engineer.h"
#include "IHeading.h"
#include "Project.h"
#include <string>
using namespace std;
class ProjectManager :
	public Engineer, public IHeading
{
public:
	ProjectManager(string fio, int id, int workTime, int payment,class Project* project, int partOfProject);
	~ProjectManager();
	int getSalary();
	int getSalaryByHeading();
	void print();
};

