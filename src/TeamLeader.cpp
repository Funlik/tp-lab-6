#include "TeamLeader.h"

TeamLeader::TeamLeader(int id, std::string name, int worktime, int base) : Programmer(id, name, worktime, base)
{
}

void TeamLeader::addTester(Tester* target) 
{
	this->testers.push_back(target);
}

void TeamLeader::addPrpogrammer(Programmer* target) 
{
	this->programmers.push_back(target);
}

void TeamLeader::cleanTester(Tester* target) 
{
	for (int i = 0; i < this->testers.size(); i++)
	{
		if (testers[i] == target)
		{
			this->testers.erase(this->testers.begin() + i);
			return;
		}
	}
}

void TeamLeader::cleanProgrammer(Programmer* target) 
{
	for (int i = 0; i < this->programmers.size(); i++)
	{
		if (programmers[i] == target)
		{
			this->programmers.erase(this->programmers.begin() + i);
			return;
		}
	}
}
void TeamLeader::cleanAll() 
{
	this->programmers.clear();
	this->testers.clear();
}

std::vector<Programmer*> TeamLeader::getProgrammers()
{
	std::vector<Programmer*> ans(this->programmers.size());
	for (int i = 0; i < this->programmers.size(); i++)
	{
		ans[i] = this->programmers[i];
	}
	return ans;
}

std::vector<Tester*> TeamLeader::getTesters()
{
	std::vector<Tester*> ans(this->testers.size());
	for (int i = 0; i < this->testers.size(); i++)
	{
		ans[i] = this->testers[i];
	}
	return ans;
}

int TeamLeader::calculateHeadingPayment(int leaderBase)
{
	return base * (this->testers.size() + this->programmers.size());
}

void TeamLeader::Calc(int percent, int budget, int leaderBase)
{
	this->payment = calculateWorkTimePayment() + calculateProjectPayment(percent, budget) + calculateHeadingPayment(leaderBase);
}