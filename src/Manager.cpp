#include "Manager.h"

Manager::Manager(std::string name): Employee(name)
{
    //ctor
}

std::string Manager::toString(){
    return this->Employee::toString() + " 0 0 " + this->getPrName();
}



