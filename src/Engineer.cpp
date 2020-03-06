#include "Engineer.h"

Engineer::Engineer(int id, std::string name, double worktime, double base, double budget, double percent)
    : Employee(id, name, worktime)
{
    this->base = base;
    this->budget = budget;
    this->percent = percent;
}

Engineer::~Engineer()
{
}

double Engineer::calculateWorkTimePayment()
{
    return this->worktime * this->base;
}

double Engineer::calculateProjectPayment()
{
    return this->percent * (this->budget / 100);
}

void Engineer::calculatePayment()
{
    this->payment = this->calculateWorkTimePayment() + this->calculateProjectPayment();
}