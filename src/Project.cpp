#include "Project.h"



Project::Project(string name)
{
	this->name = name;
	projectManager = 0;
}


Project::~Project()
{
}

string Project::getName()
{
	return name;
}

vector<Engineer*> Project::getStuff()
{
	return stuff;
}

void Project::addEngineer(Engineer* employee)
{
	stuff.push_back(employee);
}

int Project::getCompletePart()
{
	int part = 0;
	for(Engineer* eng : stuff)
	{
		part += eng->getPartOfProject();
	}
	return part;
}
void Project::setProjectManager(ProjectManager* projectManager)
{
	this->projectManager = projectManager;
}

ProjectManager* Project::getProjectManager()
{
	return projectManager;
}