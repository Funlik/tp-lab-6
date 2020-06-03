// laba6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Manager.h"
#include "Engineer.h"
#include "Personal.h"
#include<iostream>
#include <fstream>
#include<string> 
#include<vector>
#include <sstream>
#include <algorithm>
#include <time.h>
#include<map>

using namespace std;







int main()
{
	vector <Employee*> workers;
	vector <string> projects = { "Project1", "Project2","Project3" };
	vector <int> funds = { 1000000 , 500000, 2000000 };
	int id;
	string name;
	int worktime = 40;
	string position;
	int base;
	string project ="a";
	int fund=1;
	double part;
	int people;
	ifstream fin("FIOgroup.txt");

	int i = 0;




	fund = 0;
	int num = 0;
	while (fin >> id >> name >> position)
	{
		num++;
		if (position == "Cleaner") {
			fin >> base;
			workers.push_back(new Cleaner(id, name, worktime, base));
		}

		
		if (position == "Driver") {
			fin >> base;
			workers.push_back(new Driver(id, name, worktime, base));
		}
		
		if (position == "Programmer") {
			fin >> base;
			fin >> project;
			fin >> part;
			for (int j = 0; j < 2; j++)
				if (project == projects[j]) {
					fund = funds[j];
					break;
				}
			workers.push_back(new Programmer(id, name, worktime, base, part,project, fund));
		}
		if (position == "Tester") {
			fin >> base;
			fin >> project;
			fin >> part;
			for (int j = 0; j < 2; j++)
				if (project == projects[j]) {
					fund = funds[j];
					break;
				}
			workers.push_back(new Tester(id, name, worktime, base, part,project, fund));
		}
		if (position == "Teamleader") {
			fin >> base;
			fin >> project;
			fin >> people;
			fin >> part;
			
			for (int j = 0; j < 2; j++)
				if (project == projects[j]) {
					fund = funds[j];
					break;
				}
			workers.push_back(new TeamLeader(id, name, worktime,base, part,project, fund, people));
		}
		if (position == "Manager") {
			fin >> project;
			fin >> part;
			for (int j = 0; j < 2; j++)
				if (project == projects[j]) {
					fund = funds[j];
					break;
				}
			workers.push_back(new Manager(id, name, worktime, part,project, fund));
		}
		if (position == "ProjectManager") {
			fin >> project;
			fin >> people;
			fin >> part;
			
			for (int j = 0; j < 2; j++)
				if (project == projects[j]) {
					fund = funds[j];
					break;
				}
			workers.push_back(new ProjectManager(id, name, worktime, part,project, fund, people));
		}
		if (position == "SeniorManager") {
			fin >> people;
			fin >> part;
	
			for (int j = 0; j < 2; j++)
				if (project == projects[j]) {
					fund = funds[j];
					break;
				}
			workers.push_back(new SeniorManager(id, name, worktime, part,project, fund, people));
		}
	}
   
	for (int j = 0; j <workers.size(); j++) {
		cout << workers[j]->getId() << "   "<<workers[j]->getName() << "   " << workers[j]->getPayment() << endl;
	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
