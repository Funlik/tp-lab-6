#pragma once
#include<iostream>
#include<string>

using namespace std;
class Employee{
protected:
	int id; //идентификационный номер.
	string name; //ФИО.
	int worktime; //отработанное время.
	int payment; //заработная плата.
public:
	Employee(int id, string name, int worktime);
	string getName();
	virtual int getPayment() = 0;
};
class WorkTime{
public:
	virtual int countByTime() = 0;
}; //- расчет оплаты исходя из отработанного времени(часы умножаются на ставку).
class Project{
protected:
	int fund;
public:
	Project(int fund);
	virtual double countByProject() = 0;
};// -расчет оплаты исходя из участия в проекте(бюджет проекта делится пропорционально персональному вкладу).
class Heading{
public:
	virtual int countByHeading() = 0;
};// -расчет оплаты исходя из руководства(количество подчиненных).
