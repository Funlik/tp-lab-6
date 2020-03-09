#pragma once
#include <string>
#include "Engineer.h"
#include "Personal.h"
#include "Manager.h"
#include "Tester.h"
#include "Programmer.h"
#include <fstream>
#include <vector>
using namespace std;
class Factory
{
public:
	Factory(string managerPath, string personalPath);
	~Factory();
	Engineer* CreateEngineer(fstream& file, string type);
	Project* CreateProject(fstream& file);
	Manager* LoadManager();
	vector<Personal*> LoadPersonal();
	string managerPath;
	string personalPath;

};

