#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H
#include "Manager.h"
#include <vector>

class ProjectManager : public Manager {
	std::vector<Manager*> managerList;
public:
	ProjectManager(int id, std::string name, int worktime, int percent);
	void addManager(Manager* target);
	void cleanManager(Manager* target);
	void cleanAllManagers();
	std::vector<Manager*> getManagers();
	virtual int calculateHeadingPayment(int leaderBase);
	void Calc(int percent, int budget, int leaderBase);
};
#endif