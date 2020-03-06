#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"
#include "IProject.h"
#include "IWorkTime.h"

class Engineer : public Employee
{
protected:
    double base;
    double budget;
    double percent;

public:
    Engineer(int id, std::string name, double worktime, double base, double budget, double percent);
    ~Engineer();
    double calculateWorkTimePayment();
    virtual double calculateProjectPayment();
    void calculatePayment();
};

#endif