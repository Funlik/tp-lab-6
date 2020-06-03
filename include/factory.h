#pragma once

#include <iostream>
#include <vector>
#include "Abstracts.h"
#include "Positions.h"

#ifndef FACTORY_H
#define FACTORY_H

using namespace std;

vector<string> split(const string& s, char delimiter);

class Factory {
protected:

public:
	static Employee* createEmployee(vector<string> data);
};

#endif 
