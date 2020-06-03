#include "Personal.h"

Personal::Personal(std::string name, int sallary): Employee(name)
{
    this->sallary = sallary;
    //ctor
}

std::string Personal::toString(){
    return this->Employee::toString() + " " + std::to_string(this->getSal()) + " " + std::to_string(this->getWorktime()) + " NaP";
}
