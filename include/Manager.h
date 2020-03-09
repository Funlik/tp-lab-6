#pragma once
#include "Employee.h"

class Manager : public Employee, public virtual Project {
protected:
	float share;
	ProjectStruct *project;
public:

	Manager(int id, std::string FIO, float share, ProjectStruct* project) : Employee(id, FIO), project(project), share(share) {
		setSalary();
	}

	float getProjectSalary(ProjectStruct *project, float share) override {
		return project->projectMoney * share;
	}

	void setSalary() override {
		this->salary = getProjectSalary(this->project, this->share);
	}

};



class ProjectManager : public Manager, public Heading {
protected:
	int numberOfSubordinates;
public:

	ProjectManager(int id, std::string FIO, float share, ProjectStruct *project, int numberOfSubordinates) : Manager(id, FIO, share, project), numberOfSubordinates(numberOfSubordinates) {
		setSalary();
	}

	int bonus(int numberOfSubordinates) override {
		return numberOfSubordinates * 1000;
	}

	void setSalary() override {
		this->salary = bonus(this->numberOfSubordinates) + getProjectSalary(this->project, this->share);
	}

};



class SeniorManager : public ProjectManager {
public:
	SeniorManager(int id, std::string FIO, float share, ProjectStruct *project, int numberOfSubordinates) : ProjectManager(id, FIO, share, project, numberOfSubordinates) {
		setSalary();
		project = nullptr;
	}

	int bonus(int numberOfSubordinates) override {
		return numberOfSubordinates * 1000;
	}

	float getLeaderIncome(float involvment) {
		float sum = 0;
		for (auto project : PROJECTS) {
			sum += project.projectMoney * share;
		}
		return sum;
	}

	void setSalary() override {
		project = nullptr;
		this->salary = getLeaderIncome(this->share) + bonus(this->numberOfSubordinates);
	}
};