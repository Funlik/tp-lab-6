#ifndef CLEANER_H
#define CLEANER_H

#include "StaffEmployee.h"

constexpr int32_t CleanerBase = 16;

class Cleaner : public StaffEmployee
{
public:
    Cleaner(int32_t id, std::string name, int32_t worktime)
        : StaffEmployee(id, name, worktime, CleanerBase) { }
};

#endif // CLEANER_H
