#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>


class Employee
{
protected:

	int id; 
	std::string fio;
	int	worktime;
	double payment;

public:

	Employee(int id, std::string fio, int worktime)
	{
		this->id = id;
		this->fio = fio;
		this->worktime = worktime;
	}

	virtual void Calc() = 0;

	int ID()
	{
		return id;
	}

	std::string FIO()
	{
		return fio;
	}

	double PAYMENT()
	{
		return payment;
	}

};

//-----------------------------------------------------------------------------------------

class WorkTime
{
public:

	virtual double work_time() = 0;
};

//-----------------------------------------------------------------------------------------

class Project
{
public:

	virtual double pay_project() = 0;
};

//-----------------------------------------------------------------------------------------


class Heading
{
public:

	virtual double pay_head() = 0;
};

//-----------------------------------------------------------------------------------------

class Personal : public Employee, public WorkTime
{
protected:

	int base;

public:

	Personal(int id, std::string fio, int worktime, int base) : Employee(id, fio, worktime)
	{
		this->base = base;
	}

	double work_time() override
	{
		return (this->worktime * this->base);
	}

	void Calc() override
	{
		this->payment = work_time();
	}

};

//-----------------------------------------------------------------------------------------

class Cleaner : public Personal
{

public:

	Cleaner(int id, std::string fio, int worktime, int base) : Personal(id, fio, worktime, base)
	{}

};

//-----------------------------------------------------------------------------------------

class Driver : public Personal
{
protected:

	int bonus;

public:

	Driver(int id, std::string fio, int worktime, int base, int bonus) : Personal(id, fio, worktime, base)
	{
		this->bonus = bonus;
	}

	void Calc() override
	{
		this->payment = this->work_time() + bonus;
	}

};

//-----------------------------------------------------------------------------------------

class Enginer : public Employee, public WorkTime, public Project
{
protected:

	std::string project;
	double procent;
	int base;
	int money_project;

public:

	Enginer(int id, std::string fio, int worktime, int base, std::string project, double procent, int money_project) : Employee(id, fio, worktime)
	{
		this->base = base;
		this->procent = procent;
		this->project = project;
		this->money_project = money_project;
	}

	double work_time() override
	{
		return (this->worktime * this->base);
	}

	double pay_project() override
	{
		//printf("money_project = %d, procent")
		return (this->money_project * this->procent);
	}

	void Calc() override
	{
		this->payment = this->work_time() + this->pay_project();
	}

};

//-----------------------------------------------------------------------------------------

class Programmer : public Enginer
{

public:

	Programmer(int id, std::string fio, int worktime, int base, std::string project, double procent, int money_project) : Enginer(id, fio, worktime, base, project, procent, money_project)
	{}

};

//-----------------------------------------------------------------------------------------

class Tester : public Enginer
{

public:

	Tester(int id, std::string fio, int worktime, int base, std::string project, double procent, int money_project) : Enginer(id, fio, worktime, base, project, procent, money_project)
	{}

};

//-----------------------------------------------------------------------------------------

class TeamLeader : public Programmer, public Heading
{

protected:

	int number_people;
	int money_for_people;

public:

	TeamLeader(int id, std::string fio, int worktime, int base, std::string project, double procent, int money_project, int number_people, int money_for_people) : Programmer(id, fio, worktime, base, project, procent, money_project)
	{
		this->number_people = number_people;
		this->money_for_people = money_for_people;
	}

	double pay_head() override
	{
		//printf("pay+head = %d\n", this->number_people * this->money_for_people);
		return (this->number_people * this->money_for_people);
	}

	void Calc() override
	{
		//printf("pay_project = %f", this->pay_project());
		this->payment = this->pay_head() + this->pay_project() + this->work_time();
	}

};

//-----------------------------------------------------------------------------------------

class Manager : public Employee, public Project
{

protected:

	std::string project;
	double procent;
	int money_project;

public:

	Manager(int id, std::string fio, int worktime, std::string project, double procent, int money_project) : Employee(id, fio, worktime)
	{
		this->project = project;
		this->procent = procent;
		this->money_project = money_project;
	}

	double pay_project()
	{
		return(this->money_project * this->procent);
	}

	void Calc() override
	{
		this->payment = this->pay_project();
	}

};

//-----------------------------------------------------------------------------------------

class ProjectManager : public Manager, public Heading
{

protected:

	int number_people;
	int money_for_people;

public:

	ProjectManager(int id, std::string fio, int worktime, std::string project, double procent, int money_project, int number_people, int money_for_people) : Manager(id, fio, worktime, project, procent, money_project)
	{
		this->number_people = number_people;
		this->money_for_people = money_for_people;
	}

	double pay_head() override
	{
		return (this->number_people * this->money_for_people);
	}

	void Calc() override
	{
		this->payment = this->pay_project() + this->pay_head();
	}

};

//-----------------------------------------------------------------------------------------

class SeniorManager : public ProjectManager
{

public:

	SeniorManager(int id, std::string fio, int worktime, std::string project, double procent, int money_project, int number_people, int money_for_people) : ProjectManager(id, fio, worktime, project, procent, money_project, number_people, money_for_people)
	{
	}

};