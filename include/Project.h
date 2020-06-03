#pragma once
#include <string>
#include <vector>

#include "ProjectManager.h"

using namespace std;
class Project
{
private:
	string name;
	vector<class Engineer*> stuff;
	class ProjectManager* projectManager;

public:
	Project(string name);
	~Project();
	string getName();
	vector<Engineer*> getStuff();
	void addEngineer(Engineer* employee);
	void setProjectManager(ProjectManager* projectManager);
	int getCompletePart();
	ProjectManager* getProjectManager();
};

