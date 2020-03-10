#include "TeamLeader.h"

TeamLeader::TeamLeader(int id, std::string name, double worktime, double payment) : Programmer(id, name, worktime, payment) {}

std::vector<Programmer*> TeamLeader::getProgrammer()
{
	std::vector<Programmer*> v(this->programmersList.size());
	for (int i = 0; i < this->programmersList.size(); i++)
	{
		v[i] = this->programmersList[i];
	}
	return v;
}

std::vector<Tester*> TeamLeader::getTester()
{
	std::vector<Tester*> v(this->testersList.size());
	for (int i = 0; i < this->testersList.size(); i++)
	{
		v[i] = this->testersList[i];
	}
	return v;
}

void TeamLeader::addTester(Tester* person)
{
	this->testersList.push_back(person);
}

void TeamLeader::addProgrammer(Programmer* person)
{
	this->programmersList.push_back(person);
}

void TeamLeader::deleteProgrammer(Programmer* person)
{
	for (int i = 0; i < this->programmersList.size(); i++)
	{
		if (programmersList[i] == person)
		{
			this->programmersList.erase(this->programmersList.begin() + i);
			return;
		}
	}
}

void TeamLeader::deleteTester(Tester* person)
{
	for (int i = 0; i < this->testersList.size(); i++)
	{
		if (testersList[i] == person)
		{
			this->testersList.erase(this->testersList.begin() + i);
			return;
		}
	}
}

void TeamLeader::deleteAll()
{
	this->programmersList.clear();
	this->testersList.clear();
}

double TeamLeader::calculateChiefPayment(double chiefPayment)
{
	return (this->testersList.size() + this->programmersList.size()) * chiefPayment;
}

void TeamLeader::calculatePayment(double percent, double budget, double chiefPayment)
{
	this->payment = calcWorkTimePayment() + calculateChiefPayment(chiefPayment) + calcProjectPayment(percent, budget);
}