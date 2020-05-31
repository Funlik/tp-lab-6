#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

enum levels
{
	lowPay,
	medPay,
	highPay
};

class Employee;
class Project;

//Factory
class EmployeeFactory {
public:
	Employee* CreateEmployee(int id, string name, int payment, string type, Project* project = NULL);
};

//Project
class Project {
private:
	int budget;
	string name;
	int number, nEngineers;
	vector<double> proportion;
public:
	void SetProportion(double l1, double l2, double l3);
	void SetBudget(int budget);
	void PrintInfo(levels lvl);
	Project(string name, double l1, double l2, double l3);
	int GetPay(levels lvl);
	string GetName();
	int GetNumber();
	int GetNEngineers();
	void AddEmp(int num = 1);
	void AddEngineer();
};

//Interfaces
class WorkTime {
public:
	int Calculations(int parts, int payment);
};

class ProjectPay {
public:
	int ProjPay(Project *proj, levels lvl, int donework);
};

class Heading {
public:
	int HeadPay(int num, int payment, int donework);
};

//Eployee classes
class Employee {
protected:
	int id;//идентификационный номер.
	string name;//ФИО.
	string job;//профессия
	int donework;//выполненная работа.
	int payment;//заработная плата.
public:
	Employee(int id, string name, string job, int payment);
	virtual void PrintInfoString() = 0;
	virtual int CalcPay() = 0;
	void AddDone(int num = 1);
	int GetId();
	string GetName();
};

class Manager : public Employee, public ProjectPay {
protected:
	Project* project;
	levels lvl;
public:
	Manager(int id, string name, string job, int payment, Project* proj);
	virtual void PrintInfoString() override;
	virtual int CalcPay() override;
};

class ProjectManager : public Manager, public Heading {
protected:
	int number;
public:
	ProjectManager(int id, string name, string job, int payment, Project* proj, int number = 0);
	virtual void PrintInfoString() override;
	virtual int CalcPay() override;
};

class SeniorManager : public ProjectManager {
public:
	SeniorManager(int id, string name, string job, int payment, Project* proj, int number = 0);
	void PrintInfoString() override;
	int CalcPay() override;
};

class Engineer : public Employee, public WorkTime, public ProjectPay {
protected:
	Project* project;
	levels lvl;
public:
	Engineer(int id, string name, string job, int payment, Project* proj);
	virtual void PrintInfoString() override = 0;
	virtual int CalcPay() override = 0;
};

class Programmer : public Engineer {
public:
	Programmer(int id, string name, string job, int payment, Project* proj);
	virtual void PrintInfoString() override;
	virtual int CalcPay() override;
};

class TeamLeader : public Programmer, public Heading {
protected:
	int number;
public:
	TeamLeader(int id, string name, string job, int payment, Project* proj, int number);
	virtual void PrintInfoString() override;
	virtual int CalcPay() override;
	void AddNum(int num);
};

class Tester : public Engineer {
public:
	Tester(int id, string name, string job, int payment, Project* proj);
	void PrintInfoString() override;
	int CalcPay() override;
};

class Personal : public Employee, public WorkTime {
public:
	Personal(int id, string name, string job, int payment);
	virtual int CalcPay() override;
	virtual void PrintInfoString() override = 0;
};

class Cleaner : public Personal {
public:
	Cleaner(int id, string name, string job, int payment);
	void PrintInfoString() override;
};

class Driver : public Personal {
public:
	int CalcPay() override;
	void PrintInfoString() override;
	Driver(int id, string name, string job, int payment);
};