#pragma once
#ifndef FACTORY_H
#define FACTORY_H
#include "Personal.h"
#include "Engineer.h"
#include "Manager.h"

class Factory {
public:
	static Employee* createEmployee(vector<string> data);
};

#endif