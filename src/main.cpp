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

	WorkProject* project1 = new WorkProject("Kafka", 15);
	WorkProject* project2 = new WorkProject("SpringSh", 20);
	WorkProject* project3 = new WorkProject("AdudroidKun", 10);

	vector<WorkProject *> projects = {project1, project2, project3};

	EmployeeFactory EF = EmployeeFactory(projects);

	ifstream file("files.txt");
	vector<Employee*> files;
	while (!file.eof())
	{
		string buf;
		getline(file, buf, '\n');
		vector<string> data = split(buf, ' ');
		files.push_back(EF.create(data));
	}

	for (auto employee : files)
	{
		employee->calculatePayment();
		cout << "FIO: " << employee->getName() << "   PAYMENT: " << employee->getPayment() << endl;
	}

	return 0;
}









