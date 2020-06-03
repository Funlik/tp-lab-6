#ifndef DRIVER_H
#define DRIVER_H

#include "StaffEmployee.h"

constexpr int32_t DriverBase = 25;

class Driver : public StaffEmployee
{
public:
    Driver(int32_t id, std::string name, int32_t worktime)
        : StaffEmployee(id, name, worktime, DriverBase) { }
};

#endif // DRIVER_H
