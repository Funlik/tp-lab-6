#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include "IProject.h"

class Manager : public Employee, public IProject
{
protected:
    double budget;
    double percent;
public:
    Manager(int id, std::string name, double budget, double percent);
    ~Manager();
    double calculateProjectPayment();
    void calculatePayment();
};

#endif