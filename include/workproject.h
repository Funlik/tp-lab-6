#pragma once
#ifndef WORKPROJECT_H
#define WORKPROJECT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class WorkProject
{
private:
	string project_name;
	float project_budget;
public:
	WorkProject(string name, float budget);
	//string get_project_name(string project_name);
	//float get_project_budget(float project_budget);
	string get_project_name();
	float get_project_budget();
};

#endif