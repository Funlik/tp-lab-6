#include <iostream>
#include <fstream>

#include "Cleaner.h"
#include "Driver.h"
#include "Programmer.h"
#include "Tester.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include "Stuff.h"
#include "Factory.h"

using namespace std;

int main() {
	Company company;
	ifstream in("input.txt");
	string s;
	while (getline(in, s) && s!="") {
		company.addEmployee(s);
	}
	cout << *(company.senior) << '\n';
	for (auto t : company.projectManagers) {
		cout << *(t.second) << '\n';
	}
	for (auto t : company.managers) {
		for (auto tt : t.second) {
			cout << *tt << '\n';
		}
	}
	for (auto t : company.teamLeaders) {
		cout << *(t.second) << '\n';
	}
	for (auto t : company.programmers) {
		for (auto tt : t.second) {
			cout << *tt << '\n';
		}
	}
	for (auto t : company.testers) {
		for (auto tt : t.second) {
			cout << *tt << '\n';
		}
	}
	for (auto t : company.drivers) {
		cout << *t << '\n';
	}
	for (auto t : company.cleaners) {
		cout << *t << '\n';
	}
	return 0;
}