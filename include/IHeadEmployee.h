#ifndef IHEADEMPLOYEE_H
#define IHEADEMPLOYEE_H

#include <cstdint>

class IHeadEmployee
{
public:
    virtual int32_t CalculateHeadSalary() = 0;
};

#endif // IHEADEMPLOYEE_H
