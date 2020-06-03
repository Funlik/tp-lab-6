#pragma once
#include <vector>
#include "Employee.h"
#include "Manager.h"
#include "Engineer.h"

class Project {
public:
    Project(std::string name, std::vector<Employee*> staff, Manager *manager);

    ~Project();

    std::string getName();
    void setName(std::string name);

    std::vector<Employee*> getStaff();
    void setStaff(std::vector<Employee*> staff);

    Manager *getManager();
    void setManager(Manager *manager);

    void addEngineer(Engineer* engineer);

private:
    std::string name;
    std::vector<Employee*> staff;
    class Manager* manager;
};
