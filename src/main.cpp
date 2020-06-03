#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Engineer.h"
#include "Employee.h"
#include "Manager.h"
#include "Personal.h"
#include "Factory.h"
using namespace std;

int main() {
	ifstream file("ListOfWorkers.txt");
	Factory* office = new Factory();
	vector<Employee*> workers(14);
	vector<string>positions(14);
	if (file.is_open()) {
		cout << "Downloud..." << endl;
		string line;
		int i = 0;
		while (getline(file, line)) {
			int id,worktime,fare,rate,people,projects;
			string name, position;
			istringstream iss(line);
			iss >> id >> name >> position >> worktime >> rate >> fare>>projects>>people;
			positions[i] = position;
			workers[i] = office->NewEmployee(position, id, name, worktime, rate,fare, projects,people);
			i++;
		}
	}
	else {
		cout << "Error!!!" << endl;
	}

	for (int i = 0; i < 14; i++) {
		Employee* worker = workers[i];
		if (positions[i] == "Cleaner") {
			worker->SetPayment();
		}
		else if (positions[i] == "Driver") {
			worker->SetPayment();
		}
		else if (positions[i] == "Tester") {
			((Tester*)worker)->SetPayment();
		}
		else if (positions[i] == "Programmer") {
			((Programmer*)worker)->SetPayment();
		}
		else if (positions[i] == "TeamLeader") {
			((TeamLeader*)worker)->SetPayment();
		}
		else if (positions[i] == "Manager") {
			((Manager*)worker)->SetPayment();
		}
		else if (positions[i] == "ProjectManager") {
			((ProjectManager*)worker)->SetPayment();
		}
		else if (positions[i] == "SeniorManager") {
			((SeniorManager*)worker)->SetPayment();
		}
		cout << worker->GetId() << " - " << worker->GetName() << " - " << positions[i] << " - " << worker->GetWorktime() << " - "
			<< worker->GetPayment() << '\n';
	}
	return 0;
}