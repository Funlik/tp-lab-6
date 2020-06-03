#include<iostream>
#include"Personal.h"

using namespace std;

double Cleaner::calcWT(double wt, double baseRate)
{
	return wt * baseRate;
}

double Driver::calcWT(double wt, double baseRate)
{
	return wt * baseRate * 1.3;
}

void Cleaner::print_inf() 
{
	cout << "[Cleaner]: id = " << id << ", name = " << name
		<< ", payment = " << payment << ", worktime = "
		<< worktime << "\n";
}

void Driver::print_inf()
{
	cout << "[Driver]: id = " << id << ", name = " << name
		<< ", payment = " << payment << ", worktime = "
		<< worktime << "\n";
}