#include <iostream>
#include <string>
#include <vector>

#include "Cleaner.h"
#include "Driver.h"
#include "Employee.h"
#include "Personal.h"
#include "Worktime.h"
#include "Project.h"
#include "Manager.h"
#include "Programmer.h"
#include "ProjectManager.h"
#include "Tester.h"
#include "TeamLeader.h"
#include "SeniorManager.h"

using namespace std;

int main() {
	//Cleaner* Sasha = new Cleaner(1, "Sasha", 10, 10);
	Cleaner Sasha(1, "Sasha", 10, 10);
	cout << Sasha.getID() << endl;

	Manager Petya(2, "Petya", 20, 15);
	cout << Petya.calculateProjectPayment(100000, Petya.getPercent()) << endl;

	Programmer Masha(3, "Masha", 30, 400);
	cout << Masha.calculateProjectPayment(100000, 10) << endl;
	Masha.calc(100000, 10);
	cout << Masha.getRate() << endl;

	TeamLeader Jenya(4, "Jenya", 40, 500);
	Jenya.addProgrammer(new Programmer(5, "Pavel", 50, 600));
	//Jenya.calculateHeadingPayment(Jenya.getProgrammers().size());
	Jenya.calc(100000, 20, 700);
	cout << Jenya.getRate() << endl;

}