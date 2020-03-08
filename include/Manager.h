#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include "IProjectEmployee.h"

class Manager : public Employee, public IProjectEmployee
{
private:
    int32_t budget;
    float share;

public:
    Manager(int32_t id, std::string name, int32_t worktime, int32_t budget, float share)
        : Employee(id, name, worktime)
    {
        this->budget = budget;
        this->share = share;
    }

    int32_t GetBudget() { return budget; }
    float GetShare() { return share; }

    virtual int32_t CalculateSalary() override { return CalculateProjectSalary(); }
    virtual int32_t CalculateProjectSalary() override { return (int32_t)(share * budget); }
};

#endif // MANAGER_H
