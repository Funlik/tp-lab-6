#pragma once
#include <string>
#include "Interfaces.h"
#include <vector>
#include <iostream>


class Employee {
protected:
	uint8_t id;
	std::string FIO;
	float salary;
public:
	Employee(uint8_t id, std::string FIO) : id(id), FIO(FIO) {}

	virtual void set_salary() = 0;

	std::string get_FIO() const {
		return this->FIO;
	}

	float get_salary() const {
		return this->salary;
	}

	int get_id() const {
		return this->id;
	}
};


class Personal : public Employee, public WorkTime {
protected:
	uint32_t rate;
public:
	Personal(uint8_t id, std::string FIO, uint32_t rate) : Employee(id, FIO), rate(rate) {
	}

	void set_rate(uint32_t rate) {
		this->rate = rate;
	}
};



class Cleaner : public Personal {
public:

	Cleaner(uint8_t id, std::string FIO, uint32_t rate) : Personal(id, FIO, rate) {
		set_salary();
	}

	float get_worktime_salary(uint32_t rate) override {
		this->salary = WORKTIME * rate;
		return salary;
	}

	void set_salary() override {
		this->salary = get_worktime_salary(this->rate);
	}
};



class Driver : public Personal {

public:
	Driver(uint8_t id, std::string FIO, uint32_t rate) : Personal(id, FIO, rate) {
		set_salary();
	}

	float get_worktime_salary(uint32_t rate) override {
		this->salary = WORKTIME * rate;
		return salary;
	}

	void set_salary() override {
		this->salary = get_worktime_salary(this->rate);
	}
};


class Engineer : public Employee, public Project, public WorkTime {
protected:
	uint32_t rate;
	ProjectStruct *project;
	float share;
public:

	Engineer(uint8_t id, std::string FIO, uint32_t rate, float share, ProjectStruct *project) : Employee(id, FIO), project(project), rate(rate), share(share) {
	}

	float get_project_salary(ProjectStruct *project, float share) override {
		return project->projectMoney * share;
	}
	float get_worktime_salary(uint32_t rate) override {
		return WORKTIME * rate;
	}
};



class Programmer : public Engineer {
public:
	Programmer(uint8_t id, std::string FIO, uint32_t rate, float share, ProjectStruct *project) : Engineer(id, FIO, rate, share, project) {
		set_salary();
	}

	void set_salary() override {
		this->salary = get_project_salary(this->project, this->share) + get_worktime_salary(this->rate);
	}
};



class Tester : public Engineer
{
public:
	Tester(uint8_t id, std::string FIO, uint32_t rate, float share, ProjectStruct *project) : Engineer(id, FIO, rate, share, project) {
		set_salary();
	}

	void set_salary() override {
		this->salary = get_project_salary(this->project, this->share) + get_worktime_salary(this->rate);
	}
};



class TeamLeader : public Programmer, public Heading {
private:
	uint8_t numberOfSubordinates;
public:

	TeamLeader(uint8_t id, std::string FIO, uint32_t rate, float share, ProjectStruct *project, uint8_t numberOfSubordinates) : Programmer(id, FIO, rate, share, project), numberOfSubordinates(numberOfSubordinates) {
		set_salary();
	}


	int bonus(uint8_t numberOfSubordinates) override {
		return numberOfSubordinates * 1000;
	}

	void set_salary() override {
		this->salary = bonus(this->numberOfSubordinates) + get_project_salary(this->project, this->share) + get_worktime_salary(this->rate);
	}

};

class Manager : public Employee, public virtual Project
{
protected:
	float share;
	ProjectStruct *project;
public:

	Manager(uint8_t id, std::string FIO, float share, ProjectStruct* project) : Employee(id, FIO), project(project), share(share) {
		set_salary();
	}

	float get_project_salary(ProjectStruct *project, float share) override {
		return project->projectMoney * share;
	}

	void set_salary() override {
		this->salary = get_project_salary(this->project, this->share);
	}

};



class ProjectManager : public Manager, public Heading
{
protected:
	int numberOfSubordinates;
public:

	ProjectManager(uint8_t id, std::string FIO, float share, ProjectStruct *project, uint8_t numberOfSubordinates) : Manager(id, FIO, share, project), numberOfSubordinates(numberOfSubordinates) {
		set_salary();
	}

	int bonus(uint8_t numberOfSubordinates) override {
		return numberOfSubordinates * 1000;
	}

	void set_salary() override {
		this->salary = bonus(this->numberOfSubordinates) + get_project_salary(this->project, this->share);
	}

};



class SeniorManager : public ProjectManager
{
public:
	SeniorManager(uint8_t id, std::string FIO, float share, ProjectStruct *project, uint8_t numberOfSubordinates) : ProjectManager(id, FIO, share, project, numberOfSubordinates) {
		set_salary();
		project = nullptr;
	}

	int bonus(uint8_t numberOfSubordinates) override {
		return numberOfSubordinates * 1000;
	}

	float get_leader_income(float involvment) {
		float sum = 0;
		for (auto project : PROJECTS) {
			sum += project.projectMoney * share;
		}
		return sum;
	}

	void set_salary() override {
		project = nullptr;
		this->salary = get_leader_income(this->share) + bonus(this->numberOfSubordinates);
	}
};
