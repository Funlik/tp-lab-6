#pragma once
#include "Employee.h"
#include "IWorkTime.h"
#include <string>
using namespace std;
class Personal :
	public Employee, public IWorkTime
{
public:
	Personal(string fio, int id, int payment, int workTime);
	~Personal();
	int getSalary();
	int getSalaryByWorkTime();
	int getWorkTime();
	void setWorkTime(int workTime);
private:
	int workTime;
};

