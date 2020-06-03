#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>
#include"Employee.h"
#include"Engineer.h"
#include"Manager.h"
#include"Personal.h"
//enum EMPLOYEES_ID { ENGINEER, PROGRAMMER, TESTER, MANAGER, PMANAGER, SMANAGER, DRIVER, CLEANER };
using namespace std;

int main()
{
	vector<Employee*> empls;

	std::string line;
	std::ifstream in("info.txt");
	if (in.is_open())
	{
		int id = 0;
		while (getline(in, line))
		{
			empls.push_back(Employee::createEmployee(line, id));
			++id;
		}
	}
	in.close();

	for (size_t i=0;i<empls.size(); ++i)
	{
		empls[i]->setWT(36);
		empls[i]->calc();
		empls[i]->print_inf();
	}

	system("pause");
}