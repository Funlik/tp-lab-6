#pragma once
using namespace  std;
vector<string> split(string s, char delimiter);

Employee* create(const vector<string>& info, map<string, Task*>& projects);

void parse(ifstream& company, vector<Employee*>& staff, ifstream& projectsFile, map<string, Task*>& projects);

void print(const vector<Employee*>& staff);
