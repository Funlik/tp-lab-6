#pragma once
#include <string>
#define WORKTIME 40


class WorkTime {
public:
	virtual float getWorktimeSalary(long long rate) = 0;
};


struct ProjectStruct {
	std::string projectName;
	float projectMoney;
};


ProjectStruct DumbName = { "DumbName", 500000 }, SmartName = { "SmartName", 750000 }, ExpertName = { "ExpertName", 1000000 };
ProjectStruct PROJECTS[3] = { DumbName, SmartName, ExpertName };

class Project {
public:
	virtual float getProjectSalary(ProjectStruct *project, float share) = 0;
};


class Heading {
public:
	virtual int bonus(int numberOfSubordinates) = 0;
};
