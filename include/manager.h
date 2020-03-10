
#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"
//#include "workproject.h"

#include <vector>

using namespace std;

/*class Employee;
class Project;
class Heading;*/

class Manager : public Employee, public Project
{
protected:
	float project_participation;
	int project_budget;
public:
	Manager(int id, string fio, float project_participation, int project_budget);
	float calcprpayment() override; //переопределили функцию?
	void solary() override;
	//float percent(float percent);
};

class ProjManager : public Manager, public Heading
{
protected:
	int subordinates; //количество подчиненных
public:
	ProjManager(int id, string fio, float project_participation, int project_budget, int subordinates);
	//float calcprpayment(int percent, int budget);
	float calchepayment() override;
	void solary() override;
};

class SeniorManager : public ProjManager
{
public:
	SeniorManager(int id, string fio, float project_participation, int project_budget, int subordinates);
	//float calcprpayment(int percent, int budget);
	float calchepayment() override;
	//void solary();
};

#endif