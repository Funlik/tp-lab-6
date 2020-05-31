#pragma once
#ifndef FACTORY_H
#define FACTORY_H
#include "Employee.h"

enum Employee_ID {Cleaner_ID=0,Driver_ID,Programmer_ID,Tester_ID,TeamLeader_ID,Manager_ID,ProjectManager_ID,SeniorManager_ID};
class Factory
{
public:
	static Employee* createEmployee(vector<string>);
};

#endif