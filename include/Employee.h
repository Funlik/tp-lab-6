#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include<vector>


using namespace std;

class Employee
{
protected:
	int id;
	string name;
	int work_time;
	int income;
	string profession;
public:
	Employee();
	Employee(int id, string name, int worktime);
	
	string get_profession() {
		return profession;
	};
	int get_id()
	{
		return id;
	}
	string get_name() {
		return name;
	}
};

#endif