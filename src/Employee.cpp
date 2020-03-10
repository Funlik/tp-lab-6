#include "Employee.h"

Employee::Employee(int id, string name, string occupation)
{
    this->id = id;
    this->name = name;
    this->occupation = occupation;
    this->payment = 0;
    this->worktime = 0;
}

int Employee::get_id() const
{
    return this->id;
}

const string& Employee::get_name() const
{
    return this->name;
}

const string& Employee::get_occupation() const
{
    return this->occupation;
}

int Employee::get_worktime() const
{
    return this->worktime;
}

int Employee::get_payment() const
{
    return this->payment;
}

void Employee::set_worktime(int new_worktime)
{
    this->worktime = new_worktime;
}
