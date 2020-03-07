#pragma once //fix
#include "Employee.h"
#include <vector>

class Manager : public Employee, public Project {
public:
	Manager(int id, string name, int worktime, int percent);
	int GetPercent();
	void ChangePercent(int new_percent);
	int CalcProjPay(int percent, int budget);
	virtual void CalculatePayment(int percent, int budget);
	void CalculatePayment();
protected:
	int percent;
};

class ProjectManager : public Manager, public Heading {
	vector<Manager*>man_workers;
public:
	ProjectManager(int id, string name, int worktime, int percent);
	void AddManager(Manager* new_man);
	void DelManager(Manager* old_man);
	int CalcHeadPay(int leaderbase);
	void CalculatePayment(int percent, int budget, int leaderbase);
};

class SeniorManager : public ProjectManager {
	vector<ProjectManager*>prman_workers;
public:
	SeniorManager(int id, string name, int worktime, int percent);
	void AddProjMan(ProjectManager* new_prman);
	void DelProjMan(ProjectManager* old_prman);
	int CalcHeadPay(int leaderbase);
	void CalculatePayment(int percent, int budget, int leaderbase);
};