#pragma once
#include "includeHeader.h"
#include "Heading.h"
#include "Project.h"
#include "Employee.h"



class Manager : public Employee, public Project
{

	
public:
	Manager(int id = 0, string name = "", string team = "", int paymentProj = 1) : Employee(id, name, 0), Team(team), PaymentProj(paymentProj) {};
	~Manager();
	int paymentCount();
	int ProjPayment() override;


private:
	int PaymentProj = 3;
	string Team;
};





class ProjectManager : public Manager, public Heading
{
public:
	ProjectManager(int id = 0, string name = "", string team = "", int paymentProj = 1, int paymentLeaders = 1) : Manager(id, name, team, paymentProj), PaymentLeaders(paymentLeaders) {};
	~ProjectManager();
	int paymentForLeaders() override;
	int paymentCount();

private:
	int PaymentLeaders;

};



class SeniorManager : public ProjectManager
{
public:
	SeniorManager (int id = 0, string name = "", string team = "", int paymentProj = 1, int paymentLeaders = 1) : ProjectManager(id, name, team, paymentProj, paymentLeaders) {};
	~SeniorManager();

private:

};

