#include<iostream>
#include"Engineer.h"
const double programCoefWT = 1.1, testerCoefWT = 1.2;
const double moneyPerSubord = 10000;
using namespace std;

double Engineer::calcPR(double share, double prjBudget)
{
	return share * prjBudget;
}


void Engineer::print_inf()
{
	cout << "[Engineer]: id = " << id << ", name = " << name
		<< ", payment = " << payment << ", worktime = "
		<< worktime << "\nProject = " << project << "\n";
}

void Programmer::print_inf()
{
	cout << "[Programmer]: id = " << id << ", name = " << name
		<< ", payment = " << payment << ", worktime = "
		<< worktime << "\nProject = " << project << "\n";
}

void Tester::print_inf()
{
	cout << "[Tester]: id = " << id << ", name = " << name
		<< ", payment = " << payment << ", worktime = "
		<< worktime << "\nProject = " << project << "\n";
}

void TeamLeader::print_inf()
{
	cout << "[TeamLeader]: id = " << id << ", name = " << name
		<< ", payment = " << payment << ", worktime = "
		<< worktime << "\nProject = " << project << ", Employees number = " << subNum << "\n";
}

double Engineer::calcWT(double wt, double baseRate)
{
	return wt * baseRate * programCoefWT;
}


double Programmer::calcWT(double wt, double baseRate)
{ 
	return wt * baseRate * programCoefWT;
}


double Tester::calcWT(double wt, double baseRate)
{
	return wt * baseRate * testerCoefWT;
}


double TeamLeader::calcHD(int subNum)
{
	return subNum * moneyPerSubord;
}
