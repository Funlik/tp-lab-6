// создает каждого работника или в виде функции или в виде класса
#pragma once
#ifndef FABRIKA_H
#define FABRIKA_H

#include "personal.h"
#include "engineer.h"
#include "manager.h"

class EmployeeFactory
{
private:
	vector<WorkProject*> projects;

public:
	EmployeeFactory(vector<WorkProject*>);
	Employee* create(vector<string>);
};

#endif