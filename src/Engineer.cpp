#include "Engineer.h"

Engineer::Engineer(std::string name, int sallary): Employee(name)
{
    this->sallary = sallary;
}

std::string Engineer::toString(){
    return this->Employee::toString() + " " + std::to_string(this->getSal()) + " " + std::to_string(this->getWorktime()) + " " + this->getPrName();
}
