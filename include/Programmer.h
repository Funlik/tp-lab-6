#pragma once
#include "Engineer.h"
#include <string>
#include "Project.h"

using namespace std;

class Programmer :
	public Engineer
{
public:
	Programmer(string fio, int id, int workTime, int payment, Project* project, int partOfProject);
	Programmer(string fio, int id, int workTime, int payment, int partOfProject);
	~Programmer();
	int getSalary();
};

