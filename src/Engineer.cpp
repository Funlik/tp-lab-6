#include "Engineer.h"

Engineer::Engineer(int ID, string name, int worktime, int base) : Employee(ID, name, worktime) 
{
	this->base = base;
}

int Engineer::calcWTPayment()
{
	return this->worktime * this->base;
}

int Engineer::calcProjPayment(int per, int budget) 
{
	return (per*budget)/100;
}

void Engineer::calcPayment(int per, int budget) 
{
	this->payment = calcWTPayment() + calcProjPayment(per, budget);
}

void Engineer::calcPayment() 
{
	return;
}


Programmer::Programmer(int ID, string name, int worktime, int base) : Engineer(ID, name, worktime, base) 
{
}


Tester::Tester(int ID, string name, int worktime, int base) : Engineer(ID, name, worktime, base) 
{
}


TeamLeader::TeamLeader(int ID, string name, int worktime, int base) : Programmer(ID, name, worktime, base) 
{
}

void TeamLeader::addTester(Tester* tester) 
{
	this->testers.push_back(tester);
}

void TeamLeader::deleteTester(Tester* _tester) 
{
	for (int i = 0; i < this->testers.size(); i++) 
	{
		if (this->testers[i] == _tester) 
		{
			this->testers.erase(this->testers.begin() + i);
			return;
		}
	}
}

void TeamLeader::addProgrammer(Programmer* programmer)
{
	this->programmers.push_back(programmer);
}

void TeamLeader::deleteProgrammer(Programmer* _programmer)
{
	for (int i = 0; i < this->programmers.size(); i++) 
	{
		if (this->programmers[i] == _programmer) 
		{
			this->programmers.erase(this->programmers.begin() + i);
			return;
		}
	}
}

int TeamLeader::calcHeadPayment(int leadbase)
{
	return leadbase * (this->testers.size() + this->programmers.size());
}

void TeamLeader::calcPayment(int per, int budget, int leadbase) 
{
	this->payment = calcWTPayment() + calcProjPayment(per, budget) + calcHeadPayment(leadbase);
}