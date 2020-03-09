#ifndef managerH
#define managerH

#include <vector>
#include "Employee.h"
#include "Project.h"
#include "WorkTime.h"
#include "Heading.h"

class Manager : public Employee, public Project 
{
public:
	Manager(int ID, string name, int worktime, int percent);
	int calcProjPayment(int per, int budget);
	virtual void calcPayment(int per, int budget);
	int getPer();
	void changePer(int newPer);
	void calcPayment();

protected:
	int per;
};

class ProjectManager : public Manager
{
private:
	vector<Manager*> managers;
public:
	ProjectManager(int ID, string name, int worktime, int per);
	void addManager(Manager* manager);
	void deleteManager(Manager* _manager);
	int calcHeadPayment(int leadbase);
	void calcPayment(int per, int budget, int leadbase);
};

class SeniorManager : public ProjectManager
{
private:
	vector<ProjectManager*> projManagers;

public:
	SeniorManager(int ID, string name, int worktime, int per);
	void addProjManager(ProjectManager* projManager);
	void deleteProjManager(ProjectManager* _projManager);
	int calcHeadPayment(int leadbase);
	void calcPayment(int per, int budget, int leadbase);
};

#endif