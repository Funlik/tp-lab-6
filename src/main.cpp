#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>
#include <stdlib.h>
#include "factory.h"
#include "Interfaces.h"
#include "Abstracts.h"
#include "Positions.h"

using namespace std;

extern map<string, int> projects;


vector<Employee*> createEmployees()
{
	system("chcp 65001");
	ifstream fin("names.txt");
	string buf;
	vector<string> str;
	vector<Employee*> employees;
	while (getline(fin, buf))
	{
		str = split(buf, ' ');
		employees.push_back(Factory::createEmployee(str));
		/*for (int i = 0; i < str.size(); i++)
			cout << str[i] << " ";
		cout << endl;*/
	}
	fin.close();
	return employees;
}

void createProjects()
{
	system("chcp 65001");
	ifstream fin("projects.txt");
	string buf;
	vector<string> str;
	unsigned int tmp;
	while (getline(fin, buf))
	{
		str = split(buf, ' ');
		/*for (int i = 0; i < str.size(); i++)
			cout << str[i] << " ";
		cout << endl;*/
		tmp = atoi(str[1].c_str());
		projects[str[0]] = tmp;
	}
}


int main()
{
	createProjects();
	vector<Employee*> employees = createEmployees();
	float salary, max = 0;
	for (auto emp : employees)
	{
		emp->setWorkTime(rand() % 10 + 30);
		salary = emp->getPayment();
		if (salary > max)
			max = salary;
		cout << emp->getId() << " " << emp->getName() << " gets " << salary << endl;
	}
	cout << "Highest payment is " << max << endl;
	getchar();
	return 0;
}