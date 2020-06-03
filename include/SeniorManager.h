#ifndef SENIORMANAGER_H
#define SENIORMANAGER_H

#include "ProjectManager.h"

class SeniorManager : public ProjectManager
{
private:
    std::vector<ProjectManager*> projectManagers;
public:
    SeniorManager(int id, std::string name, double leaderBase, double budget, double percent);
    ~SeniorManager();
    std::vector<ProjectManager*> getProjectManagers();
    void addProjectManager(ProjectManager* target);
	void cleanProjectManager(ProjectManager* target);
	void cleanAllProjectManagers();
	double calculateHeadingPayment();
};

#endif