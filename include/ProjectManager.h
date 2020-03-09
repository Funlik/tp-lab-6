#pragma once
#include "Manager.h"
#include "IHeading.h"
#include <vector>

class ProjectManager :
	public Manager, protected IHeading
{
protected:
	int baseLeader_;
	std::vector <Manager*> subordinates_;
	int calcPaymentForHeading();	

public:
	ProjectManager(std::string id, std::string name, int workTime, int percent, int baseLeaser);
	~ProjectManager();

	int getBaseLeader();
	void setBaseLeader(int baseLeader);

	void addSubordinate(Manager* manager);
	void removeSubordinates();
	std::vector<Manager*> getSubordinates();
	void printSubordinates();	

	void calcPayment();
};

//delete vector in destructor

