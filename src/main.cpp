#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Project.h"
#include "WorkTime.h"
#include "Heading.h"
#include "Engineer.h"
#include "Employee.h"
#include "Manager.h"
#include "Personal.h"
#include "CompanyCreation.h"

using namespace std;

int main() 
{
	CompanyCreation* company = new CompanyCreation();
	vector<Employee*> workers(30);
	vector<string> positions(30);
	string range;
	ifstream file("workers.txt");
	int i = 0;

	while (getline(file, range)) 
	{
		int id, base, per, worktime;
		string name, position;
		istringstream iss(range);

		iss >> id >> name >> position >> base >> per >> worktime;
		positions[i] = position;
		workers[i] = company->addEmployee(id, position, name, worktime, base, per);
		i++;
	}

for (int i = 0; i < 30; i++) 
{
	Employee* worker = workers[i];
	if (positions[i] == "Cleaner") 
	{
		worker->calcPayment();
	}
	else if (positions[i] == "Driver") 
	{
		worker->calcPayment();
	}
	else if (positions[i] == "Tester") 
	{
		((Tester*)worker)->calcPayment(5, 30000);
	}
	else if (positions[i] == "Programmer") 
	{
		((Programmer*)worker)->calcPayment(5, 40000);
	}
	else if (positions[i] == "TeamLeader") 
	{
		((TeamLeader*)worker)->calcPayment(9, 40000, 300);
	}
	else if (positions[i] == "Manager") 
	{
		((Manager*)worker)->calcPayment(20, 30000);
	}
	else if (positions[i] == "ProjectManager") 
	{
		((ProjectManager*)worker)->calcPayment(20, 40000, 300);
	}
	else if (positions[i] == "SeniorManager") 
	{
		((SeniorManager*)worker)->calcPayment(20, 50000, 400);
	}
	cout << worker->getID() << " - " << worker->getName() << " - " << positions[i] << " - " << worker->getWorktime() << " - " << worker->getPayment() << '\n';
}

return 0;
}