#ifndef PROGECTMANAGER_H
#define PROGECTMANAGER_H

 #include <vector>

#include "Manager.h"

class ProjectManager : public Manager
{
protected:
    double leaderBase;

private:
    std::vector<Manager*> managers;

public:
    ProjectManager(int id, std::string name, double leaderBase, double budget, double percent);
    ~ProjectManager();
    double getLeaderBase();
    std::vector<Manager*> getManagers();
	void setLeaderBase(double leaderBase);
    void addManager(Manager* manager);
	void cleanManager(Manager* manager);
	void cleanAllManagers();
	virtual double calculateHeadingPayment();
    void calculatePayment();
};

#endif