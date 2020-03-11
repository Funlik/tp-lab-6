#include "Factory.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(const string& s, char delimiter)
{
	vector<string> Tokens;
	string Token;
	istringstream TokenStream(s);
	while (getline(TokenStream, Token, delimiter))
		Tokens.push_back(Token);
	return Tokens;
}

int main()
{

	WorkProject* project1 = new WorkProject("Kafka", 100000);
	WorkProject* project2 = new WorkProject("SpringSh", 200000);
	WorkProject* project3 = new WorkProject("AdudroidKun", 300000);

	vector<WorkProject *> projects = {project1, project2, project3};

	EmployeeFactory EF = EmployeeFactory(projects);

	ifstream file("file.txt");
	vector<Employee*> staff;
	while (!file.eof())
	{
		string buf;
		getline(file, buf, '\n');
		vector<string> data = split(buf, ' ');
		staff.push_back(EF.create(data));
	}

	for (auto employee : staff)
	{
		employee->calculatePayment();
		cout << "FIO: " << employee->getName() << "   PAYMENT: " << employee->getPayment() << endl;
	}

	return 0;
}









