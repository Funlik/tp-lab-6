#include "Engineer.h"

Engineer::Engineer(unsigned int id, string name, unsigned int base, vector<string> projects, vector<float> ratio, vector<int> budget):Employee(id,name)
{
	this->base = base;
	this->ratio = ratio;
	this->projects = projects;
	this->budget = budget;
}

Programmer::Programmer(unsigned int id, string name, unsigned int base, vector<string> projects, vector<float> ratio, vector<int> budget) :Engineer(id, name,base,projects,ratio, budget){}

Tester::Tester(unsigned int id, string name, unsigned int base, vector<string> projects, vector<float> ratio, vector<int> budget) : Engineer(id, name, base, projects, ratio, budget){}

TeamLeader::TeamLeader(unsigned int id, string name, unsigned int base, vector<string> projects, vector<float> ratio, vector<int> budget, int workers) : Programmer(id, name, base, projects, ratio, budget)
{
	this->workers = workers;
}