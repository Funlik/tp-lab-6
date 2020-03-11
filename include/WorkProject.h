#pragma once
#include <iostream>
using namespace std;

class WorkProject
{
private:
	string projecName;
	float projectBudget;
public:
	WorkProject(string, float);
	float getBudget();
	string getName();
};