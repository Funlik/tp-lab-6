
#include "fabrika.h"

#include <fstream>
#include <sstream>

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
	//string fio;
	//float payment;
	system("chcp 1251");
	WorkProject* project1 = new WorkProject("project_1", 150000);
	WorkProject* project2 = new WorkProject("project_2", 200000);
	WorkProject* project3 = new WorkProject("project_3", 270000);
	vector<WorkProject *> projects = {project1, project2, project3};
	EmployeeFactory EmplFact = EmployeeFactory(projects);
	ifstream file("employee.txt");
	vector<Employee*> staff;
	while (!file.eof())
	{
		string buf;
		getline(file, buf, '\n');
		vector<string> data = split(buf, ':');
		staff.push_back(EmplFact.create(data));
	}
	for (auto employee : staff)
	{
		employee->solary();
		//cout << "FIO: " << employee->getfio(fio) << "   PAYMENT: " << employee->getpayment(payment) << endl;
		cout << "FIO: " << employee->getfio() << "   PAYMENT: " << employee->getpayment() << endl;
	}
	return 0;
}

// цикл обработки файла