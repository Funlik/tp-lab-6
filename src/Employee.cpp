#include "Employee.h"
std::string Employee::toString(){
    return std::to_string(this->getId()) + " " + this->getName() + " " + this->getPosition();
}
