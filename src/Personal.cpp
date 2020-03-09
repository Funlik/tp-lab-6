#include "Personal.h"

//Personal

Personal::Personal(int id, std::string name, int hourlyWage) : Employee(id, name) 
{
	this->hourlyWage = hourlyWage;
};

int Personal::CalculateBaseWage() 
{
	return worktime * hourlyWage;
}

//Cleaner

Cleaner::Cleaner(int id, std::string name, int hourlyWage) : Personal(id, name, hourlyWage) {};

int Cleaner::CalculateWage() 
{
	wage = CalculateBaseWage();
	return wage;
}

//Driver

Driver::Driver(int id, std::string name, int hourlyWage, int extraWage) : Personal(id, name, hourlyWage)
{
	this->extraWage = extraWage;
}

int Driver::CalculateWage()
{
	wage = CalculateBaseWage() + extraWage;
	return wage;
}