#include "Employee.h"

Employee::Employee(const Employee& empl)
{
	ID = empl.ID;
	Name = empl.Name;
	WorkTime = empl.WorkTime;
}

Employee& Employee::operator=(const Employee& empl)
{
	if (this != &empl)
	{
		ID = empl.ID;
		Name = empl.Name;
		WorkTime = empl.WorkTime;
	}
	return *this;
}

void Employee::print()  const
{
	cout << ID << " " << Name << " WT: " << WorkTime << endl;
}

void Employee::printEmpl(Employee& empl)
{
	cout << "Empl Inf: " << endl;
	empl.print();
}

void Employee::setWorkTime(int WT)
{
	WorkTime = WT;
}

void Employee::workProsses(int WTmodif)
{
	WorkTime += WTmodif;
}

int Employee::getID() const
{
	return ID;
}

string Employee::getName() const
{
	return Name;
}

int Employee::getWorkTime() const
{
	return WorkTime;
}

int Employee::getPayment() const 
{
	return Payment;
}

int Employee::paymentCount()
{

	return getWorkTime() * getPayment();
}

