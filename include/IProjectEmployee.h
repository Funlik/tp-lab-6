#ifndef IPROJECTEMPLOYEE_H
#define IPROJECTEMPLOYEE_H

#include <cstdint>

class IProjectEmployee
{
public:
    virtual int32_t CalculateProjectSalary() = 0;
};

#endif // IPROJECTEMPLOYEE_H
