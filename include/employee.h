#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "workproject.h"

using namespace std;

class Employee
{
protected:
	int id; //айди
	string fio; //фио
	int worktime; //проработанное время
	float payment; //зарплата
	//vector<string> employee;
public:
	Employee(int id, string fio, int worktime);
	//int getid(int id); //?
	string getfio(); //?
	//float getworktime(int worktime); //?
	float getpayment(); //?
	//virtual void create() = 0; создает фабрика
	virtual void solary() = 0; //начисление зарплаты
	// void settime(); //выставляет всем одно и тоже время например 100 часов, в мейн?
};

class WorkTime
{
public:
	//virtual float calcwtpayment(float base) = 0; //расчет зарплаты по окладу?
	virtual float calcwtpayment() = 0;
};

class Project
{
public:
	//virtual float calcprpayment(float percent, int budget) = 0; //расчет зарплаты за проект?
	virtual float calcprpayment() = 0;
};

class Heading
{
public:
	//virtual float calchepayment(int leaderDase) = 0; //расчет зарплаты за главенство?
	virtual float calchepayment() = 0;
};

#endif