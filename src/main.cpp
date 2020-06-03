#include "Factory.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector <string> split(string buffer, char del)
{
	vector <string> result;
	string temp;
	stringstream stream;
	stream << buffer;
	while (getline(stream, temp, del))
		result.push_back(temp);
	return result;
}

int main() {
	Projects* project_1 = new Projects("project_1", 150000);
	Projects* project_2 = new Projects("project_2", 250000);
	Projects* project_3 = new Projects("project_3", 350000);

	vector<Projects*> projects{ project_1, project_2, project_3 };

	Factory EmpFactory(projects);

	vector<Employee*> employeers;

	ifstream fin("names.txt");

	while (!fin.eof()) {
		string buffer;
		getline(fin, buffer, '\n');
		vector<string> info = split(buffer, ':');
		employeers.push_back(EmpFactory.create(info));
	}

	for (auto employee : employeers) {
		employee->calcpayment();
		cout << "FIO : " << employee->getfio() << "\nMoney: " << employee->getpayment() << endl << endl;
	}

	return 0;
}