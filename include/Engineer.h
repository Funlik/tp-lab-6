#ifndef ENGINEER_H
#define ENGINEER_H

#include "includeHeader.h"
#include "Heading.h"
#include "Project.h"
#include "WorkTime.h"
#include "Employee.h"
class Engineer :
	public Employee,
	public WorkTime,
	public Project
{
public:
	Engineer(int id = 0, string name = "", string team = "", int payment = 1, int paymentProj = 1) : Employee(id, name, payment), Team(team), PaymentProj(paymentProj) {};
	~Engineer();
	void print() const;
	void workProsses(int WTmodif);
	int paymentCount();
	int ProjPayment() override;
	int WorkTimePayment() override;
	int getRate();
private:
	//int id;
	string Team;
	int paymentPerHour = 2;
	int PaymentProj = 20;
	//string name;
};




class Programmer : public Engineer
{
public:
	Programmer(int id = 0, string name = "", string team = "", int payment = 2, int paymentProj = 2) : Engineer(id, name, team, payment, paymentProj) {};
	~Programmer();

private:
	string Team;
};






class Tester : public Engineer
{
public:
	Tester(int id = 0, string name = "", string team = "", int payment = 2, int paymentProj = 2) : Engineer(id, name, team, payment, paymentProj) {};
	~Tester();
private:
	string Team;
};




class TeamLeader : public Programmer, public Heading
{
public:
	TeamLeader(int id = 0, string name = "", string team = "", int payment = 2, int paymentProj = 2, int paymentLeaders = 2) : Programmer(id, name, team, payment, paymentProj), PaymentLeaders(paymentLeaders) {};
	~TeamLeader();
	int paymentCount();
	int paymentForLeaders() override;
private:
	string Team;
	int PaymentLeaders;
};






#endif // !ENGINEER_H

