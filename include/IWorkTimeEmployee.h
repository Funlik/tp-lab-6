#ifndef IWORKTIMEEMPLOYEE_H
#define IWORKTIMEEMPLOYEE_H

#include <cstdint>

class IWorkTimeEmployee
{
public:
    virtual int32_t CalculateWorkTimeSalary() = 0;
};

#endif // IWORKTIMEEMPLOYEE_H
