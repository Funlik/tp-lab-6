#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"
#include "IProjectEmployee.h"
#include "IWorkTimeEmployee.h"

class Engineer : public Employee, public IProjectEmployee, public IWorkTimeEmployee
{
private:
    int32_t base;
    int32_t budget;
    float share;

protected:
    Engineer(int32_t id, std::string name, int32_t worktime, int32_t base, int32_t budget, float share)
        : Employee(id, name, worktime)
    {
        this->base = base;
        this->budget = budget;
        this->share = share;
    }

public:
    int32_t GetBase() { return base; }
    int32_t GetBudget() { return budget; }
    float GetShare() { return share; }

    virtual int32_t CalculateSalary() override { return CalculateWorkTimeSalary() + CalculateProjectSalary(); }
    virtual int32_t CalculateWorkTimeSalary() override { return base * GetWorktime(); }
    virtual int32_t CalculateProjectSalary() override { return (int32_t)(share * budget); }
};

#endif // ENGINEER_H
