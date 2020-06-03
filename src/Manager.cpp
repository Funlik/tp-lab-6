#include<iostream>
#include"Manager.h"

using namespace std;

const double managCoefPR = 1.2;
const double prManMoneyPerSubord = 2000, senManMoneyPerSubord = 5000;
double Manager::calcPR(double share, double prjBudget)
{
	return share * prjBudget;
}

double ProjectManager::calcPR(double share, double prjBudget)
{
	return share * prjBudget * managCoefPR;
}

double ProjectManager::calcHD(int subNum)
{
	return subNum * prManMoneyPerSubord;
}

double SeniorManager::calcHD(int subNum)
{
	return subNum * senManMoneyPerSubord;
}

void Manager::print_inf()
{
	cout << "[Manager]: id = " << id << ", name = " << name
		<< ", payment = " << payment << ", worktime = "
		<< worktime << "\nProject = " << project << "\n";
}

void ProjectManager::print_inf()
{
	cout << "[ProjectManager]: id = " << id << ", name = " << name
		<< ", payment = " << payment << ", worktime = "
		<<  worktime << "\nProject = " << project << ", Employees number: " << subNum  << "\n";
}

void SeniorManager::print_inf()
{
	cout << "[ProjectManager]: id = " << id << ", name = " << name
		<< ", payment = " << payment << ", worktime = "
		<< worktime << "\nProject = " << project << ", Employees number: " << subNum << "\n";
}