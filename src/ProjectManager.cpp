#include "ProjectManager.h"

ProjectManager::ProjectManager(std::string name, int emp_count): Manager(name)
{
    this->emp_count = emp_count;
    //ctor
}

std::string ProjectManager::toString(){
    return this->Employee::toString() + " 0 " + std::to_string(this->getEmp()) + " " + this->getPrName();
}
