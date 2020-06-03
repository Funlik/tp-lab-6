#include "Programmer.h"

Programmer::Programmer(int id, std::string name, double worktime, double base, double budget, double persent)
    : Engineer(id, name, worktime, base, budget, persent)
{
}

Programmer::~Programmer()
{
}