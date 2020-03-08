#ifndef DRIVER_H
#define DRIVER_H

#include "StaffEmployee.h"

class Driver : public StaffEmployee
{
public:
    Driver(int32_t id, std::string name, int32_t worktime)
        : StaffEmployee(id, name, worktime, 25) { }
};

#endif // DRIVER_H
