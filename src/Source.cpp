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
	for (int i = 1; i < 8; i++)
	{
		jobContainer person;
		person.id = i;
		person.name = to_string(i);
		person.workerID = i;
		person.salary = i * 1000;
		person.percent = 1;
		person.worktime = 20;
		id[i] = person.workerID;
		emp[i] = job->makeEmployee(person);
	}

	cout << "id   name   post   worktime   payment\n";
	for (int i = 1; i < 8; i++)
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
			((Programmer*)employer)->calcPayment(15, 10000);
			break;
		case 4:
			((Tester*)employer)->calcPayment(10, 10000);
			break;
		case 5:
			//((TeamLeader*)employer)->calcPayment(10, 10000, 500);
			break;
		case 6:
			((Manager*)employer)->calcPayment(12, 10000);
			break;
		case 7:
			((ProjectManager*)employer)->calcPayment(12, 10000, 300);
			break;
		case 8:
			((SeniorManager*)employer)->calcPayment(12, 10000, 300);
			break;
		default:
			break;
		}
		cout <<" id "<< employer->getID() << " name " << employer->getName() << " Worktime " << 
			employer->getWorktime() << " payment " << employer->getPayment() <<"\n";
	}

	
	
	
	

	

	
	
	
}