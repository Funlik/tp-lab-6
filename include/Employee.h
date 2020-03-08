#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
private:
    int32_t id;
    std::string name;
    int32_t worktime;

protected:
    Employee(int32_t id, std::string name, int32_t worktime)
    {
        this->id = id;
        this->name = name;
        this->worktime = worktime;
    }

public:
    int32_t GetId() { return id; }
    std::string GetName() { return name; }
    int32_t GetWorktime() { return worktime; }

    virtual int32_t CalculateSalary() = 0;
};

#endif // EMPLOYEE_H
