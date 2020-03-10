#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"

using namespace std;
void main()
{
	freopen("file.txt", "r", stdin);
	string str = "";
	getline(cin, str);
	vector <Employee*> emp(8);
	vector <int> id(8);
	Job* job = new Job();
	for (int i = 0; i < 8; i++)
	{
		jobContainer person;
		person.id = i;
		person.name = to_string(i);
		person.workerID = i;
		person.salary = i * 1000;
		person.percent = 0;
		person.worktime = 20;
		id[i] = person.workerID;
		emp[i] = job->makeEmployee(person);
	}

	cout << "id   name   post   worktime   payment\n";
	for (int i = 0; i < 8; i++)
	{
		Employee* employer = emp[i];
		switch (id[i])
		{
		case 1: 
			employer->calcPayment();
			break;

		case 2:
			employer->calcPayment();
			break;
		case 3:
			employer->calcPayment();
			break;
		case 4:
			employer->calcPayment();
			break;
		case 5:
			employer->calcPayment();
			break;
		case 6:
			employer->calcPayment();
			break;
		case 7:
			employer->calcPayment();
			break;
		case 8:
			employer->calcPayment();
			break;
		default:
			break;
		}
		cout << employer->getID() << " " << employer->getName() << " " << employer->getWorktime() << " " << employer->getPayment();
	}

	
	
	
	

	

	
	
	
}