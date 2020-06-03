#pragma once
#include<iostream>
#include<string>
#include "employee.h"
using namespace std;
class Personal :public Employee, public WorkTime{
protected:
	int rate;
public:
	Personal(int id, string name, int worktime, int rate);
	int countByTime();
	int getPayment();
}; //работник по найму с оплатой за фактически отработанное время.Имеет ставку за час.
//third level
class Cleaner:public Personal{
public:
	Cleaner(int id, string name, int worktime, int rate) :Personal(id, name, worktime, rate){};
	int getPayment();
	
}; //уборщица.
class Driver:public Personal{
private:
	int overtime;
public:
	Driver(int id, string name, int worktime, int rate, int overtime);
	int getPayment();
}; // водитель.

