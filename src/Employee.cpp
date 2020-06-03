#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include"Employee.h"
#include"Engineer.h"
#include"Manager.h"
#include"Personal.h"

using namespace std;
enum EMPLOYEES_ID {ENGINEER, PROGRAMMER, TESTER, TLEADER, MANAGER, PMANAGER, SMANAGER, DRIVER, CLEANER};
	
vector<string> split(const string& str, const string& delim)
{
	vector<string> tokens;
	size_t prev = 0, pos = 0;
	do
	{
		pos = str.find(delim, prev);
		if (pos == string::npos) pos = str.length();
		string token = str.substr(prev, pos - prev);
		if (!token.empty()) tokens.push_back(token);
		prev = pos + delim.length();
	} while (pos < str.length() && prev < str.length());
	return tokens;
}

Employee* Employee::createEmployee(const string &employeeInfoLine, int id)
{
	vector<string> infArr;
	infArr = split(employeeInfoLine, ":");
	Employee* emp;
	EMPLOYEES_ID type = static_cast<EMPLOYEES_ID>(std::stoi(infArr[0]));
	string name;
	string projectName;
	int subNum;
	double share;
	double baseRate;
	double prjBudjet;
	switch (type)
	{
		case ENGINEER:
			name = infArr[1];
			projectName = infArr[2];
			share = stod(infArr[3]);
			baseRate = stod(infArr[4]);
			prjBudjet = stod(infArr[5]);
			emp = new Engineer(id, name, projectName, share, baseRate, prjBudjet);
			break;
		case PROGRAMMER:
			name = infArr[1];
			projectName = infArr[2];
			share = stod(infArr[3]);
			baseRate = stod(infArr[4]);
			prjBudjet = stod(infArr[5]);
			emp = new Programmer(id, name, projectName, share, baseRate, prjBudjet);
			break;
		case TESTER:
			name = infArr[1];
			projectName = infArr[2];
			share = stod(infArr[3]);
			baseRate = stod(infArr[4]);
			prjBudjet = stod(infArr[5]);
			emp = new Tester(id, name, projectName, share, baseRate, prjBudjet);
			break;
		case MANAGER:
			name = infArr[1];
			projectName = infArr[2];
			share = stod(infArr[3]);
			prjBudjet = stod(infArr[4]);
			emp = new Manager(id, name, projectName, share, prjBudjet);
			break;
		case PMANAGER:
			name = infArr[1];
			projectName = infArr[2];
			share = stod(infArr[3]);
			prjBudjet = stod(infArr[4]);
			subNum = stoi(infArr[5]);
			emp = new ProjectManager(id, name, projectName, share, prjBudjet, subNum);
			break;
		case SMANAGER:
			name = infArr[1];
			projectName = infArr[2];
			share = stod(infArr[3]);
			prjBudjet = stod(infArr[4]);
			subNum = stoi(infArr[5]);
			emp = new SeniorManager(id, name, projectName, share, prjBudjet, subNum);
			break;
		case TLEADER:
			name = infArr[1];
			projectName = infArr[2];
			share = stod(infArr[3]);
			baseRate = stod(infArr[4]);
			prjBudjet = stod(infArr[5]);
			subNum = stoi(infArr[6]);
			emp = new TeamLeader(id, name, projectName, share, baseRate, prjBudjet, subNum);
			break;
		case DRIVER:
			name = infArr[1];
			baseRate = stod(infArr[2]);
			emp = new Driver(id , name, baseRate);
			break;
		case CLEANER:
			name = infArr[1];
			baseRate = stod(infArr[2]);
			emp = new Cleaner(id, name, baseRate);
			break;
		default:
			emp = nullptr;
	}
	return emp;
}