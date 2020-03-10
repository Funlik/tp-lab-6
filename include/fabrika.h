// создает каждого работника или в виде функции или в виде класса

#ifndef FABRIKA_H
#define FABRIKA_H

#include "personal.h"
#include "engineer.h"
#include "manager.h"
//#include "workproject.h"

#include <vector>
#include <string>

class EmployeeFactory
{
private:
	vector<WorkProject*> projects;
public:
	EmployeeFactory(vector<WorkProject*>);
	Employee* create(vector<string>);
};

#endif