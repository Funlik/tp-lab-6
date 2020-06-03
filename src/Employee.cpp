#include  "Employee.h"

Employee::Employee(int id, std::string name)
{
    this->id = id;
    this->name = name;
    this->worktime = 0;
    this->payment = 0;
}

Employee::Employee(int id, std::string name, double worktime)
{
    this->id = id;
    this->name = name;
    this->worktime = worktime;
    this->payment = 0;
}

Employee::~Employee()
{
}

int Employee::getId()
{
    return this->id;
}

std::string Employee::getName()
{
    return this->name;
}

double Employee::getWorktime()
{
    return this->worktime;
}

double Employee::getPayment()
{
    return this->payment;
}

void Employee::setID(int id)
{
    this->id = id;
}

void Employee::setName(std::string name)
{
    this->name = name;
}

void Employee::setWorktime(double worktime)
{
    this->worktime = worktime;
}

void Employee::setPayment(double payment)
{
    this->payment = payment;
}
