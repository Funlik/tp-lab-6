#ifndef STAFFEMPLOYEE_H
#define STAFFEMPLOYEE_H

#include "Employee.h"
#include "IWorkTimeEmployee.h"

class StaffEmployee : public Employee, public IWorkTimeEmployee
{
private:
    int32_t base;

protected:
    StaffEmployee(int32_t id, std::string name, int32_t worktime, int32_t base)
        : Employee(id, name, worktime)
    {
        this->base = base;
    }

public:
    int32_t GetBase() { return base; }

    virtual int32_t CalculateSalary() override { return CalculateWorkTimeSalary(); }
    virtual int32_t CalculateWorkTimeSalary() override { return base * GetWorktime(); }
};

#endif // STAFFEMPLOYEE_H
