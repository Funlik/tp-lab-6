#ifndef SENIORMANAGER_H
#define SENIORMANAGER_H
#include "ProjectManager.h"

class SeniorManager : public ProjectManager {
	std::vector<ProjectManager*> projectManagerList;
public:
	SeniorManager(int id, std::string name, int worktime, int percent);
	void addProjectManager(ProjectManager* target);
	void cleanProjectManager(ProjectManager* target);
	void cleanAllProjectManagers();
	std::vector<ProjectManager*> getProjectManagers();
	int calculateHeadingPayment(int leaderBase);
};
#endif
