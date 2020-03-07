#pragma once

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class InfProject
{
private:
	string name;
	int budget;

public:
	InfProject(string name_, int budget_);
	int num_programmer = 0;
	int num_tester = 0;
	int num_team_leader = 0;
	int num_manager = 0;
	int per_programmer = 0;
	int per_tester = 0;
	int per_team_leader = 0;
	int per_manager = 0;
	int per_project_manger = 0;
	int get_num_all();
	string get_name_();
	int get_budget_();
};
