#pragma once

#include <string>

using namespace std;

class ProjectDataControl;

class ProjectBudget {
private:
	string name;
	int budget;
	int manHours = 0;
	int programmers = 0;
	int managers = 0;
	int projectManagers = 0;
public:
	ProjectDataControl* data = nullptr;
	ProjectBudget(string name, int budget);
	void setName(string name);
	string getName();
	void setBudget(int budget);
	int getBudget();
	int getManHours();
	int getProgrammers();
	int getManagers();
	int getProjectManagers();

	friend class ProjectDataControl;
};


class ProjectDataControl {
private:
	ProjectBudget* project = nullptr;
	ProjectDataControl(ProjectBudget* project);

	void addManHours(int hours);
	void subtractManHours(int hours);
	void incProgrammers();
	void decProgrammers();
	void incManagers();
	void decManagers();
	void incProjectManagers();
	void decProjectManagers();

	friend class ProjectBudget;

	friend class Engineer;
	friend class Programmer;
	friend class TeamLeader;
	friend class Manager;
	friend class ProjectManager;
};