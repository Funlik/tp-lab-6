#include "Personal.h"

Personal::Personal(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_base):
        Employee(new_id, new_name, new_worktime)
{
    this->base = new_base;
}

unsigned int Personal::calculateWorkTimePayment()
{
    return this->worktime * this->base;
}

void Personal::calculatePayment()
{
    this->payment = calculateWorkTimePayment();
}

void Personal::setBase(unsigned int new_base)
{
    this->base = new_base;
}

unsigned int Personal::getBase()
{
    return this->base;
}


