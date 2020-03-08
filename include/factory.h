#pragma once

#include <iostream>
#include <vector>
#include "Abstracts.h"
#include "Positions.h"

using namespace std;

vector<string> split(const string& s, char delimiter);

class Factory {
private:
	//enum Pos_id { Cleaner = 0, Driver, Tester, Programmer, TeamLeader, Manager, ProjectManager, SeniorManager };

public:
	static Employee* createEmployee(vector<string> data);
};