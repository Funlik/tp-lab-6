#pragma once
#include <string>
#define WORKTIME 40


class WorkTime {
public:
	WorkTime() {}
	~WorkTime() {}
	virtual float get_worktime_salary(uint32_t rate) = 0;
};


struct ProjectStruct
{
	std::string projectName;
	float projectMoney;
};


const ProjectStruct OpenVino = {"OpenVino", 500000};
const ProjectStruct DAAL = {"DAAL", 700000};
const ProjectStruct MediaSDK = {"MediaSDK", 900000};
const ProjectStruct PROJECTS[3] = {OpenVino, DAAL, MediaSDK};

class Project {
public:
	Project() {}
	~Project() {}
	virtual float get_project_salary(ProjectStruct *project, float share) = 0;

};


class Heading {
public:
	Heading() {}
	~Heading() {}
	virtual int bonus(uint8_t numberOfSubordinates) = 0;
};