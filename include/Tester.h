#pragma once
#include "Engineer.h"
#include <string>
#include "Project.h"

using namespace std;

class Tester :
	public Engineer
{
public:
	Tester(string fio, int id, int workTime, int payment, Project* project);
	Tester(string fio, int id, int workTime, int payment);
	~Tester();
	int getSalary();
};

