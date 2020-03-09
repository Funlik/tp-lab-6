#ifndef DRIVER_H
#define DRIVER_H

#include "StaffEmployee.h"

class Driver : public StaffEmployee
{
public:
    static constexpr int32_t base = 25;

    Driver(int32_t id, std::string name, int32_t worktime)
        : StaffEmployee(id, name, worktime, base) { }
};

#endif // DRIVER_H
