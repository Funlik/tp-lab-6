#pragma once
#include <string>
#include "emploee.h"
#include "Interfaces.h"
#include <map>
#include"Company.h"
using namespace std;
extern map <string, int> Projects;
class Manager : public Employee, public Project{
protected:
	float interaction;
	string project;
	
public:
	Manager(int ID, string FIO, float INTERACTION, string PROJECT);
	float CalcProjPaym() override;
	void CalcPayment() override;

};
class ProjectManager : public Manager, public Heading {
protected:
	int paymForHead;
	int numSub;
public:
	ProjectManager(int ID, string FIO, float INTERACTION, string PROJECT,  int PAYMFORHEAD, int NUMSUB);
	int CalcHeadPaym() override;
	void CalcPayment() override;

};
class SeniorManager : public ProjectManager{
public:
	SeniorManager(int ID, string FIO, float INTERACTION, int PAYMFORHEAD, int NUMSUB);
	float CalcProjPaym() override;
	

};