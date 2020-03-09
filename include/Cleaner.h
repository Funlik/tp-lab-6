#ifndef CLEANER_H
#define CLEANER_H

#include "StaffEmployee.h"

class Cleaner : public StaffEmployee
{
public:
    static constexpr int32_t base = 16;

    Cleaner(int32_t id, std::string name, int32_t worktime)
        : StaffEmployee(id, name, worktime, base) { }
};

#endif // CLEANER_H
