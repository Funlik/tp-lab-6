#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include "Cleaner.h"
#include "Driver.h"
#include "Employee.h"
#include "Engineer.h"
#include "Factory.h"
#include "Heading.h"
#include "Manager.h"
#include "Personal.h"
#include "Programmer.h"
#include "Project.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "WorkTime.h"

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	string s = "";
	getline(cin, s);
	vector<Employee*> a(8);
	vector<int> position(8);
	Factory* f = new Factory();
	for (int i = 0; i < 8; i++)
	{
		FactoryKey fk;
		cin >> fk.employee_id;
		cin >> fk.name;
		cin >> fk.position_id;
		cin >> fk.base;
		cin >> fk.percent;
		cin >> fk.worktime;
		position[i] = fk.position_id;
		a[i] = f->makeEmployee(fk);
	}

	cout << "id | name | position | worktime | payment\n";
	for (int i = 0; i < 8; i++)
	{
		Employee* p = a[i];
		switch (position[i])
		{
		case 1: p->Calc(); break;
		case 2: p->Calc(); break;
		case 3: ((Programmer*)p)->Calc(15, 10000); break;
		case 4: ((Tester*)p)->Calc(15, 10000); break;
		case 5: ((TeamLeader*)p)->Calc(15, 10000, 500); break;
		case 6: ((Manager*)p)->Calc(15, 10000); break;
		case 7: ((ProjectManager*)p)->Calc(15, 10000, 300); break;
		case 8: ((SeniorManager*)p)->Calc(15, 10000, 400); break;
		default:
			break;
		}
		cout << p->getID() << " | " << p->getName() << " | " << position[i] << " | " << p->getWorktime() << " | "
			<< p->getPayment() << '\n';
	}
	return 0;
}