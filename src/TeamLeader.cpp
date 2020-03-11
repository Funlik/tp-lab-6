#include "TeamLeader.h"

TeamLeader::TeamLeader(int id, std::string name, int worktime, int base) : Programmer(id, name, worktime, base)
{
}

void TeamLeader::addTester(Tester* human)
{
	this->listTesters.push_back(human);
}

void TeamLeader::addProgrammer(Programmer* human)
{
	this->listProgrammers.push_back(human);
}

std::vector<Programmer*> TeamLeader::getProgrammers()
{
	/*std::vector<Programmer*> ans(this->listProgrammers.size());
	for (int i = 0; i < this->listProgrammers.size(); i++)
	{
		ans[i] = this->listProgrammers[i];
	}
	return ans;*/

	return this->listProgrammers;
}

std::vector<Tester*> TeamLeader::getTesters()
{
	/*std::vector<Tester*> ans(this->listTesters.size());
	for (int i = 0; i < this->listTesters.size(); i++)
	{
		ans[i] = this->listTesters[i];
	}
	return ans;*/

	return this->listTesters;
}

double TeamLeader::calculateHeadingPayment(int leaderRate)
{
	return baseRate* (this->listTesters.size() + this->listProgrammers.size());
}

void TeamLeader::calc(int percent, int budget, int leaderRate)
{
	this->rate = calculateWorktimePayment() + calculateProjectPayment(budget, percent) + calculateHeadingPayment(leaderRate);
}