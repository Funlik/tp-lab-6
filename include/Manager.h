#ifndef UNTITLED1_MANAGER_H
#define UNTITLED1_MANAGER_H


#include "Employee.h"
#include "Project.h"

class Manager: public Employee, public Project {
private:
    std::string position = "Manager";

public:
    virtual double payroll2(int projectBudget);
    explicit Manager(int _id = 0, std::string _name = "Name", int _worktime = 0);
    virtual std::string getPosition();
};


#endif //UNTITLED1_MANAGER_H
