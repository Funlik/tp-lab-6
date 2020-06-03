#include "Employee.h"

#include <utility>

Employee::Employee(unsigned int new_id, std::string new_name, unsigned int new_worktime)
{
    this->id = new_id;
    this->name = std::move(new_name);
    this->worktime = new_worktime;
    this->payment = 0;
}

void Employee::setID(unsigned int new_id)
{
    this->id = new_id;
}

unsigned int Employee::getID()
{
    return this->id;
}

void Employee::setName(std::string new_name)
{
    this->name = std::move(new_name);
}

std::string Employee::getName()
{
    return this->name;
}

void Employee::setWorkTime(unsigned int new_worktime)
{
    this->worktime = new_worktime;
};

unsigned int Employee::getWorkTime()
{
    return this->worktime;
};

void Employee::setPayment(unsigned int new_payment)
{
    payment = new_payment;
};

unsigned int Employee::getPayment()
{
    return this->payment;
};