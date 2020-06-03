#include "Manager.h"

Manager::Manager(int id, std::string name, double budget, double percent)
    : Employee(id, name)
{
    this->budget = budget;
    this->percent = percent;
}

Manager::~Manager()
{
}

double Manager::calculateProjectPayment()
{
    return this->percent * (this->budget / 100);
}

void Manager::calculatePayment()
{
    this->payment = this->calculateProjectPayment();
}
