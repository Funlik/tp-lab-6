
#include "Project.h"

Project::~Project() {

}

std::string Project::getName() {
    return name;
}

void Project::setName(std::string name) {
    this->name = name;
}

std::vector<Employee*> Project::getStaff() {
    return staff;
}

void Project::setStaff(std::vector<Employee *> staff) {
    this->staff = staff;
}

Manager *Project::getManager() {
    return manager;
}

void Project::setManager(Manager *manager) {
    this->manager = manager;
}

Project::Project(std::string name, std::vector<Employee*> staff, Manager *manager) {
    this->name = name;
    this->staff = staff;
    this->manager = manager;
}

void Project::addEngineer(Engineer *engineer) {
    staff.push_back(engineer);
}
