#pragma once
#include "Employee.h"

class Engineer : public Employee, public Project, public WorkTime {
protected:
	long long rate;
	ProjectStruct *project;
	float share;
public:

	Engineer(int id, std::string FIO, long long rate, float share, ProjectStruct *project) : Employee(id, FIO), project(project), rate(rate), share(share) {
	}

	float getProjectSalary(ProjectStruct *project, float share) override {
		return project->projectMoney * share;
	}
	float getWorktimeSalary(long long rate) override {
		return WORKTIME * rate;
	}
};



class Programmer : public Engineer {
public:
	Programmer(int id, std::string FIO, long long rate, float share, ProjectStruct *project) : Engineer(id, FIO, rate, share, project) {
		setSalary();
	}

	void setSalary() override {
		this->salary = getProjectSalary(this->project, this->share) + getWorktimeSalary(this->rate);
	}
};



class Tester : public Engineer {
public:
	Tester(int id, std::string FIO, long long rate, float share, ProjectStruct *project) : Engineer(id, FIO, rate, share, project) {
		setSalary();
	}

	void setSalary() override {
		this->salary = getProjectSalary(this->project, this->share) + getWorktimeSalary(this->rate);
	}
};

class TeamLeader : public Programmer, public Heading {
private:
	int numberOfSubordinates;
public:

	TeamLeader(int id, std::string FIO, long long rate, float share, ProjectStruct *project, int numberOfSubordinates) : Programmer(id, FIO, rate, share, project), numberOfSubordinates(numberOfSubordinates) {
		setSalary();
	}


	int bonus(int numberOfSubordinates) override {
		return numberOfSubordinates * 1000;
	}

	void setSalary() override {
		this->salary = bonus(this->numberOfSubordinates) + getProjectSalary(this->project, this->share) + getWorktimeSalary(this->rate);
	}

};