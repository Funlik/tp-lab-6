#include "Personal.h"

Personal::Personal(int id, std::string name, double worktime, double base)
    :Employee(id, name, worktime)
{
    this->base = base;
}

Personal::~Personal()
{
}

double Personal::getBase()
{
    return this->base;
}

void Personal::setBase(double base)
{
    this->base = base;
}

double Personal::calculateWorkTimePayment()
{
    return this->worktime * this->base;
}

void Personal::calculatePayment()
{
    this->payment = this->calculateWorkTimePayment();
}

