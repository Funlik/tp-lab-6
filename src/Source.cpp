using namespace std;
#include "Personal.h"
#include "Engineer.h"
#include "Manager.h"
#include "Factory.h"
#include <sstream>
#include <iostream>
#include <fstream>

vector<string> split(const string& s, char delimiter)
{
	vector<string> tokens;
	string token;
	istringstream tokenStream(s);
	while (getline(tokenStream, token, delimiter))
		tokens.push_back(token);
	return tokens;
}

int main()
{
	vector<Employee*> employees;
	ifstream file_of_students("employees.txt");
	system("chcp 1251");
	while (!file_of_students.eof()) {
		string buf;
		getline(file_of_students, buf, '\n');
		vector<string> data = split(buf, ':');
		employees.push_back(Factory::createEmployee(data));
	}
	for (int i = 0; i < employees.size(); i++)
	{
		employees[i]->setWorktime(10);
		employees[i]->calc();
		employees[i]->getPayment();
	}

	return 0;
	
}