#include <iostream>
#include <vector>
#include <fstream>

#include "Employees.h"

using namespace std;

//Example of company
class Company {
private:
	EmployeeFactory F;
	vector<Employee*> employee;
	vector<Project*> projects;
public:
	void CreateProject(int budget, string name, double l1, double l2, double l3) {
		projects.push_back(new Project(name, l1, l2, l3));
		projects[projects.size() - 1]->SetBudget(budget);
	}
	Company() {
		CreateProject(0, "Main", 0, 0, 0);
	}
	void Reculc() {
		int counter = 0;
		for (int i = 1; i < projects.size(); i++) {
			if ((*projects[i]).GetNumber() != 0) {
				counter += (*projects[i]).GetNumber() + 1;
			}
		}
		(*projects[0]).AddEmp(counter);
	}
	Project* FindProject(string projectStr) {
		if (projectStr == "Main") {
			Reculc();
			return projects[0];
		}
		for (int i = 1; i < projects.size(); i++) {
			if ((*projects[i]).GetName() == projectStr) {
				return projects[i];
			}
		}
		return NULL;
	}
	void AddEmployees(string filename) {
		string projectStr, name, type;
		int id, payment, num;
		Project* project;

		ifstream fin(filename);
		if (fin.is_open()) {
			while (!fin.eof()) {
				fin >> id >> name >> payment >> type >> projectStr;
				project = FindProject(projectStr);
				employee.push_back(F.CreateEmployee(id, name, payment, type, project));
			}
		}
		fin.close();
	}
	void PrintInfo() {
		for (int i = 0; i < employee.size(); i++) {
			(*employee[i]).PrintInfoString();
		}
		cout << endl;
	}
	void AddWorkDays(int num) {
		for (int i = 0; i < employee.size(); i++) {
			(*employee[i]).AddDone(num);
		}
	}
	void PrintPayment() {
		cout << "Salaries: " << endl;
		for (int i = 0; i < employee.size(); i++) {
			cout << (*employee[i]).GetId() << " " << (*employee[i]).GetName() << " " << (*employee[i]).CalcPay() << endl;
		}
		cout << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	Company FurnitureSoft;

	//Projects
	FurnitureSoft.CreateProject(100000, "ChairsDevelopment", 0.00025, 0.0003, 0.0005);
	FurnitureSoft.CreateProject(70000, "ProTable", 0.0003, 0.00034, 0.0006);

	FurnitureSoft.AddEmployees("input.txt");
	FurnitureSoft.PrintInfo();

	FurnitureSoft.AddWorkDays(30);
	FurnitureSoft.PrintPayment();

	FurnitureSoft.PrintPayment();

	FurnitureSoft.AddWorkDays(1);
	FurnitureSoft.PrintPayment();
	
	return 0;
}