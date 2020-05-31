#include "Factory.h"
#include <sstream>

vector<string> split(const string& s, char delimiter) {
	vector<string> tokens;
	string token;
	istringstream tokenStream(s);
	while (getline(tokenStream, token, delimiter))
		tokens.push_back(token);
	return tokens;
}

int main() {

	vector<Employee*> employees;

	ifstream list("data.txt");
	system("chcp 1251");
	while (!list.eof()) {
		string buf;
		getline(list, buf, '\n');
		vector<string> data = split(buf, ':');
		employees.push_back(Factory::createEmployee(data));
	}

	// Назначаем работникам одинаковое количество часов, делаем рассчет ЗП и вывод данных
	cout << endl << "Ведомость:" << endl;
	for (auto& employee : employees) {
		employee->setWorkTime(40);
		employee->calc();
		employee->print();
	}

	return 0;
}